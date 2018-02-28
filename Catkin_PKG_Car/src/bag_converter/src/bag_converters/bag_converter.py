#!/usr/bin/python
# -*- coding: utf-8 -*-

# Start up ROS pieces.
PKG = 'bag_converter'
import roslib; roslib.load_manifest(PKG)
import rosbag
import rospy
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
from std_msgs.msg import Int32, String
# Reading bag filename from command line or roslaunch parameter.
import os
import sys
from PyQt4 import QtGui
import subprocess
from optparse import OptionParser
from datetime import datetime
import csv
import std_msgs.msg
import string
import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
# Define method to fit polynomial to binary image with lines extracted, using sliding window
def sliding_window_polyfit(img):
    # Take a histogram of the bottom half of the image
    histogram = np.sum(img, axis=0)
    # Find the peak of the left and right halves of the histogram
    # These will be the starting point for the left and right lines
    midpoint = np.int(histogram.shape[0]//2)
    
    # Previously the left/right base was the max of the left/right half of the histogram
    # this changes it so that only a quarter of the histogram (directly to the left/right) is considered
    leftx_base = np.argmax(histogram[:]) 
    rightx_base = np.argmax(histogram[:])
    # leftx_base = np.argmax(histogram[:midpoint]) 
    # rightx_base = np.argmax(histogram[midpoint:])
    # print('base pts:', leftx_base, rightx_base)

    # Choose the number of sliding windows
    nwindows = 10
    # Set height of windows
    window_height = np.int(img.shape[0]/nwindows)
    # Identify the x and y positions of all nonzero pixels in the image
    nonzero = img.nonzero()
    nonzeroy = np.array(nonzero[0])
    nonzerox = np.array(nonzero[1])
    # Current positions to be updated for each window
    leftx_current = leftx_base
    rightx_current = rightx_base
    # Set the width of the windows +/- margin
    margin = 600
    # Set minimum number of pixels found to recenter window
    minpix = 40
    # Create empty lists to receive left and right lane pixel indices
    left_lane_inds = []
    right_lane_inds = []
    # Rectangle data for visualization
    rectangle_data = []

    # Step through the windows one by one
    for window in range(nwindows):
        # Identify window boundaries in x and y (and right and left)
        win_y_low = img.shape[0] - (window+1)*window_height
        win_y_high = img.shape[0] - window*window_height
        win_xleft_low = leftx_current - margin
        win_xleft_high = leftx_current + margin
        win_xright_low = rightx_current - margin
        win_xright_high = rightx_current + margin
        rectangle_data.append((win_y_low, win_y_high, win_xleft_low, win_xleft_high, win_xright_low, win_xright_high))
        # Identify the nonzero pixels in x and y within the window
        good_left_inds = ((nonzeroy >= win_y_low) & (nonzeroy < win_y_high) & (nonzerox >= win_xleft_low) & (nonzerox < win_xleft_high)).nonzero()[0]
        good_right_inds = ((nonzeroy >= win_y_low) & (nonzeroy < win_y_high) & (nonzerox >= win_xright_low) & (nonzerox < win_xright_high)).nonzero()[0]
        # Append these indices to the lists
        left_lane_inds.append(good_left_inds)
        right_lane_inds.append(good_right_inds)
        # If you found > minpix pixels, recenter next window on their mean position
        if len(good_left_inds) > minpix:
            leftx_current = np.int(np.mean(nonzerox[good_left_inds]))
        if len(good_right_inds) > minpix:        
            rightx_current = np.int(np.mean(nonzerox[good_right_inds]))

    # Concatenate the arrays of indices
    left_lane_inds = np.concatenate(left_lane_inds)
    right_lane_inds = np.concatenate(right_lane_inds)

    # Extract left and right line pixel positions
    leftx = nonzerox[left_lane_inds]
    lefty = nonzeroy[left_lane_inds] 
    rightx = nonzerox[right_lane_inds]
    righty = nonzeroy[right_lane_inds] 

    left_fit, right_fit = (None, None)
    # Fit a second order polynomial to each
    if len(leftx) != 0:
        left_fit = np.polyfit(lefty, leftx, 2)
    if len(rightx) != 0:
        right_fit = np.polyfit(righty, rightx, 2)
    
    visualization_data = (rectangle_data, histogram)
    
    return left_fit, right_fit, left_lane_inds, right_lane_inds, visualization_data
print('...')


class ImageCreator():

    # Must have __init__(self) function for a class, similar to a C++ class constructor.
	    def __init__(self):
		# Get parameters when starting node from a launch file.
		if len(sys.argv) < 1:
                    pathtwo = "/home/nvidia"
                    path = "/home/nvidia" 
		    save_dir =  os.path.join(pathtwo)
		    filename =  "test.bag"
		    rospy.loginfo("Bag filename is = %s", filename)
		# Get parameters as arguments to 'rosrun my_package bag_to_images.py <save_dir> <filename>', where save_dir and filename exist relative to this executable file.
		else:
                    pathtwo = "/home/nvidia"
                    path = "/home/nvidia/Desktop/imagefiles" 
		    save_dir = os.path.join(pathtwo)
                    print (save_dir)
		    filename = "test.bag"
		    rospy.loginfo("Bag filename = %s", filename)
          
		# Use a CvBridge to convert ROS images to OpenCV images so they can be saved.
		self.bridge = CvBridge()
                none = 1
                ntwo = 1
		# Open bag file.
                pathtwo = "/home/nvidia"   
                os.chdir(pathtwo)
                retval = os.getcwd()
                print "Current working directory %s" % retval
		with rosbag.Bag(filename, 'r') as bag:
		    for topic, msg, time in bag.read_messages():
		        if (cmp(topic, "image_topic") == 0):
                        
		            try:
		                cv_image = self.bridge.imgmsg_to_cv2(msg, "rgb8")
				cv_image = cv_image[:,:,:]
                                height, width, channels = cv_image.shape 
				cv_image = cv2.resize(cv_image,(640, 480), interpolation = cv2.INTER_AREA)
		            except CvBridgeError, e:
		                print e
		            timestr = str(datetime.fromtimestamp(time.to_time()).strftime('%Y/%m/%d/%H:%M:%S.%f'))
                            secstr = str(int(msg.header.stamp.to_sec()))
                            nsecstr = str(msg.header.stamp.to_sec()-int(msg.header.stamp.to_sec()))[2:]
		            image_name = str("time@" + timestr[11:23])+'.png'
                            os.chdir(pathtwo)
                            cv2.imwrite(os.path.join(os.path.expanduser('~'),'Desktop','imagefiles','image', image_name), cv_image)
                            with open('cameraimages.csv', 'a') as csvfile:
    				fieldnames = ['time', '.header.stamp.secs', '.header.stamp.nsecs',  'file_location', 'position']     
    			        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
                                if str(ntwo) == "1":
                                  writer.writeheader() 
		                writer.writerow({'time': timestr + "\n", '.header.stamp.secs': secstr+"\n", '.header.stamp.nsecs': nsecstr+"\n", 'file_location' :'/home/nvidia/Desktop/imagefiles/image'+'/'+"time@" + timestr[11:23]+'.png'+ "\n"})
                                ntwo = ntwo + 1;
# Main function.    
if __name__ == '__main__':
# Initialize the node and name it.
	rospy.init_node(PKG)
# Go to class functions that do all the heavy lifting. Do error checking.
	try:
		image_creator = ImageCreator()
	except rospy.ROSInterruptException: pass
