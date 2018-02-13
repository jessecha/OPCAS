;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_IMU)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_IMU (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_IMU")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_IMU"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_IMU.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_IMU"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_IMU"))
(defconstant drive_ros_msgs::mav_cc16_IMU::*ID* 128)
(defclass drive_ros_msgs::mav_cc16_IMU
  :super ros::object
  :slots (_header _sysid _compid _acc _gyro _mag ))

(defmethod drive_ros_msgs::mav_cc16_IMU
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:acc __acc) (instance geometry_msgs::Vector3 :init))
    ((:gyro __gyro) (instance geometry_msgs::Vector3 :init))
    ((:mag __mag) (instance geometry_msgs::Vector3 :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _acc __acc)
   (setq _gyro __gyro)
   (setq _mag __mag)
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
  (:acc
   (&rest __acc)
   (if (keywordp (car __acc))
       (send* _acc __acc)
     (progn
       (if __acc (setq _acc (car __acc)))
       _acc)))
  (:gyro
   (&rest __gyro)
   (if (keywordp (car __gyro))
       (send* _gyro __gyro)
     (progn
       (if __gyro (setq _gyro (car __gyro)))
       _gyro)))
  (:mag
   (&rest __mag)
   (if (keywordp (car __mag))
       (send* _mag __mag)
     (progn
       (if __mag (setq _mag (car __mag)))
       _mag)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; geometry_msgs/Vector3 _acc
    (send _acc :serialization-length)
    ;; geometry_msgs/Vector3 _gyro
    (send _gyro :serialization-length)
    ;; geometry_msgs/Vector3 _mag
    (send _mag :serialization-length)
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
     ;; geometry_msgs/Vector3 _acc
       (send _acc :serialize s)
     ;; geometry_msgs/Vector3 _gyro
       (send _gyro :serialize s)
     ;; geometry_msgs/Vector3 _mag
       (send _mag :serialize s)
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
   ;; geometry_msgs/Vector3 _acc
     (send _acc :deserialize buf ptr-) (incf ptr- (send _acc :serialization-length))
   ;; geometry_msgs/Vector3 _gyro
     (send _gyro :deserialize buf ptr-) (incf ptr- (send _gyro :serialization-length))
   ;; geometry_msgs/Vector3 _mag
     (send _mag :deserialize buf ptr-) (incf ptr- (send _mag :serialization-length))
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_IMU :md5sum-) "ea5bbf17106eb0f69246a582d49f7ab1")
(setf (get drive_ros_msgs::mav_cc16_IMU :datatype-) "drive_ros_msgs/mav_cc16_IMU")
(setf (get drive_ros_msgs::mav_cc16_IMU :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.452851
# MESSAGE: IMU
# Description: Measurement of 9DOF Inertial Measurement Unit (IMU)
Header header

uint8 ID = 128
uint8 sysid
uint8 compid

geometry_msgs/Vector3 acc       # Linear acceleration [g]
geometry_msgs/Vector3 gyro      # Angular velocity [rad/s]
geometry_msgs/Vector3 mag       # Magnetic field strength [T]

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



(provide :drive_ros_msgs/mav_cc16_IMU "ea5bbf17106eb0f69246a582d49f7ab1")


