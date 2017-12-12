#!/usr/bin/python
# -*- coding: utf-8 -*-

import cv2
from cv_bridge import CvBridge, CvBridgeError
from std_msgs.msg import Int32, String
import os
import sys
import glob
import std_msgs.msg
import string
import numpy as np
from PIL import Image
import re
counter = 1;
numbers = re.compile(r'(\d+)')
# The numericalSort function splits out any digits in a filename, turns it into an actual number, and returns the result for sorting.
def numericalSort(value):
    parts = numbers.split(value)
    parts[1::2] = map(int, parts[1::2])
    return parts
# Specify the desired width and height values. Keep in mind that the original image is 640 x 480!
width = 100;
height = 100;
# Specify the original location of jpgimage!!
for img in sorted(glob.glob("/home/locationoffolder/jpgimage/*.jpg"), key = numericalSort):
    print("converting...")
    cv_image = cv2.imread(img) 
    cv_image = cv2.resize(cv_image,(width, height), interpolation = cv2.INTER_AREA)
    # Specify the location of the final image destination folder. (e.g. downsizedimage)!!
    # If there are permission settings for the folder, please assign permission before execution.
    cv2.imwrite("/home/locationoffolder/downsizedimage/" + str(counter) + ".jpg", cv_image)
    counter = counter + 1;
