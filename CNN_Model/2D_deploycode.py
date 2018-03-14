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
from model import build_cnn
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
length_of_stacked_images = 1
global length_of_jump
length_of_jump = 1
global width_of_downsize
width_of_downsize = 320
global height_of_downsize
height_of_downsize =240
global image_topic
image_topic = "/image_topic"
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
global img_stack
img_stack = []
global aimode
global steering
global throttle
global throttleposition
global steeringangle


def deploy_dataset(stacked_counter):
	x = []
	img_stack = []
	cv2_img = rospy.wait_for_message(image_topic, ImageMsg, timeout=None)
	img = (bridge.imgmsg_to_cv2(cv2_img, "bgr8"))
	img = img[:,:,:]
	img = cv2.resize(img,(640, 480), interpolation = cv2.INTER_AREA)
        		#img[i] = cv2.imread(os.path.join(path, fname))  # original 640 x 480
	#img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
        img = img[210:500, 70:570]
        img = cv2.resize(img, (width_of_downsize, height_of_downsize), interpolation=cv2.INTER_CUBIC)  
	#imgplot = plt.imshow(img)
	#plt.show()
			#img = cv2.cvtColor(img[i],cv2.COLOR_BGR2HSV)
        		#lower_green = np.array([50,100,50])
        		#upper_green = np.array([75,255,230])
        		# Threshold the HSV image to get only green colors
        		#mask = cv2.inRange(img, lower_green, upper_green)
        		#img[i] = cv2.bitwise_and(img[i],img[i],mask = mask)
           		#img[i] = cv2.cvtColor(img[i], cv2.COLOR_BGR2GRAY)  # 108 x 108
            		#img[i] = np.expand_dims(img[i], axis=-1)  # 108 x 108 x 1
       	img_stack.append(img.astype(np.float32))
        x.append(np.stack(img_stack))
        return np.stack(x)  # train_x
	#if stacked_counter != 0:
		#for b in range (0, (length_of_stacked_images - length_of_jump)):
		#	img[b] = img[b+length_of_jump]
		#	img_stack[b] = img[b].astype(np.float32)
		#for i in range (0, length_of_jump):
			#cv2_img = rospy.wait_for_message(image_topic, ImageMsg)
			#img[i] = bridge.imgmsg_to_cv2(cv2_img, "rgb8")
        		#img[i] = cv2.imread(os.path.join(path, fname))  # original 640 x 480
        		#img[i] = img[i][:, :]
			#img[i] = cv2.resize(img[i], (width_of_downsize, height_of_downsize), interpolation=cv2.INTER_CUBIC)  
			#img = cv2.cvtColor(img[i],cv2.COLOR_BGR2HSV)
        		#lower_green = np.array([50,100,50])
        		#upper_green = np.array([75,255,230])
        		# Threshold the HSV image to get only green colors
        		#mask = cv2.inRange(img, lower_green, upper_green)
        		#img[i] = cv2.bitwise_and(img[i],img[i],mask = mask)
           		#img[i] = cv2.cvtColor(img[i], cv2.COLOR_BGR2GRAY)  # 108 x 108
            		#img[i] = np.expand_dims(img[i], axis=-1)  # 108 x 108 x 1
       		 	#img_stack[length_of_stacked_images - length_of_jump + i] = img[i].astype(np.float32)
            	#x.append(np.stack(img_stack))
    		#return np.stack(x)  # train_x

def main(*args, **kwargs):
	rospy.init_node('image_to_neural_net')
	global pub
	global pubtwo
	global pubthree

	# Set up your subscriber and define its callback
	# Receive 20 images for the NN model
	# Get the model output from 20 images 
	global stacked_counter
	stacked_counter = 0
	global AISTATUS
	with tf.device('/gpu:0'):
		model = build_cnn(width_of_downsize, height_of_downsize, 3)
    		saved_file_name = './model.hdf5'
    		model.load_weights(saved_file_name)
		while True: 
			# subscribed to joystick inputs on topic "joy"
			AISTATUS = rospy.wait_for_message('/controller_two', Joy, 1)
			# AI_Mode
			if AISTATUS.axes[1] < 0.4:
				deploy_x = deploy_dataset(stacked_counter)
				#stacked_counter = stacked_counter + 1
   				model_y = model.predict(np.squeeze(deploy_x, axis = 0), batch_size=1, verbose=0)
    				attrs = ['steering', 'throttle'] 
    				steering = float(model_y[0,0])
    				throttle = float(model_y[0,1])
				pub = rospy.Publisher('/Steering', UInt16, queue_size=1)	
				pubtwo = rospy.Publisher('/Throttle', UInt16, queue_size=1)
				#throttle = throttle*stddevthrottle + avgthrottle - shift
				throttleposition = (1489 + 20*(throttle))
				#throttleposition = 1498
				#steering = steering*stddevsteering + avgsteering - shift
				steeringangle = (103 + 100*((steering)+0.25))
				if steeringangle < 83:
					steeringangle = 83
				if steeringangle >127:
					steeringangle = 127 
				pubtwo.publish(throttleposition) 
				pub.publish(steeringangle)
				print(steeringangle)
				print(throttleposition)
			# Not AI_Mode	  
			if AISTATUS.axes[1] > 0.4: 
				print("Not AI MODE")
				dataone = rospy.wait_for_message("controller", Joy)
				pub = rospy.Publisher('/Steering', UInt16, queue_size=1)	
				pubtwo = rospy.Publisher('/Throttle', UInt16, queue_size=1)
				steeringangle = (103 + 100*(float(dataone.axes[0])+0.25))
				if steeringangle < 83:
					steeringangle = 83
				if steeringangle >123:
					steeringangle = 123  
				steeringangle = np.uint16(steeringangle)
				throttleposition = 1489 + 100*(float(dataone.axes[1]))
				throttleposition = np.uint16(throttleposition) 
				pub.publish(steeringangle)
				pubtwo.publish(throttleposition)
				

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
        type=int, default=320
    )
    parser.add_argument(
        "--height", help="height of input images",
        type=int, default=240
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
