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

def callback(data):
        steeringangle = UInt16()
        throttleposition = UInt16()
	steeringangle = 106 + 150*(data.axes[0])
	steeringangle = numpy.uint16(steeringangle)
        #66
	if steeringangle < 82:
		steeringangle = 82
	if steeringangle >130:
		steeringangle = 130
	throttleposition = 1490 + 100*(1 + data.axes[2])
	throttleposition = numpy.uint16(throttleposition)
	if data.axes[2] < -0.99:
       		reverseposition = 1490 - 60*(1+data.axes[3])
		reverseposition = numpy.uint16(reverseposition)
             	pub.publish(steeringangle)
	        pubtwo.publish(reverseposition) 
                
        if data.axes[2] > -0.99:   
                pub.publish(steeringangle)
                pubtwo.publish(throttleposition)        
    # Intializes everything
def start():
	rospy.init_node('Racecarteleoptwo')
	global pub
        global pubtwo
	pub = rospy.Publisher('/servotwo', UInt16, queue_size=1)	
	pubtwo = rospy.Publisher('/Set_ESP_Throttletwo', UInt16, queue_size=1)
        # subscribed to joystick inputs on topic "joy"
	rospy.Subscriber("joytwo", Joy, callback)
	rospy.spin()

if __name__ == '__main__':
        start()
