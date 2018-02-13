;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_HEARTBEAT)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_HEARTBEAT (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_HEARTBEAT.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(defconstant drive_ros_msgs::mav_cc16_HEARTBEAT::*ID* 1)
(intern "*REMOTE_CONTROL_STATUS_DISCONNECTED*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(shadow '*REMOTE_CONTROL_STATUS_DISCONNECTED* (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(defconstant drive_ros_msgs::mav_cc16_HEARTBEAT::*REMOTE_CONTROL_STATUS_DISCONNECTED* 0)
(intern "*REMOTE_CONTROL_STATUS_CONNECTED*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(shadow '*REMOTE_CONTROL_STATUS_CONNECTED* (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(defconstant drive_ros_msgs::mav_cc16_HEARTBEAT::*REMOTE_CONTROL_STATUS_CONNECTED* 1)
(intern "*REMOTE_CONTROL_STATUS_AUTONOMOUS*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(shadow '*REMOTE_CONTROL_STATUS_AUTONOMOUS* (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(defconstant drive_ros_msgs::mav_cc16_HEARTBEAT::*REMOTE_CONTROL_STATUS_AUTONOMOUS* 2)
(intern "*REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(shadow '*REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS* (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(defconstant drive_ros_msgs::mav_cc16_HEARTBEAT::*REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS* 3)
(intern "*REMOTE_CONTROL_STATUS_MANUAL*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(shadow '*REMOTE_CONTROL_STATUS_MANUAL* (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(defconstant drive_ros_msgs::mav_cc16_HEARTBEAT::*REMOTE_CONTROL_STATUS_MANUAL* 4)
(intern "*DRIVE_MODE_TRACK*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(shadow '*DRIVE_MODE_TRACK* (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(defconstant drive_ros_msgs::mav_cc16_HEARTBEAT::*DRIVE_MODE_TRACK* 0)
(intern "*DRIVE_MODE_TRACK_OBSTACLES*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(shadow '*DRIVE_MODE_TRACK_OBSTACLES* (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(defconstant drive_ros_msgs::mav_cc16_HEARTBEAT::*DRIVE_MODE_TRACK_OBSTACLES* 1)
(intern "*DRIVE_MODE_PARKING*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(shadow '*DRIVE_MODE_PARKING* (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(defconstant drive_ros_msgs::mav_cc16_HEARTBEAT::*DRIVE_MODE_PARKING* 2)
(intern "*DRIVE_MODE_IDLE*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(shadow '*DRIVE_MODE_IDLE* (find-package "DRIVE_ROS_MSGS::MAV_CC16_HEARTBEAT"))
(defconstant drive_ros_msgs::mav_cc16_HEARTBEAT::*DRIVE_MODE_IDLE* 3)
(defclass drive_ros_msgs::mav_cc16_HEARTBEAT
  :super ros::object
  :slots (_header _sysid _compid _battery_voltage _remote_control _drive_mode _rc_velocity _rc_steering_front _rc_steering_rear ))

(defmethod drive_ros_msgs::mav_cc16_HEARTBEAT
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:battery_voltage __battery_voltage) 0)
    ((:remote_control __remote_control) 0)
    ((:drive_mode __drive_mode) 0)
    ((:rc_velocity __rc_velocity) 0.0)
    ((:rc_steering_front __rc_steering_front) 0.0)
    ((:rc_steering_rear __rc_steering_rear) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _battery_voltage (round __battery_voltage))
   (setq _remote_control (round __remote_control))
   (setq _drive_mode (round __drive_mode))
   (setq _rc_velocity (float __rc_velocity))
   (setq _rc_steering_front (float __rc_steering_front))
   (setq _rc_steering_rear (float __rc_steering_rear))
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
  (:battery_voltage
   (&optional __battery_voltage)
   (if __battery_voltage (setq _battery_voltage __battery_voltage)) _battery_voltage)
  (:remote_control
   (&optional __remote_control)
   (if __remote_control (setq _remote_control __remote_control)) _remote_control)
  (:drive_mode
   (&optional __drive_mode)
   (if __drive_mode (setq _drive_mode __drive_mode)) _drive_mode)
  (:rc_velocity
   (&optional __rc_velocity)
   (if __rc_velocity (setq _rc_velocity __rc_velocity)) _rc_velocity)
  (:rc_steering_front
   (&optional __rc_steering_front)
   (if __rc_steering_front (setq _rc_steering_front __rc_steering_front)) _rc_steering_front)
  (:rc_steering_rear
   (&optional __rc_steering_rear)
   (if __rc_steering_rear (setq _rc_steering_rear __rc_steering_rear)) _rc_steering_rear)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; uint16 _battery_voltage
    2
    ;; uint8 _remote_control
    1
    ;; uint8 _drive_mode
    1
    ;; float32 _rc_velocity
    4
    ;; float32 _rc_steering_front
    4
    ;; float32 _rc_steering_rear
    4
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
     ;; uint16 _battery_voltage
       (write-word _battery_voltage s)
     ;; uint8 _remote_control
       (write-byte _remote_control s)
     ;; uint8 _drive_mode
       (write-byte _drive_mode s)
     ;; float32 _rc_velocity
       (sys::poke _rc_velocity (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _rc_steering_front
       (sys::poke _rc_steering_front (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _rc_steering_rear
       (sys::poke _rc_steering_rear (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
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
   ;; uint16 _battery_voltage
     (setq _battery_voltage (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint8 _remote_control
     (setq _remote_control (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _drive_mode
     (setq _drive_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _rc_velocity
     (setq _rc_velocity (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _rc_steering_front
     (setq _rc_steering_front (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _rc_steering_rear
     (setq _rc_steering_rear (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_HEARTBEAT :md5sum-) "7f0c43a59dc6fe6c5ede5ec59a47ab1b")
(setf (get drive_ros_msgs::mav_cc16_HEARTBEAT :datatype-) "drive_ros_msgs/mav_cc16_HEARTBEAT")
(setf (get drive_ros_msgs::mav_cc16_HEARTBEAT :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.452693
# MESSAGE: HEARTBEAT
# Description:Heartbeat status message
Header header

uint8 ID = 1
uint8 sysid
uint8 compid

uint16 battery_voltage      # Battery voltage, in millivolts (1 = 1 millivolt)
uint8 remote_control        # Remote Control status (see REMOTE_CONTROL_STATUS ENUM)
uint8 drive_mode            # Selected drive mode (see DRIVE_MODE ENUM)
float32 rc_velocity         # Velocity set by remote control [m/s]
float32 rc_steering_front   # Front steering angle set by remote control [rad]
float32 rc_steering_rear    # Rear steering angle set by remote control [rad]

uint8 REMOTE_CONTROL_STATUS_DISCONNECTED = 0     # Remote Control is not connected to the system
uint8 REMOTE_CONTROL_STATUS_CONNECTED = 1        # Remote Control connection is established
uint8 REMOTE_CONTROL_STATUS_AUTONOMOUS = 2       # Remote Control is connected and under active control
uint8 REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS = 3  # Remote Control is connected and under active control
uint8 REMOTE_CONTROL_STATUS_MANUAL = 4           # Remote Control is connected and under active control


uint8 DRIVE_MODE_TRACK = 0              # Track (excluding obstacles)
uint8 DRIVE_MODE_TRACK_OBSTACLES = 1    # Track including obstacles
uint8 DRIVE_MODE_PARKING = 2            # Parking mode
uint8 DRIVE_MODE_IDLE = 3               # Idle mode

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

")



(provide :drive_ros_msgs/mav_cc16_HEARTBEAT "7f0c43a59dc6fe6c5ede5ec59a47ab1b")


