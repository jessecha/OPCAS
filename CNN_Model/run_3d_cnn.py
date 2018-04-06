from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
import argparse
import numpy as np
import cv2
import tensorflow as tf
from keras.backend.tensorflow_backend import set_session
config = tf.ConfigProto(allow_soft_placement=True, device_count = {'CPU' : 1, 'GPU' : 1})
config.gpu_options.allow_growth = True
set_session(tf.Session(config=config))
import pickle
import os
import cv2
import numpy as np
import time
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn import preprocessing
from keras.models import Sequential
from keras.layers import Flatten, Activation, Dense, Dropout, MaxPooling3D, Conv3D
from keras import optimizers
from keras import regularizers
from keras.layers.normalization import BatchNormalization
from keras.layers.noise import AlphaDropout
from keras import callbacks
from sklearn.externals import joblib
import matplotlib.pyplot as plt
from data_utils.data_processor import load_dataset
from model.models import build_3d_cnn
from model_test_utils.metrics import mean_absolute_relative_error
from model_test_utils.metrics import coefficient_of_determination
from keras.layers.advanced_activations import ELU
os.environ["CUDA_VISIBLE_DEVICES"] = ""
import tensorflow as tf
from tensorflow.python.client import device_lib
print(device_lib.list_local_devices())

def main(*args, **kwargs):
    if kwargs['n_jump'] == 0:
        kwargs['n_jump'] = kwargs['n_stacked']

    saved_file_name = './keras_3dcnn_{}stacked_{}jumps_{}depth.hdf5'.format(
            kwargs['n_stacked'], kwargs['n_jump'], kwargs['depth'])

    data_path = os.path.join(
        os.path.dirname(os.path.abspath(os.path.dirname(__file__))),
        'dataset'
    )
    img_path = os.path.join(kwargs['img_path'])
    out_path = os.path.join(kwargs['out_path'])
    n_stacked = kwargs['n_stacked']

    train_x, val_x, test_x, train_y, val_y, test_y = load_dataset(
        n_stacked, img_path, out_path,
        h=kwargs['height'], w=kwargs['width'], d=kwargs['depth'],
        val_size=0.1, test_size=0.1,
        n_jump=kwargs['n_jump']
    )
    print("number of train images:", train_x.shape)
    print("number of validation images:", val_x.shape)
    print("number of test images:", test_x.shape)
    print("number of train output sets:", train_y.shape)
    print("number of validation output sets:", val_y.shape)
    print("number of test output sets:", test_y.shape)

    with tf.device('/device:GPU:0'):

        model = build_3d_cnn(
            kwargs['width'], kwargs['height'],
            kwargs['depth'], kwargs['n_stacked']
        )
        # input()
        if kwargs['mode'] == 'train':
            print("press enter")
            stop_callbacks = callbacks.EarlyStopping(
                monitor='val_loss', patience=30, verbose=0, mode='min', min_delta=0
            )
            checkpoint = callbacks.ModelCheckpoint(
                saved_file_name, monitor='val_loss',
                verbose=1, save_best_only=True, mode='min'
            )
            history = model.fit(
                train_x, train_y,
                batch_size=kwargs['batch_size'], epochs=kwargs['epochs'],
                callbacks=[stop_callbacks,checkpoint],
                validation_data=(val_x, val_y), shuffle=True
            )
        # test always
        print("Start test....")
        model.load_weights(saved_file_name)
        model_y_val = model.predict(val_x, batch_size=None, verbose=0)
        model_y = model.predict(test_x, batch_size=None, verbose=0)

        # train result
    if kwargs['mode'] == 'train':
        print(history.history.keys())
        # summarize history for accuracy
        plt.plot(history.history['acc'])
        plt.plot(history.history['val_acc'])
        plt.title('model accuracy')
        plt.ylabel('accuracy')
        plt.xlabel('epoch')
        plt.legend(['train', 'val'], loc='upper left')
        plt.show()
        
        # summarize history for loss
        plt.plot(history.history['loss'])
        plt.plot(history.history['val_loss'])
        plt.title('model loss')
        plt.ylabel('loss')
        plt.xlabel('epoch')
        plt.legend(['train', 'val'], loc='upper left')
        plt.show()

        # val result
    attrs = ['steering', 'throttle']
    for i in range(2):
        mare = mean_absolute_relative_error(val_y[:,i], model_y_val[:,i])
        print(attrs[i] +' mare: ' + str(mare))
        R2_val = coefficient_of_determination(val_y[:,i], model_y_val[:,i])
        print(attrs[i] +'R^2: ' + str(R2_val))
    csvdata = pd.DataFrame(val_y, columns=attrs)
    csvdata['model_steering'] = model_y_val[:,0]
    csvdata['model_throttle'] = model_y_val[:,1]
    result_file_name = './result_val_3dcnn_{}stacked_{}jumps_{}depth.csv'.format(
            kwargs['n_stacked'], kwargs['n_jump'], kwargs['depth'])
    csvdata.to_csv(result_file_name)
    print('val result saved')
        # test result
    attrs = ['steering', 'throttle']
    for i in range(2):
        mare = mean_absolute_relative_error(test_y[:,i], model_y[:,i])
        print(attrs[i] +' mare: ' + str(mare))
        R2_val = coefficient_of_determination(test_y[:,i], model_y[:,i])
        print(attrs[i] +'R^2: ' + str(R2_val))
        print("maximum test accuracy was " + str(max(test_y[:,i])))
    csvdata = pd.DataFrame(test_y, columns=attrs)
    csvdata['model_steering'] = model_y[:,0]
    csvdata['model_throttle'] = model_y[:,1]
    result_file_name = './result_3dcnn_{}stacked_{}jumps_{}depth.csv'.format(
            kwargs['n_stacked'], kwargs['n_jump'], kwargs['depth'])
    csvdata.to_csv(result_file_name)
    print('test result saved')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "mode", help="train/test",
        type=str, choices=["train", "test"]
    )
    parser.add_argument(
        "--n_stacked", help="# of stacked frame for time axis",
        type=int, default=3
    )
    parser.add_argument(
        "--n_jump", help="time interval to get input, 0 for n_jump=n_stacked",
        type=int, default=1
    )
    parser.add_argument(
        "--width", help="width of input images",
        type=int, default=157
    )
    parser.add_argument(
        "--height", help="height of input images",
        type=int, default=157
    )
    parser.add_argument(
        "--depth", help="the number of channels of input images",
        type=int, default=3
    )
    parser.add_argument(
        "--img_path", help="image directory",
        type=str, default='/home/jesse/Desktop/imagefiles/image_set'
    )
    parser.add_argument(
        "--out_path", help="target csv filename",
        type=str, default='/home/jesse/Desktop/training_dataset.csv'
    )
    parser.add_argument(
        "--epochs", help="total number of training epochs",
        type=int, default=50000
    )
    parser.add_argument(
        "--batch_size", help="batch_size",
        type=int, default=32
    )

    args = parser.parse_args()
    main(**vars(args))

