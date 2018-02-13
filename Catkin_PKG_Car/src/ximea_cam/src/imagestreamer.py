#!/usr/bin/env python
from __future__ import print_function
import roslib
import sys
import rospy
import cv2
import numpy as np
from std_msgs.msg import String
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
from ximea import xiapi
   
def cameraone():
    global img
    global cam
    global bridge
    bridge = CvBridge()
    increment_val = 0
    #create instance for first connected camera
    cam = xiapi.Camera(dev_id=0)
    #start communication to open specific device, use:
    #(open by serial number)
    print('Opening camera...')
    cam.open_device() 
    #settings
    cam.set_downsampling_type('XI_SKIPPING')
    cam.set_downsampling("XI_DWN_2x2")
    cam.set_exposure(int(10000))
    cam.set_gain(float(10))
    #cam.set_acq_timing_mode("XI_ACQ_TIMING_MODE_FREE_RUN")
    cam.set_limit_bandwidth(2000)
    #cam.set_buffers_queue_size(10)
    print('Camera exposure was set to %i us' %cam.get_exposure())
    cam.set_imgdataformat('XI_RGB24')
    #create instance of Image to store image data and metadata
    img = xiapi.Image()
    #start data acquisition
    print('Starting data acquisition...')
    cam.start_acquisition()
    rospy.init_node('cameraone', anonymous=True)
    rate = rospy.Rate(100)
    try:
    	while not rospy.is_shutdown():
		cam.get_image(img, timeout=20000)
                data_raw = img.get_image_data_numpy()
        	cam_data = bridge.cv2_to_imgmsg(data_raw, "bgr8")
        	pub = rospy.Publisher("image_topic", Image, queue_size=1) 
                pub.publish(cam_data)
        	rate.sleep()
    except xiapi.Xi_error as err:
    	if err.status == 10:
      		print('Timeout error occured.')
    	else:
       		raise
if __name__ == '__main__':
    try: 
        cameraone()
    except KeyboardInterrupt:
      print("Shutting down")
      cam.stop_acquisition()
      cam.close_device()
      cv2.destroyAllWindows()
