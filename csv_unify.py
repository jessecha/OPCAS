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

print("Starting joy data extraction...")
with open('joytwo.csv') as csvfilesix:
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
	brake = []
	brake_position = []
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
	brakeraw = []
	for row in reader:  
		nsecs.append(row['.header.stamp.nsecs'])
		secs.append(row['.header.stamp.secs'])            
		time.append(row['time'])
		throttleraw.append(row['.axes'])
		servoraw.append(row['.axes'])
		brakeraw.append(row['.axes'])
	throttle.append("empty")
	servo.append("empty")
	brake.append("empty")  
	throttle.append("empty")
	servo.append("empty")
	brake.append("empty")
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
			brake.append(brakeraw[a])
	for a in range(len(hour)):
		realtime.append(float(hour[a])*60*60 + float(minute[a])*60 + float(second[a]) + 0.001*float(nanosecond[a])) 
		timestamp.append(realtime[a])
        print(len(time))
	startnumber = 1
	clock = startnumber
	finishnumber = 46850 #235835 #135000
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
			brake_split = brake[g].strip().split(',')
			throttle[g] = throttle_split[3][1:]
                        print(throttle[g]) 
			servo[g] = servo_split[0][1:]
                        print(servo[g])
			#brake[g] = brake_split[4]
	total_time = int(math.floor((universal_finish_time - universal_start_time)/0.01))
	


	for d in range(total_time):
		timetable.append(timestamp[clock] + 0.01*count)
		h = str(int((timestamp[clock] + 0.01*count)/3600))
		m = str(int((((timestamp[clock] + 0.01*count)/3600 - int((timestamp[clock] + 0.01*count)/3600)) * 3600)/60))           
		s = timestamp[clock] + 0.01*count - int(h)*3600 - int(m)*60
		before_dec, after_dec = str(s).split('.')
		s = str(float('.'.join((before_dec, after_dec[0:2]))))
		displaytime.append(h + ":" + m + ":" + s)
		servo_position.append("empty")
		throttle_position.append("empty")
		#brake_position.append("empty")
		count = count + 1   
        print("starting nested for loops...")
	for c in range(len(timestamp)):
		for y in range(total_time):	
			if (((timetable[y] + 0.01) > timestamp[c]) and (timetable[y] < timestamp[c])):
			        throttle_position[y] = float(str((float(throttle[c])))[:7])
			        #brake_position[y] = float(str((float(brake[c])))[:7])
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
			#brake_position[e] = brake_position[e-a]
			throttle_position[e] = throttle_position[e-a]
                if servo_position[e] < -1:
			servo_position[e] = 0;
                if servo_position[e] > 1:
  			servo_position[e] = 0;
        for e in range(total_time): 
			servo_position[e] = float(servo_position[e])
			#brake_position[e] = float(brake_position[e])
			throttle_position[e] = float(throttle_position[e])
             
print("Starting camera image extraction...")
with open('cameratwoimages.csv') as csvfilethree:
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
			if (((timetable[y] + 0.01) > timestamptwo[c]) and (timetable[y] < timestamptwo[c])):
				camera_image[y] = filelocationcamera[c] 
	
	for e in range(total_time):
		if camera_image[e] == "empty":
			camera_image[e] = camera_image[e-1] 

print("Filing finished. Plotting...")
print("Close plot after inspection to continue...")


# print a histogram to see which steering angle ranges are most overrepresented
num_bins = 50
avg_samples_per_bin = len(servo_position)/num_bins
hist, bins = np.histogram(servo_position, num_bins)
width = 0.7 * (bins[1] - bins[0])
center = (bins[:-1] + bins[1:]) / 2
plt.bar(center, hist, align='center', width=width)
plt.plot((np.min(servo_position), np.max(servo_position)), (avg_samples_per_bin, avg_samples_per_bin), 'k-')
plt.show()

# determine keep probability for each bin: if below avg_samples_per_bin, keep all; otherwise keep prob is proportional
# to number of samples above the average, so as to bring the number of samples for that bin down to the average
keep_probs = []
target = avg_samples_per_bin * .5
for i in range(num_bins):
	if hist[i] < target:
        	keep_probs.append(1.)
	else:
		keep_probs.append(1./(hist[i]/target))
remove_list = []
for i in range(len(servo_position)):
	for j in range(num_bins):
		if servo_position[i] > bins[j] and servo_position[i] <= bins[j+1]:
# delete from X and y with probability 1 - keep_probs[j]
			if np.random.rand() > keep_probs[j]:
				remove_list.append(i)
#displaytime = np.delete(displaytime, remove_list)
#camera_image = np.delete(camera_image, remove_list)
#servo_position = np.delete(servo_position, remove_list)
#brake_position = np.delete(brake_position, remove_list)
#throttle_position = np.delete(throttle_position, remove_list)
print("You just saw the original servo distribution. Now time for the feature scaled, mean normalized version...")

#FeatureScaling and MeanNormalization
averageofsteering = 0;
averageofthrottle = 0;
#averageofbrake = 0;
servo_position_n = [];
throttle_position_n = [];
#brake_position_n = [];
for z in range(len(servo_position)):
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
plt.show()
print("Saving the set...")

# Save trainingset
lengthofdata = int(len(throttle_position)) - 10

with open('trainingset.csv', 'w') as csvfiletrain:
	fieldnames = ['steering', 'throttle', 'N_steering', 'N_throttle', 'image_number']
	writer = csv.DictWriter(csvfiletrain, fieldnames=fieldnames)
	writer.writeheader()
	imgcount = 1;
	for a in range(int(lengthofdata*1.0)):
		writer.writerow({'steering': servo_position[a], 'throttle': throttle_position[a], 'N_steering': servo_position_n[a], 'N_throttle': throttle_position_n[a], 'image_number': imgcount})
		path = "/home/nvidia/Desktop/imagefiles/jpgimage"
		originalpath = "/home/nvidia/Desktop/imagefiles/image"
		mylist = os.listdir(originalpath);
		for d in range(len(mylist)):	
		  	if camera_image[a][37:58] == mylist[d]:
				print("Converting..." + str(a) + ' out of ' + str(lengthofdata))		
				im = Image.open(camera_image[a][:58])
				rgb_im = im.convert('RGB')
				rgb_im.save(path + '/' + str(imgcount) + '.jpg')
				imgcount = imgcount + 1;				 


