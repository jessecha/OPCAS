#!/usr/bin/python
# -*- coding: utf-8 -*-
from __future__ import division
from __future__ import absolute_import
from __future__ import print_function
from random import shuffle
from std_msgs.msg import UInt16
from std_msgs.msg import String
from sensor_msgs.msg import Joy
from optparse import OptionParser
from datetime import datetime
from PIL import Image  
from sensor_msgs.msg import Image as ImageMsg
from cv_bridge import CvBridge, CvBridgeError
from sklearn.model_selection import train_test_split
from sklearn import preprocessing
from sklearn.externals import joblib
from keras.models import Sequential
from keras.layers import Flatten, Conv2D, Activation, Dense, Dropout, MaxPooling3D, Conv3D
from keras import optimizers
from keras import regularizers
from keras.layers.normalization import BatchNormalization
from keras.layers.noise import AlphaDropout
from keras import callbacks
from keras.backend.tensorflow_backend import set_session
import serial
import matplotlib.pyplot as plt
import glob
import roslib.message
import os
import csv
import sys
import time
import subprocess
import csv
import math
import rospy
import numpy as np
import cv2
import pickle
import pandas as pd
import argparse
import tensorflow as tf
from tensorflow.python.client import device_lib
from tensorflow.python.util import nest
from model.models import build_3d_cnn
config = tf.ConfigProto(allow_soft_placement=True, device_count = {'CPU' : 1, 'GPU' : 1})
config.gpu_options.allow_growth = True
set_session(tf.Session(config=config))
os.environ["CUDA_VISIBLE_DEVICES"] = ""
global bridge
bridge = CvBridge()

def deploy_dataset():
	x = []
        img_stack = []
        img = []
	length_of_stacked_images = 2
	width_of_downsize = 100
	height_of_downsize =100
	for i in range (0, length_of_stacked_images):
		cam.get_image(img, timeout=20000)
		cv2_img = img.get_image_data_numpy()
		img.append(cv2_img)
		img[i] = cv2.resize(img[i],(640, 512), interpolation = cv2.INTER_AREA)
        	img[i] = img[i][210:500, 70:570]
        	img[i] = cv2.resize(img[i], (width_of_downsize, height_of_downsize), interpolation=cv2.INTER_CUBIC)
       	        img_stack.append(img[i].astype(np.float32))
        x.append(np.stack(img_stack))
        return np.stack(x)  

def main():
	rospy.init_node('image_to_neural_net')
    	increment_val = 0
    	cam = xiapi.Camera(dev_id=0)
    	#cam.set_debug_level("XI_DL_TRACE")
    	cam.open_device() 
    	cam.set_downsampling_type('XI_SKIPPING')
    	cam.set_downsampling("XI_DWN_2x2")
    	cam.set_exposure(int(20000))
    	cam.set_gain(float(5))
    	cam.set_limit_bandwidth(2500)
    	cam.set_imgdataformat('XI_RGB24')
    	#create instance of Image to store image data and metadata
    	img = xiapi.Image()
    	print('Starting data acquisition...')
   	cam.start_acquisition() 
	arduino = serial.Serial('/dev/ttyACM0', 115200, timeout=.1)
	time.sleep(1)
	with tf.device('/gpu:0'):
		model = build_3d_cnn(width_of_downsize, height_of_downsize, 3, length_of_stacked_images)
    		saved_file_name = './3DCNN.hdf5'
    		model.load_weights(saved_file_name)
		throttler = 0
		while True: 
			deploy_x = deploy_dataset()
   			model_y = model.predict(deploy_x, batch_size=1, verbose=0)
    			attrs = ['steering', 'throttle'] 
    			steering = float(model_y[0][0])
    			throttle = float(model_y[0][1])
			#throttleposition = (1489 + 100*(throttle))
			if throttler == 1:
				throttleposition = 1500
				throttler = 0
			if throttler == 0:
				throttleposition = 1489
				throttler = throttler + 1			
			steeringangle = (109 + 100*((steering) + 0.25))
			if steeringangle < 83:
				steeringangle = 83
			if steeringangle >127:
				steeringangle = 127 
			arduino.write(str(throttleposition) + str(steeringangle)) 
			print(steeringangle)
			print(throttleposition)
				

if __name__ == '__main__':
    main()
