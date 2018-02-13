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
#import data_processing_v2
from model import build_3d_cnn
#from model_test_utils.metrics import mean_absolute_relative_error
#from model_test_utils.metrics import coefficient_of_determination

config = tf.ConfigProto(allow_soft_placement=True, device_count = {'CPU' : 1, 'GPU' : 1})
#config.gpu_options.per_process_gpu_memory_fraction = 0.95 
config.gpu_options.allow_growth = True
set_session(tf.Session(config=config))

os.environ["CUDA_VISIBLE_DEVICES"] = ""
print(device_lib.list_local_devices())
bridge = CvBridge()
print("start AI!")
global length_of_stacked_images
length_of_stacked_images = 25
global length_of_jump
length_of_jump = 5
global width_of_downsize
width_of_downsize = 150
global height_of_downsize
height_of_downsize =150
global image_topic
image_topic = "/camera/left/image_raw"
global stddevthrottle
stddevthrottle = 0.0412072677
global stddevsteering
stddevsteering = 0.039548534475
global avgthrottle
avgthrottle = 1.46161837245
global avgsteering
avgsteering = 0.760359593594
global shift
shift = 1
global img
img = []
global img_stack
img_stack = []
def callback_controller(dataone):
	steeringangle = UInt16() 
	throttleposition = UInt16()
	reverseposition = UInt16()
	global steering
	global throttle
	global brake
	aimode = data.axes[1]
	if aimode > 0:
		steering = steering*stddevsteering + avgsteering - shift
		print(steering)
		steeringangle = (103 + 180*((steering) + 0.25))
		steeringangle = np.uint16(steeringangle)
		if steeringangle < 83:
			steeringangle = 83
		if steeringangle >127:
			steeringangle = 127   
		pub.publish(steeringangle)
	else:
		steeringangle = (103 + 180*((data.axes[1])+0.25))
		steeringangle = np.uint16(steeringangle)
		if steeringangle < 83:
			steeringangle = 83
		if steeringangle >123:
			steeringangle = 123  
		pub.publish(steeringangle)

def callback_controller_two(datatwo):
	throttleposition = UInt16()
	global steering
	global throttle
	global brake
	aimode = data.axes[1]
	if aimode > 0:
		throttle = throttle*stddevthrottle + avgthrottle - shift
		print(throttle)
		throttleposition = (1489 + 100*(throttle))
		throttleposition = np.uint16(throttleposition)
		pubtwo.publish(throttleposition)
	else:
		throttleposition = (1489 + 100*(data.axes[0]))
		throttleposition = np.uint16(throttleposition) 
		pubtwo.publish(throttleposition)

def deploy_dataset(stacked_counter):
	x = []
	if stacked_counter == 0:
		for i in range (0, length_of_stacked_images):
			cv2_img = rospy.wait_for_message(image_topic, ImageMsg)
			img.append(bridge.imgmsg_to_cv2(cv2_img, "rgb8"))
        		#img[i] = cv2.imread(os.path.join(path, fname))  # original 640 x 480
        		img[i] = img[i][130:376, :]
        		img[i] = cv2.resize(img[i], (width_of_downsize, height_of_downsize), interpolation=cv2.INTER_CUBIC)  
			#img = cv2.cvtColor(img[i],cv2.COLOR_BGR2HSV)
        		#lower_green = np.array([50,100,50])
        		#upper_green = np.array([75,255,230])
        		# Threshold the HSV image to get only green colors
        		#mask = cv2.inRange(img, lower_green, upper_green)
        		#img[i] = cv2.bitwise_and(img[i],img[i],mask = mask)
           		#img[i] = cv2.cvtColor(img[i], cv2.COLOR_BGR2GRAY)  # 108 x 108
            		#img[i] = np.expand_dims(img[i], axis=-1)  # 108 x 108 x 1
       		 	img_stack.append(img[i].astype(np.float32))
            	x.append(np.stack(img_stack))
    		return np.stack(x)  # train_x
	if stacked_counter != 0:
		for b in range (0, (length_of_stacked_images - length_of_jump)):
			img[b] = img[b+length_of_jump]
			img_stack[b] = img[b].astype(np.float32)
		for i in range (0, length_of_jump):
			cv2_img = rospy.wait_for_message(image_topic, ImageMsg)
			img[i] = bridge.imgmsg_to_cv2(cv2_img, "rgb8")
        		#img[i] = cv2.imread(os.path.join(path, fname))  # original 640 x 480
        		img[i] = img[i][130:376, :]
			img[i] = cv2.resize(img[i], (width_of_downsize, height_of_downsize), interpolation=cv2.INTER_CUBIC)  
			#img = cv2.cvtColor(img[i],cv2.COLOR_BGR2HSV)
        		#lower_green = np.array([50,100,50])
        		#upper_green = np.array([75,255,230])
        		# Threshold the HSV image to get only green colors
        		#mask = cv2.inRange(img, lower_green, upper_green)
        		#img[i] = cv2.bitwise_and(img[i],img[i],mask = mask)
           		#img[i] = cv2.cvtColor(img[i], cv2.COLOR_BGR2GRAY)  # 108 x 108
            		#img[i] = np.expand_dims(img[i], axis=-1)  # 108 x 108 x 1
       		 	img_stack[length_of_stacked_images - length_of_jump + i] = img[i].astype(np.float32)
            	x.append(np.stack(img_stack))
    		return np.stack(x)  # train_x

def main(*args, **kwargs):
	rospy.init_node('image_to_neural_net')
	# Define your image topic
	
	global pub
	global pubtwo
	pub = rospy.Publisher('/Steering', UInt16, queue_size=1)	
	pubtwo = rospy.Publisher('/Throttle', UInt16, queue_size=1)
	# subscribed to joystick inputs on topic "joy"
	rospy.Subscriber("steering", Joy, callback_controller)
	rospy.Subscriber("throttle", Joy, callback_controller_two)
	# Set up your subscriber and define its callback
	# Receive 20 images for the NN model
	# Get the model output from 20 images 
	global stacked_counter
	stacked_counter = 0
	with tf.device('/gpu:0'):
		print("starting...")
		model = build_3d_cnn(width_of_downsize, height_of_downsize, 3, length_of_stacked_images)
    		saved_file_name = './model.hdf5'
    		model.load_weights(saved_file_name)
		while True: 
			global steering
			global throttle
			global brake
    			deploy_x = deploy_dataset(stacked_counter)
			stacked_counter = stacked_counter + 1
   			model_y = model.predict(deploy_x, batch_size=1, verbose=0)
    			attrs = ['steering', 'throttle'] 
    			steering = float(model_y[0][0])
    			throttle = float(model_y[0][1])
			print("Steering: " + str(steering) + " Throttle: " + str(throttle))
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
