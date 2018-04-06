from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
import numpy as np
import cv2
import tensorflow as tf
import pickle
import os
import cv2
import numpy as np
import time
import pandas as pd
from sklearn.metrics import r2_score
from sklearn.model_selection import train_test_split
from sklearn import preprocessing
from keras.models import Sequential
from keras.layers import Flatten, Convolution2D, Activation, Dense, Dropout, MaxPooling2D, SpatialDropout2D, Lambda
from keras import optimizers
from keras import regularizers
from keras.layers.advanced_activations import ELU
from keras.regularizers import l2
from keras.layers.normalization import BatchNormalization
from keras.layers.noise import AlphaDropout
from keras import callbacks
from keras.layers.recurrent import LSTM
from keras.layers.wrappers import TimeDistributed
from sklearn.externals import joblib
import matplotlib.pyplot as plt
import argparse
from data_utils.data_processor import load_dataset
from model.models import build_lrcn
from model_test_utils.metrics import mean_absolute_relative_error
from model_test_utils.metrics import coefficient_of_determination
from keras.backend.tensorflow_backend import set_session
config = tf.ConfigProto(allow_soft_placement=True, device_count = {'CPU' : 1, 'GPU' : 1})
config.gpu_options.allow_growth = True
set_session(tf.Session(config=config))

###Documentation###
#1. Set number of stacked images 
#2. Set image width & height
#3. Set correct name for NN model

def main(*args, **kwargs):
    saved_file_name = './keras_2d_cnn_{}stacked_{}jumps_{}depth.hdf5'.format(kwargs['n_stacked'],
            kwargs['n_jump'], kwargs['depth'])
    d = kwargs['depth']
    s = kwargs['n_stacked']
    data_path = os.path.join(
        os.path.dirname(os.path.abspath(os.path.dirname(__file__))),
        'dataset'
    )
    img_path = '/home/jesse/Desktop/imagefiles/image_set'
    out_path = '/home/jesse/Desktop/training_dataset.csv'
    with tf.device('/gpu:0'):
        train_x, val_x, test_x, train_y, val_y, test_y = load_dataset(
		n_stacked=3,img_path = img_path, out_path=out_path, w=157, h=157, d=3,
                 val_size=0.1, test_size=0.1, n_jump=None
                )
	train_x = np.squeeze(train_x)
    	val_x = np.squeeze(val_x)
        test_x = np.squeeze(test_x)
        train_y = np.squeeze(train_y)
        val_y = np.squeeze(val_y)
        test_y = np.squeeze(test_y)
        print("number of train images:", train_x.shape)
        print("number of test images:", test_x.shape)
        print("number of train output sets:", train_y.shape)
        print("number of test output sets:", test_y.shape)

        model = build_lrcn(w=157, h=157, d=3, s=3)
        if kwargs['mode'] == 'train':
            stop_callbacks = callbacks.EarlyStopping(monitor='val_loss',patience=50, verbose=0, mode='min',min_delta=0)
            checkpoint = callbacks.ModelCheckpoint(saved_file_name, monitor='val_loss',verbose=1,save_best_only=True,mode='min')
            history = model.fit(train_x, train_y,
                    batch_size=32,epochs=50000,callbacks=[stop_callbacks,checkpoint],
                    validation_data=(val_x, val_y),shuffle=True, verbose=1)

        print("Start test....")
        model.load_weights(saved_file_name)
        model_y = model.predict(test_x, batch_size=1, verbose=0)
	scores = model.evaluate(test_x, test_y, batch_size=1, verbose=1)
	print("%s: %.2f%%" % (model.metrics_names[1], scores[1]*100))
	print("%s: %.2f%%" % (model.metrics_names[0], scores[0]*100))
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

    # test result
    attrs = ['steering', 'throttle']
    for i in range(2):
        mare = mean_absolute_relative_error(test_y[:,i], model_y[:,i])
        print(attrs[i] +' mare: ' + str(mare))
        R2_val = r2_score(test_y[:,i], model_y[:,i])
        print(attrs[i] +'R^2: ' + str(R2_val))
    csvdata = pd.DataFrame(test_y, columns=attrs)
    csvdata['model_steering'] = model_y[:,0]
    csvdata['model_throttle'] = model_y[:,1]
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
        type=int, default=1
    )
    parser.add_argument(
        "--n_stacked", help="# of stacked frame for time axis",
        type=int, default=3
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

    args = parser.parse_args()
    main(**vars(args))

