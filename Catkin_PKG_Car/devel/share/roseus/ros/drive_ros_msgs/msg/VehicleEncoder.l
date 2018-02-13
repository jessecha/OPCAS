;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::VehicleEncoder)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'VehicleEncoder (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER")
  (make-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))

(in-package "ROS")
;;//! \htmlinclude VehicleEncoder.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*MOTOR*" (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))
(shadow '*MOTOR* (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))
(defconstant drive_ros_msgs::VehicleEncoder::*MOTOR* 0)
(intern "*FRONT_WHEEL_LEFT*" (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))
(shadow '*FRONT_WHEEL_LEFT* (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))
(defconstant drive_ros_msgs::VehicleEncoder::*FRONT_WHEEL_LEFT* 0)
(intern "*FRONT_WHEEL_RIGHT*" (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))
(shadow '*FRONT_WHEEL_RIGHT* (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))
(defconstant drive_ros_msgs::VehicleEncoder::*FRONT_WHEEL_RIGHT* 1)
(intern "*REAR_WHEEL_LEFT*" (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))
(shadow '*REAR_WHEEL_LEFT* (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))
(defconstant drive_ros_msgs::VehicleEncoder::*REAR_WHEEL_LEFT* 2)
(intern "*REAR_WHEEL_RIGHT*" (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))
(shadow '*REAR_WHEEL_RIGHT* (find-package "DRIVE_ROS_MSGS::VEHICLEENCODER"))
(defconstant drive_ros_msgs::VehicleEncoder::*REAR_WHEEL_RIGHT* 3)
(defclass drive_ros_msgs::VehicleEncoder
  :super ros::object
  :slots (_header _encoder ))

(defmethod drive_ros_msgs::VehicleEncoder
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:encoder __encoder) (let (r) (dotimes (i 4) (push (instance drive_ros_msgs::EncoderLinear :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _encoder __encoder)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:encoder
   (&rest __encoder)
   (if (keywordp (car __encoder))
       (send* _encoder __encoder)
     (progn
       (if __encoder (setq _encoder (car __encoder)))
       _encoder)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; drive_ros_msgs/EncoderLinear[4] _encoder
    (apply #'+ (send-all _encoder :serialization-length))
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; drive_ros_msgs/EncoderLinear[4] _encoder
     (dolist (elem _encoder)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; drive_ros_msgs/EncoderLinear[4] _encoder
   (dotimes (i 4)
     (send (elt _encoder i) :deserialize buf ptr-) (incf ptr- (send (elt _encoder i) :serialization-length))
     )
   ;;
   self)
  )

(setf (get drive_ros_msgs::VehicleEncoder :md5sum-) "a9cb468b8c6666bc24bad1a31a5a51a0")
(setf (get drive_ros_msgs::VehicleEncoder :datatype-) "drive_ros_msgs/VehicleEncoder")
(setf (get drive_ros_msgs::VehicleEncoder :definition-)
      "Header header

# array of encoders
EncoderLinear[4] encoder

# only one motor encoder
uint8 MOTOR=0

# 4 wheel encoders
uint8 FRONT_WHEEL_LEFT=0
uint8 FRONT_WHEEL_RIGHT=1
uint8 REAR_WHEEL_LEFT=2
uint8 REAR_WHEEL_RIGHT=3

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
MSG: drive_ros_msgs/EncoderLinear
# linear encoder message
Header header

# absolut position of encoder in [m]
float32 pos_abs
float32 pos_abs_var

# relative position of encoder in [m] compared to last message
float32 pos_rel
float32 pos_rel_var

# velocity of encoder in [m/s]
float32 vel
float32 vel_var

")



(provide :drive_ros_msgs/VehicleEncoder "a9cb468b8c6666bc24bad1a31a5a51a0")


