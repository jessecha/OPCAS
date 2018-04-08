#!/usr/bin/python
# -*- coding: utf-8 -*-

import rosbag
import rospy
import os
import sys
import glob
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
from std_msgs.msg import Int32, String
from PyQt4 import QtGui
import subprocess
from optparse import OptionParser
from datetime import datetime
import csv
import std_msgs.msg
import math
import matplotlib.pyplot as plt  
import numpy as np
from PIL import Image  
import random         
from scipy.interpolate import spline
from scipy.signal import savgol_filter
from matplotlib import path
from scipy.interpolate import splprep, splev

with open('Coordinate_Data_Example.csv') as csvfile:
	reader = csv.DictReader(csvfile)
	x_coordinates = []
	y_coordinates = []
	beacons = []
	hedgehog_one_x = []
	hedgehog_one_y = []
	hedgehog_two_x = []
	hedgehog_two_y = []
	for row in reader:
		x_coordinates.append(row['x'])
		y_coordinates.append(row['y'])
		beacons.append(row['beacon'])
	for a in range(len(beacons)):
		if beacons[a] == '2':  # First Beacon is Beacon two
			hedgehog_one_x.append(x_coordinates[a])
			hedgehog_one_y.append(y_coordinates[a])	
		if beacons[a] == '5':  # Second Beacon is Beacon five
			hedgehog_two_x.append(x_coordinates[a])
			hedgehog_two_y.append(y_coordinates[a])
	# Change String list to float list
	hedgehog_one_x = map(float, hedgehog_one_x)
	hedgehog_one_y = map(float, hedgehog_one_y)
	hedgehog_two_x = map(float, hedgehog_two_x)
	hedgehog_two_y = map(float, hedgehog_two_y)
	# Eliminate Unnecessary Points for First Beacon
	remove_list = []
	for a in range(len(hedgehog_one_x) - 1):
		if ((abs(hedgehog_one_x[a] - hedgehog_one_x[a+1]) < 0.04) and (abs(hedgehog_one_y[a] - hedgehog_one_y[a+1]) < 0.04)): 
			remove_list.append(a)
	hedgehog_one_x = np.delete(hedgehog_one_x, remove_list)
	hedgehog_one_y = np.delete(hedgehog_one_y, remove_list)
	# Eliminate Unnecessary Points for Second Beacon
	remove_list = []
	for a in range(len(hedgehog_two_x) - 1):
		if ((abs(hedgehog_two_x[a] - hedgehog_two_x[a+1]) < 0.04) and (abs(hedgehog_two_y[a] - hedgehog_two_y[a+1]) < 0.04)): 
			remove_list.append(a)
	hedgehog_two_x = np.delete(hedgehog_two_x, remove_list)
	hedgehog_two_y = np.delete(hedgehog_two_y, remove_list)
	
	#hedgehog_one_smooth_x = np.linspace(np.min(hedgehog_one_x), np.max(hedgehog_one_x), 1)
	#hedgehog_two_smooth_x = np.linspace(np.min(hedgehog_two_x), np.max(hedgehog_two_x), 1)	
	#hedgehog_one_smooth_y = spline(hedgehog_one_x, hedgehog_one_y, hedgehog_one_smooth_x)
	#hedgehog_two_smooth_y = spline(hedgehog_two_x, hedgehog_two_y, hedgehog_two_smooth_x)
	plt.scatter(hedgehog_one_x, hedgehog_one_y, s=20, c='red')
	plt.plot(hedgehog_one_x, hedgehog_one_y, c='red')
        plt.scatter(hedgehog_two_x, hedgehog_two_y, s=20, c='blue')
        plt.plot(hedgehog_two_x, hedgehog_two_y, c='blue')
	plt.show()


	

