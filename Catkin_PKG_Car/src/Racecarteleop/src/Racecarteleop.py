#!/usr/bin/env python
import rospy
import math
import time
import numpy
from std_msgs.msg import UInt16
from sensor_msgs.msg import Joy
    # Author: Jesse
    # This ROS Node converts Steering Wheel inputs from the joy node
    # into commands for RCC

    # Receives steering wheel messages (subscribed to Joy topic)
    # then converts the steering wheel inputs into UInt16 

def callback_controller(dataone):
        steeringangle = UInt16()
	steeringangle = 103 + 100*(dataone.axes[0] + 0.250)
	steeringangle = numpy.uint16(steeringangle)
	if steeringangle < 83:
		steeringangle = 83
	if steeringangle > 123:
		steeringangle = 123
        pub_steering.publish(steeringangle)
        throttleposition = UInt16()
	throttleposition = 1489 + 70*(dataone.axes[1])
	#if throttleposition > 1495:
	#	throttleposition = 1495	
	throttleposition = numpy.uint16(throttleposition) 
        pub_throttle.publish(throttleposition) 
	

def callback_headtracking(datathree):
        tilt_angle = UInt16()
        pan_angle = UInt16()
	tilt_angle = 80 +  100*(datathree.axes[0])
	tilt_angle = numpy.uint16(tilt_angle)
	pan_angle = 70 - 150*(datathree.axes[1])
	pan_angle = numpy.uint16(pan_angle)
        pub_tilt.publish(tilt_angle)
	pub_pan.publish(pan_angle)
	        
# Intializes everything
def start():
	rospy.init_node('Racecarteleop')
	global pub_steering
        global pub_braking
        global pub_throttle
	global pub_tilt
	global pub_pan
	pub_steering = rospy.Publisher('/Steering', UInt16, queue_size=1)	
	pub_throttle = rospy.Publisher('/Throttle', UInt16, queue_size=1)
        pub_braking = rospy.Publisher('/Braking', UInt16, queue_size=1)
	pub_tilt = rospy.Publisher('/Set_Tilt', UInt16, queue_size=1)
	pub_pan = rospy.Publisher('/Set_Pan', UInt16, queue_size=1)
        # subscribed to joystick inputs on topic "joy"
	rospy.Subscriber("controller", Joy, callback_controller)
	rospy.Subscriber("headtracking", Joy, callback_headtracking)
	rospy.spin()

if __name__ == '__main__':
        start()
