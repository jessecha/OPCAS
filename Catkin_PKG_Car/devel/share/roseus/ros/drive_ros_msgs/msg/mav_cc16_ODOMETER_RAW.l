;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_ODOMETER_RAW)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_ODOMETER_RAW (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_ODOMETER_RAW")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_ODOMETER_RAW"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_ODOMETER_RAW.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_ODOMETER_RAW"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_ODOMETER_RAW"))
(defconstant drive_ros_msgs::mav_cc16_ODOMETER_RAW::*ID* 137)
(defclass drive_ros_msgs::mav_cc16_ODOMETER_RAW
  :super ros::object
  :slots (_header _sysid _compid _dist _quality ))

(defmethod drive_ros_msgs::mav_cc16_ODOMETER_RAW
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:dist __dist) (instance geometry_msgs::Vector3 :init))
    ((:quality __quality) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _dist __dist)
   (setq _quality (round __quality))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:sysid
   (&optional __sysid)
   (if __sysid (setq _sysid __sysid)) _sysid)
  (:compid
   (&optional __compid)
   (if __compid (setq _compid __compid)) _compid)
  (:dist
   (&rest __dist)
   (if (keywordp (car __dist))
       (send* _dist __dist)
     (progn
       (if __dist (setq _dist (car __dist)))
       _dist)))
  (:quality
   (&optional __quality)
   (if __quality (setq _quality __quality)) _quality)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; geometry_msgs/Vector3 _dist
    (send _dist :serialization-length)
    ;; int16 _quality
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _sysid
       (write-byte _sysid s)
     ;; uint8 _compid
       (write-byte _compid s)
     ;; geometry_msgs/Vector3 _dist
       (send _dist :serialize s)
     ;; int16 _quality
       (write-word _quality s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _sysid
     (setq _sysid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _compid
     (setq _compid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; geometry_msgs/Vector3 _dist
     (send _dist :deserialize buf ptr-) (incf ptr- (send _dist :serialization-length))
   ;; int16 _quality
     (setq _quality (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_ODOMETER_RAW :md5sum-) "1bff3b0fa11439adfae39ba20bfc1e18")
(setf (get drive_ros_msgs::mav_cc16_ODOMETER_RAW :datatype-) "drive_ros_msgs/mav_cc16_ODOMETER_RAW")
(setf (get drive_ros_msgs::mav_cc16_ODOMETER_RAW :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.452899
# MESSAGE: ODOMETER_RAW
# Description:Measurement of Odometry Sensor (raw ticks)
Header header

uint8 ID = 137
uint8 sysid
uint8 compid

geometry_msgs/Vector3 dist   # Distance travelled [ticks]
int16 quality                # Measurement quality indicator (-1 for no quality)

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :drive_ros_msgs/mav_cc16_ODOMETER_RAW "1bff3b0fa11439adfae39ba20bfc1e18")


