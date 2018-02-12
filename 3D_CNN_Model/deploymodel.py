#!/usr/bin/python
# -*- coding: utf-8 -*-
from __future__ import division
from __future__ import absolute_import
from __future__ import print_function
from random import shuffle
from std_msgs.msg import UInt16
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
# Custom Code
import data_processing_v2
from model import build_3d_cnn
from model_test_utils.metrics import mean_absolute_relative_error
from model_test_utils.metrics import coefficient_of_determination

config = tf.ConfigProto(allow_soft_placement=True, device_count = {'CPU' : 1, 'GPU' : 1})
config.gpu_options.per_process_gpu_memory_fraction = 0.95 #0.7
set_session(tf.Session(config=config))

os.environ["CUDA_VISIBLE_DEVICES"] = ""
print(device_lib.list_local_devices())
bridge = CvBridge()
print("start AI!")

def callback(data):
	steeringangle = UInt16() 
	throttleposition = UInt16()
	reverseposition = UInt16()
	global steering
	global throttle
	aimode = data.axes[1]
	if aimode > 0:
		print("AI MODE")
		print(steering)
		print(throttle)
		steeringangle = (105 + 150*((steering)))
		steeringangle = np.uint16(steeringangle)
		throttleposition = (1485 + 20*(1 + (throttle)))
		throttleposition = np.uint16(throttleposition)
		if steeringangle < 83:
			steeringangle = 83
		if steeringangle >127:
			steeringangle = 127
		if throttle > 1:
			throttle = 1
		if throttle < -0.99:
			pub.publish(steeringangle)

		if throttle > -0.99:   
			pub.publish(steeringangle)
			pubtwo.publish(throttleposition)
	else:
		steeringangle = (105 + 150*((data.axes[0])))
		steeringangle = np.uint16(steeringangle)
		throttleposition = (1485 + 20*(1 + (data.axes[2])))
		throttleposition = np.uint16(throttleposition)
		if steeringangle < 83:
			steeringangle = 83
		if steeringangle >127:
			steeringangle = 127
		if data.axes[2] < -0.99:
			reverseposition = (1485 - 50*(1+(data.axes[3]))*(1+(data.axes[3])))
			reverseposition = np.uint16(reverseposition)
			pub.publish(steeringangle)
			pubtwo.publish(reverseposition) 
		if data.axes[2] > -0.99:   
			pub.publish(steeringangle)
			pubtwo.publish(throttleposition)


def deploy_dataset(stacked_counter):
	length_of_stacked_images = 20
	length_of_jump = 4
	width_of_downsize = 160
	height_of_downsize =160
	img_stack = []
	x = []
	if stacked_counter == 0:
		img = [][]
		for i in range (0, length_of_stacked_images):
			cv2_img = rospy.wait_for_message(image_topic, ImageMsg)
			img[i] = bridge.imgmsg_to_cv2(cv2_img, "rgb8")
        		img[i] = cv2.imread(os.path.join(path, fname))  # original 640 x 480
        		img[i] = img[i][:, 80:-80]
        		img[i] = cv2.resize(img[i], (width_of_downsize, height_of_downsize), interpolation=cv2.INTER_CUBIC)  
			img = cv2.cvtColor(img[i],cv2.COLOR_BGR2HSV)
        		lower_green = np.array([50,100,50])
        		upper_green = np.array([75,255,230])
        		# Threshold the HSV image to get only green colors
        		mask = cv2.inRange(img, lower_green, upper_green)
        		img[i] = cv2.bitwise_and(img[i],img[i],mask = mask)
           		img[i] = cv2.cvtColor(img[i], cv2.COLOR_BGR2GRAY)  # 108 x 108
            		img[i] = np.expand_dims(img[i], axis=-1)  # 108 x 108 x 1
       		 	img_stack.append(img[i].astype(np.float32))
            	x.append(np.stack(img_stack))
    		return np.stack(x)  # train_x
	if stacked_counter != 0:
		for b in range (0, (length_of_stacked_images - length_of_jump)):
			img[b] = img[b+length_of_jump]
			img_stack.append(img[b].astype(np.float32))
		for i in range ((length_of_stacked_images - length_of_jump), length_of_stacked_images):
			cv2_img = rospy.wait_for_message(image_topic, ImageMsg)
			img[i] = bridge.imgmsg_to_cv2(cv2_img, "rgb8")
        		img[i] = cv2.imread(os.path.join(path, fname))  # original 640 x 480
        		img[i] = img[i][:, 80:-80]
			img[i] = cv2.resize(img[i], (width_of_downsize, height_of_downsize), interpolation=cv2.INTER_CUBIC)  
			img = cv2.cvtColor(img[i],cv2.COLOR_BGR2HSV)
        		lower_green = np.array([50,100,50])
        		upper_green = np.array([75,255,230])
        		# Threshold the HSV image to get only green colors
        		mask = cv2.inRange(img, lower_green, upper_green)
        		img[i] = cv2.bitwise_and(img[i],img[i],mask = mask)
           		img[i] = cv2.cvtColor(img[i], cv2.COLOR_BGR2GRAY)  # 108 x 108
            		img[i] = np.expand_dims(img[i], axis=-1)  # 108 x 108 x 1
       		 	img_stack.append(img[i].astype(np.float32))
            	x.append(np.stack(img_stack))
    		return np.stack(x)  # train_x

def main(*args, **kwargs):
	rospy.init_node('image_to_neural_net')
	# Define your image topic
	image_topic = "/camera2/image_raw"
	global pub
	global pubtwo
	pub = rospy.Publisher('/servotwo', UInt16, queue_size=1)	
	pubtwo = rospy.Publisher('/Set_ESP_Throttletwo', UInt16, queue_size=1)
	# subscribed to joystick inputs on topic "joy"
	rospy.Subscriber("joytwo", Joy, callback)
	
	# Set up your subscriber and define its callback
	# Receive 20 images for the NN model
	# Get the model output from 20 images 
	global stacked_counter
	stacked_counter = 0
	with tf.device('/gpu:0'):
		while True: 
			global steering
			global throttle
			global brake
    			deploy_x = deploy_dataset(stacked_counter)
			stacked_counter = stacked_counter + 1
    			model = build_3d_cnn(160, 160, 1, 20)
    			saved_file_name = './keras_cnn.hdf5'
    			model.load_weights(saved_file_name)
   			model_y = model.predict(deploy_x, batch_size=1, verbose=1)

    			attrs = ['steering', 'throttle', 'brake'] 
   
    			steering = float(model_y[0][0])
    			throttle = float(model_y[0][1])
    			brake    = float(model_y[0][2])
			print("Steering: " + str(steering) + " Throttle: " + str(throttle) + " Brake: " + str(brake))
	rospy.spin()
		
if __name__ == '__main__':
    main()
    parser = argparse.ArgumentParser()
    parser.add_argument(
       "mode", help="train/test",
        type=str, choices=["train", "test"]
    )
    parser.add_argument(
        "--n_stacked", help="# of stacked frame for time axis",
        type=int, default=20
    )
    parser.add_argument(
        "--n_jump", help="time interval to get input, 0 for n_jump=n_stacked",
        type=int, default=4
    )
    parser.add_argument(
        "--width", help="width of input images",
        type=int, default=160
    )
    parser.add_argument(
        "--height", help="height of input images",
        type=int, default=160
    )
    parser.add_argument(
        "--depth", help="the number of channels of input images",
        type=int, default=1
    )
    parser.add_argument(
        "--img_path", help="image directory under dataset/",
        type=str, default='t1'
    )
    parser.add_argument(
        "--out_path", help="target csv filename",
        type=str, default="trainingset_v5.csv"
    )
    parser.add_argument(
        "--epochs", help="total number of training epochs",
        type=int, default=50000
    )
    parser.add_argument(
        "--batch_size", help="batch_size",
        type=int, default=1
    )

    args = parser.parse_args()
    main(**vars(args))
