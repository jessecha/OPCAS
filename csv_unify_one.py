#!/usr/bin/python
# -*- coding: utf-8 -*-

# Start up ROS pieces.
PKG = 'bag_converter'
import roslib; roslib.load_manifest(PKG)
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
global timetable
timetable = []
global totaltime
totaltime = 0
global timestamp
timestamp = []
global timestamptwo
timestamptwo = []
global timestampthree 
timestampthree = []
global startnumber
startnumber = 14016
global finishnumber
finishnumber = 47102
global timestamprate 
timestamprate = 0.025
print("Starting joy data extraction...")
with open('controller.csv') as csvfilesix:
	reader = csv.DictReader(csvfilesix)
	nsecs = []
	secs = []
	realtime = []
	filelocation = []
	filelocationjoy = []
	throttle = []
	servo = []
	servo_split = []
	servo_position = []
	throttle_position = []
	throttle_split = []
	time = []
	timestamp = []
	throttle_counter = []
	length = []
	finalduplicate = 0
	duplicate = []
	timestampshort = [] 
	displaytime = []
	hour = []
	minute = []
	second = []
	nanosecond = []
	throttleraw = []
	servoraw = []
	for row in reader:  
		nsecs.append(row['.header.stamp.nsecs'])
		secs.append(row['.header.stamp.secs'])            
		time.append(row['time'])
		throttleraw.append(row['.axes'])
		servoraw.append(row['.axes'])
	throttle.append("empty")
	servo.append("empty")
	throttle.append("empty")
	servo.append("empty")
	for a in range(len(time)):     
		if time[a] != "time":
			timeone = time[a].split(":")
			timetwo = timeone[2].split(".")
			timethree = timeone[0].split("/")
			timefour = timetwo[1].split("\n")
			hour.append(timethree[3])
			minute.append(timeone[1])
			second.append(timetwo[0])
			nanosecond.append(timefour[0][:3])
			throttle.append(throttleraw[a])
			servo.append(servoraw[a])
	for a in range(len(hour)):
		realtime.append(float(hour[a])*60*60 + float(minute[a])*60 + float(second[a]) + 0.001*float(nanosecond[a])) 
		timestamp.append(realtime[a])
        print(len(time))
	clock = startnumber
	universal_start_time = timestamp[startnumber] 
	before_dec, after_dec = str(universal_start_time).split('.')
	universal_start_time = float('.'.join((before_dec, after_dec[0:2])))
	universal_finish_time = timestamp[finishnumber] 
	before_dec, after_dec = str(universal_finish_time).split('.')
	universal_finish_time = float('.'.join((before_dec, after_dec[0:2])))  
	y = 0
	count = 0
	counting = 0
	for g in range(len(throttle)):
		if throttle[g] != "empty":
			throttle_split = throttle[g].strip().split(',')
			servo_split = servo[g].strip().split(',')
			throttle[g] = throttle_split[1][1:]
			servo[g] = servo_split[0][1:]
	total_time = int(math.floor((universal_finish_time - universal_start_time)/timestamprate))

	for d in range(total_time):
		timetable.append(timestamp[clock] + timestamprate*count)
		h = str(int((timestamp[clock] + timestamprate*count)/3600))
		m = str(int((((timestamp[clock] + timestamprate*count)/3600 - int((timestamp[clock] + 0.01*count)/3600)) * 3600)/60))           
		s = timestamp[clock] + timestamprate*count - int(h)*3600 - int(m)*60
		before_dec, after_dec = str(s).split('.')
		s = str(float('.'.join((before_dec, after_dec[0:2]))))
		displaytime.append(h + ":" + m + ":" + s)
		servo_position.append("empty")
		throttle_position.append("empty")
		count = count + 1   
        print("starting nested for loops...")
	for c in range(len(timestamp)):
		for y in range(total_time):	
			if (((timetable[y] + timestamprate) > timestamp[c]) and (timetable[y] < timestamp[c])):
			        throttle_position[y] = float(str((float(throttle[c])))[:7])
			        if (float(servo[c]) < 0.00 and float(servo[c]) > -1.5):
			        	servo_position[y] = float(str(servo[c])[:8]) 
			        if (float(servo[c]) >= 0.00 and float(servo[c]) < 1.5):   
			                servo_position[y] = float(str(servo[c])[:7])
		print(str(c/float(len(timestamp))*100) + "% complete...")
	print("finished...")
	for e in range(total_time): 
		if servo_position[e] == "empty":
			a = 1;
			while servo_position[e-a] == "empty":
				a = a + 1;
			servo_position[e] = servo_position[e-a]
			throttle_position[e] = throttle_position[e-a]
                if servo_position[e] < -1:
			servo_position[e] = 0;
                if servo_position[e] > 1:
  			servo_position[e] = 0;
        for e in range(total_time): 
			servo_position[e] = float(servo_position[e])
			throttle_position[e] = float(throttle_position[e])

print("Starting camera image extraction...")
with open('cameraimages.csv') as csvfilethree:
	readercamera = csv.DictReader(csvfilethree)
	nsecs = []
	secs = []
	realtimetwo = []
	filelocationcamera = []
	filelocation = []
	timecamera = []
	timestamptwo = []
	throttle_counter = []
	length = []
	finalduplicate = 0
	duplicate = []
	timestampshort = []
	camera_image= []
	hourtwo = []
	minutetwo = []
	secondtwo = []
	nanosecondtwo = []
	for row in readercamera:  
		nsecs.append(row['.header.stamp.nsecs'])
		secs.append(row['.header.stamp.secs'])            
		filelocationcamera.append(row['file_location'])
		timecamera.append(row['time']) 
	for a in range(len(filelocation)):
		if filelocation[a] != "file_location":
			filelocationcamera.append(filelocation[a])
	for a in range(len(timecamera)): 
		if timecamera[a] != "time":    
			realtimetwo.append("empty")
			timeonecamera = filelocationcamera[a].split(":")
			timetwocamera = timeonecamera[2].split(".")
			timethreecamera = timeonecamera[0].split("@") 
			timefourcamera = timetwocamera[1].split("\n")
			hourtwo.append(timethreecamera[1])
			minutetwo.append(timeonecamera[1])
			secondtwo.append(timetwocamera[0])
			nanosecondtwo.append(timetwocamera[1][:3])                

	for a in range(len(hourtwo)):
		realtimetwo[a] = (float(hourtwo[a])*60*60 + float(minutetwo[a])*60 + float(secondtwo[a]) + 0.001*float(nanosecondtwo[a]))
		timestamptwo.append(realtimetwo[a])

	for d in range(total_time):
     		camera_image.append("empty")
	

	for c in range(len(timestamptwo)):
		for y in range(len(timetable)):	 
			if (((timetable[y] + timestamprate) > timestamptwo[c]) and (timetable[y] < timestamptwo[c])):
				camera_image[y] = filelocationcamera[c] 
		print(str(c/float(len(timestamptwo))*100) + "% complete...")
	for e in range(total_time):
		if camera_image[e] == "empty":
			a = 1;
			while camera_image[e+a] == "empty":
				a = a + 1;
			camera_image[e] = camera_image[e+a] 

print("Filing finished. Plotting...")
print("Closing plot after inspection to continue...")


# print a histogram to see which steering angle ranges are most overrepresented
num_bins = 30
avg_samples_per_bin = len(servo_position)/num_bins
hist, bins = np.histogram(servo_position, num_bins)
width = 0.7 * (bins[1] - bins[0])
center = (bins[:-1] + bins[1:]) / 2
plt.bar(center, hist, align='center', width=width)
plt.plot((np.min(servo_position), np.max(servo_position)), (avg_samples_per_bin, avg_samples_per_bin), 'k-')
plt.show(block=False)
plt.savefig('histogram.png')
plt.pause(10)
plt.close()

# determine keep probability for each bin: if below avg_samples_per_bin, keep all; otherwise keep prob is proportional
# to number of samples above the average, so as to bring the number of samples for that bin down to the average
keep_probs = []
target = avg_samples_per_bin * .3
for i in range(num_bins):
	if hist[i] <= target:
        	keep_probs.append(1.)
	else:
		keep_probs.append(float(target/hist[i]))
remove_list = []
for i in range(len(servo_position)):
	for j in range(num_bins):
		if servo_position[i] > bins[j] and servo_position[i] <= bins[j+1]:
# delete from X and y with probability 1 - keep_probs[j]
			if np.random.rand() > keep_probs[j]:
				remove_list.append(i)
camera_image = np.delete(camera_image, remove_list)
servo_position = np.delete(servo_position, remove_list)
throttle_position = np.delete(throttle_position, remove_list)

# print a histogram to see which steering angle ranges are most overrepresented
num_bins = 30
avg_samples_per_bin = len(servo_position)/num_bins
hist, bins = np.histogram(servo_position, num_bins)
width = 0.7 * (bins[1] - bins[0])
center = (bins[:-1] + bins[1:]) / 2
plt.bar(center, hist, align='center', width=width)
plt.plot((np.min(servo_position), np.max(servo_position)), (avg_samples_per_bin, avg_samples_per_bin), 'k-')
plt.show(block=False)
plt.savefig('deleted_histogram.png')
plt.pause(10)
plt.close()

print("You just saw the original servo distribution. Now time for the feature scaled, mean normalized version...")

#Standardize
averageofsteering = 0;
averageofthrottle = 0;
#averageofbrake = 0;
servo_position_n = [];
throttle_position_n = [];
#brake_position_n = [];
for z in range(len(servo_position)):
	servo_position[z] = (servo_position[z])
	throttle_position[z] = (throttle_position[z])
	servo_position_n.append(servo_position[z])
	throttle_position_n.append(throttle_position[z])
	#brake_position_n.append(brake_position[z])
	averageofsteering = averageofsteering + servo_position_n[z]
	averageofthrottle = averageofthrottle + throttle_position_n[z]
	#averageofbrake = averageofbrake + brake_position_n[z]
averageofsteering = averageofsteering/(len(servo_position));
averageofthrottle = averageofthrottle/(len(throttle_position));
#averageofbrake = averageofbrake/(len(brake_position));

standarddeviationsteering = np.std(servo_position_n);
standarddeviationthrottle = np.std(throttle_position_n);
#standarddeviationbrake = np.std(brake_position_n);
print("standard deviation of steering is " + str(standarddeviationsteering))
#print("standard deviation of brake is " + str(standarddeviationbrake))
print("standard deviation of throttle is " + str(standarddeviationthrottle))
print("average of steering is " + str(averageofsteering))
#print("average of brake is " + str(averageofbrake))
print("average of steering is "+ str(averageofsteering))
for z in range(len(servo_position)):
	servo_position_n[z] = ((servo_position_n[z] - averageofsteering)/standarddeviationsteering);
	throttle_position_n[z] = ((throttle_position_n[z] - averageofthrottle)/standarddeviationthrottle);
	#brake_position_n[z] = ((brake_position_n[z] - averageofbrake)/standarddeviationbrake);
# print histogram again to show more even distribution of steering angles
num_bins = 50
avg_samples_per_bin = len(servo_position_n)/num_bins
hist, bins = np.histogram(servo_position_n, num_bins)
width = 0.7 * (bins[1] - bins[0])
center = (bins[:-1] + bins[1:]) / 2
plt.bar(center, hist, align='center', width=width)
plt.plot((np.min(servo_position_n), np.max(servo_position_n)), (avg_samples_per_bin, avg_samples_per_bin), 'k-')
plt.show(block=False)
plt.pause(3)
plt.close()

print("Saving the set...")
print("Steering/Throttle data length is " + str(len(throttle_position)*2))
print("image data length is " + str(len(camera_image)*2))
# Save trainingset

# Steer, Throttle values for image flipping
print("Flipped Image Values...")
global servo_position_flipped
servo_position_flipped = []
global throttle_position_flipped
throttle_position_flipped = []
global camera_image_flipped 
camera_image_flipped = []
for e in range(len(servo_position)):
	servo_position_flipped.append((servo_position[e] + 0.250) * (-1) - 0.250)
	throttle_position_flipped.append(throttle_position[e])
        camera_image_flipped.append(camera_image[e])


lengthofdata = int(len(throttle_position)) 
lengthofdatatwo = int(len(throttle_position_flipped))
with open('training_dataset.csv', 'w+') as csvfiletrain:
	fieldnames = ['steering', 'throttle', 'N_steering', 'N_throttle', 'image_number']
	writer = csv.DictWriter(csvfiletrain, fieldnames=fieldnames)
	writer.writeheader()
	imgcount = 1 #1;
	for a in range(int(lengthofdata)):
		writer.writerow({'steering': servo_position[a], 'throttle': throttle_position[a], 'image_number': imgcount})
		path = "/home/nvidia/Desktop/imagefiles/jpgimage"
		originalpath = "/home/nvidia/Desktop/imagefiles/image"
		mylist = os.listdir(originalpath);

		for d in range(len(mylist)):	
		  	if camera_image[a][38:59] == mylist[d]:
				print("Converting..." + str(a+1) + ' out of ' + str(lengthofdata*2))	
				im = cv2.IMREAD_COLOR(camera_image[a][:59])	
				cv2.imwrite(path + '/' + str(imgcount) + '.png', im)
				imgcount = imgcount + 1;

	for a in range(int(lengthofdatatwo)):
		writer.writerow({'steering': servo_position_flipped[a], 'throttle': throttle_position_flipped[a],'image_number': imgcount})
		path = "/home/nvidia/Desktop/imagefiles/jpgimage"
		originalpath = "/home/nvidia/Desktop/imagefiles/image"
		mylist = os.listdir(originalpath);
		for d in range(len(mylist)):	
		  	if camera_image_flipped[a][38:59] == mylist[d]:
				print("Converting..." + str(lengthofdata+a+1) + ' out of ' + str(lengthofdatatwo*2))
				im = cv2.IMREAD_COLOR(camera_image_flipped[a][:59])
				horizontal_im = cv2.flip(im, 0)	
				cv2.imwrite(path + '/' + str(imgcount) + '.png', horizontal_im)		
				#im = Image.open(camera_image_flipped[a][:59])
				#rgb_im = im.convert('RGB')
				#rgb_im = rgb_im.transpose(Image.FLIP_LEFT_RIGHT)
				#rgb_im.save(path + '/' + str(imgcount) + '.png')
				imgcount = imgcount + 1;
		

		


