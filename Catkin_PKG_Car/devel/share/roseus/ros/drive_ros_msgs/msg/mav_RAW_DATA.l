;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_RAW_DATA)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_RAW_DATA (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_RAW_DATA")
  (make-package "DRIVE_ROS_MSGS::MAV_RAW_DATA"))

(in-package "ROS")
;;//! \htmlinclude mav_RAW_DATA.msg.html


(intern "*CH_COMM0*" (find-package "DRIVE_ROS_MSGS::MAV_RAW_DATA"))
(shadow '*CH_COMM0* (find-package "DRIVE_ROS_MSGS::MAV_RAW_DATA"))
(defconstant drive_ros_msgs::mav_RAW_DATA::*CH_COMM0* 0)
(intern "*CH_COMM1*" (find-package "DRIVE_ROS_MSGS::MAV_RAW_DATA"))
(shadow '*CH_COMM1* (find-package "DRIVE_ROS_MSGS::MAV_RAW_DATA"))
(defconstant drive_ros_msgs::mav_RAW_DATA::*CH_COMM1* 1)
(intern "*CH_COMM2*" (find-package "DRIVE_ROS_MSGS::MAV_RAW_DATA"))
(shadow '*CH_COMM2* (find-package "DRIVE_ROS_MSGS::MAV_RAW_DATA"))
(defconstant drive_ros_msgs::mav_RAW_DATA::*CH_COMM2* 2)
(intern "*CH_COMM3*" (find-package "DRIVE_ROS_MSGS::MAV_RAW_DATA"))
(shadow '*CH_COMM3* (find-package "DRIVE_ROS_MSGS::MAV_RAW_DATA"))
(defconstant drive_ros_msgs::mav_RAW_DATA::*CH_COMM3* 3)
(defclass drive_ros_msgs::mav_RAW_DATA
  :super ros::object
  :slots (_channel _data ))

(defmethod drive_ros_msgs::mav_RAW_DATA
  (:init
   (&key
    ((:channel __channel) 0)
    ((:data __data) (make-array 0 :initial-element 0 :element-type :char))
    )
   (send-super :init)
   (setq _channel (round __channel))
   (setq _data __data)
   self)
  (:channel
   (&optional __channel)
   (if __channel (setq _channel __channel)) _channel)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; uint8 _channel
    1
    ;; uint8[] _data
    (* 1    (length _data)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _channel
       (write-byte _channel s)
     ;; uint8[] _data
     (write-long (length _data) s)
     (princ _data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _channel
     (setq _channel (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8[] _data
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _data (make-array n :element-type :char))
     (replace _data buf :start2 ptr-) (incf ptr- n))
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_RAW_DATA :md5sum-) "fe139ce95f69f25b7328e7afd6d8fcfe")
(setf (get drive_ros_msgs::mav_RAW_DATA :datatype-) "drive_ros_msgs/mav_RAW_DATA")
(setf (get drive_ros_msgs::mav_RAW_DATA :definition-)
      "
uint8 channel
    uint8 CH_COMM0=0
    uint8 CH_COMM1=1
    uint8 CH_COMM2=2
    uint8 CH_COMM3=3
uint8[] data

")



(provide :drive_ros_msgs/mav_RAW_DATA "fe139ce95f69f25b7328e7afd6d8fcfe")


