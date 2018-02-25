from __future__ import absolute_import
from __future__ import division
from __future__ import print_function

# import argparse
import numpy as np
import cv2
import tensorflow as tf
import pickle

# from car_models import cnn_cccccfffff

import os
import cv2
import numpy as np
import time
import pandas as pd

from sklearn.model_selection import train_test_split
from sklearn import preprocessing
from keras.models import Sequential
from keras.layers import Flatten, Convolution2D, Activation, Dense, Dropout, MaxPooling2D, SpatialDropout2D
from keras import optimizers
from keras import regularizers
from keras.layers.normalization import BatchNormalization
from keras.layers.noise import AlphaDropout
from keras import callbacks
from sklearn.externals import joblib
import matplotlib.pyplot as plt
import argparse
from data_processing_v2 import load_dataset
from model_test_utils.metrics import mean_absolute_relative_error
from model_test_utils.metrics import coefficient_of_determination

# config = tf.ConfigProto()
# config.gpu_options.per_process_gpu_memory_fraction = 0.4
# session = tf.Session(config=config)


def build_cnn(w=200, h=150, d=3):
    model = Sequential()
    model.add(Lambda(lambda x: x/127.5 - 1.0,input_shape=(h,w,d)))
    model.add(Convolution2D(24, 5, 5, subsample=(2, 2), border_mode="same", W_regularizer=l2(0.001)))
    model.add(ELU())
    model.add(Convolution2D(36, 5, 5, subsample=(2, 2), border_mode="same", W_regularizer=l2(0.001)))
    model.add(ELU())
    model.add(Convolution2D(48, 3, 3, subsample=(2, 2), border_mode="same", W_regularizer=l2(0.001)))
    model.add(ELU())
    model.add(Convolution2D(64, 3, 3, subsample=(2, 2), border_mode="same", W_regularizer=l2(0.001)))
    model.add(Convolution2D(64, 3, 3, subsample=(2, 2), border_mode='same', W_regularizer=l2(0.001)))
    model.add(ELU())
    model.add(Flatten())
    model.add(Dropout(.2))
    model.add(ELU())
    model.add(Dense(512), W_regularizer=l2(0.001))
    model.add(Dropout(.5))
    model.add(ELU())
    model.add(Dense(256), W_regularizer=l2(0.001))
    model.add(ELU())
    model.add(Dense(128), W_regularizer=l2(0.001))
    model.add(ELU())
    model.add(Dense(2), W_regularizer=l2(0.001))

    model.compile(loss='mean_squared_error',
                  optimizer='adam',
                  metrics=['accuracy'])
    model.summary()
    return model

# train_x, train_y, test_x, test_y = load_dataset(path=path, percent_testing=0.20)
def main(*args, **kwargs):
    saved_file_name = './keras_2d_cnn_{}stacked_{}jumps_{}depth.hdf5'.format(kwargs['n_stacked'],
            kwargs['n_jump'], kwargs['depth'])
    d = kwargs['depth']
    s = kwargs['n_stacked']
    data_path = os.path.join(
        os.path.dirname(os.path.abspath(os.path.dirname(__file__))),
        'dataset'
    )
    img_path = os.path.join(data_path, 't1')
    out_path = os.path.join(data_path, 'trainingset_v5.csv')
    with tf.device('/gpu:0'):
        train_x, val_x, test_x, train_y, val_y, test_y = load_dataset(
                img_path=img_path, out_path=out_path, h=kwargs['height'],
                w=kwargs['width'], d=kwargs['depth'], s=kwargs['n_stacked'],
                j=kwargs['n_jump'], val_size=0.1, test_size=0.1)
        print("number of train images:", train_x.shape)
        print("number of test images:", test_x.shape)
        print("number of train output sets:", train_y.shape)
        print("number of test output sets:", test_y.shape)

        model = build_cnn(w=200, h=150, d=3)
        if kwargs['mode'] == 'train':
            stop_callbacks = callbacks.EarlyStopping(monitor='val_loss',patience=30, verbose=0, mode='min',min_delta=0)
            chekpoint = callbacks.ModelCheckpoint(saved_file_name, monitor='val_loss',verbose=0,save_best_only=True,mode='min')
            history = model.fit(train_x, train_y,
                    batch_size=16,epochs=50000,callbacks=[stop_callbacks,chekpoint],
                    validation_data=(val_x, val_y),shuffle=True)

        print("Start test....")
        model.load_weights(saved_file_name)
        model_y = model.predict(test_x, batch_size=1, verbose=0)


    # print(history.history.keys())
    #     # summarize history for accuracy
    # plt.plot(history.history['acc'])
    # plt.plot(history.history['val_acc'])
    # plt.title('model accuracy')
    # plt.ylabel('accuracy')
    # plt.xlabel('epoch')
    # plt.legend(['train', 'test'], loc='upper left')
    # plt.show()
    # # summarize history for loss
    # plt.plot(history.history['loss'])
    # plt.plot(history.history['val_loss'])
    # plt.title('model loss')
    # plt.ylabel('loss')
    # plt.xlabel('epoch')
    # plt.legend(['train', 'test'], loc='upper left')
    # plt.show()

    # test result
    attrs = ['steering', 'throttle', 'brake']
    for i in range(3):
        mare = mean_absolute_relative_error(test_y[:,i], model_y[:,i])
        print(attrs[i] +' mare: ' + str(mare))
        R2_val = coefficient_of_determination(test_y[:,i], model_y[:,i])
        print(attrs[i] +'R^2: ' + str(R2_val))

    csvdata = pd.DataFrame(test_y, columns=attrs)
    csvdata['model_steering'] = model_y[:,0]
    csvdata['model_throttle'] = model_y[:,1]
    csvdata['model_brake']    = model_y[:,2]
    result_file_name = './result_2d_cnn_{}stacked_{}jumps_{}depth.csv'.format(
            kwargs['n_stacked'], kwargs['n_jump'], kwargs['depth'])
    csvdata.to_csv(result_file_name)
    print('test result saved in ')




if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "mode", help="train/test",
        type=str, choices=["train", "test"]
    )
    parser.add_argument(
        "--n_jump", help="time interval to get input, 0 for n_jump=n_stacked",
        type=int, default=4
    )
    parser.add_argument(
        "--n_stacked", help="# of stacked frame for time axis",
        type=int, default=7
    )
    parser.add_argument(
        "--width", help="width of input images",
        type=int, default=108
    )
    parser.add_argument(
        "--height", help="height of input images",
        type=int, default=108
    )
    parser.add_argument(
        "--depth", help="the number of channels of input images",
        type=int, default=1
    )

    args = parser.parse_args()
    main(**vars(args))

