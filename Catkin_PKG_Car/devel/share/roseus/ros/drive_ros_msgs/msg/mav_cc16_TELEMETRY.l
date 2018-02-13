;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_TELEMETRY)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_TELEMETRY (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_TELEMETRY.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(defconstant drive_ros_msgs::mav_cc16_TELEMETRY::*ID* 3)
(intern "*REMOTE_CONTROL_STATUS_DISCONNECTED*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(shadow '*REMOTE_CONTROL_STATUS_DISCONNECTED* (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(defconstant drive_ros_msgs::mav_cc16_TELEMETRY::*REMOTE_CONTROL_STATUS_DISCONNECTED* 0)
(intern "*REMOTE_CONTROL_STATUS_CONNECTED*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(shadow '*REMOTE_CONTROL_STATUS_CONNECTED* (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(defconstant drive_ros_msgs::mav_cc16_TELEMETRY::*REMOTE_CONTROL_STATUS_CONNECTED* 1)
(intern "*REMOTE_CONTROL_STATUS_AUTONOMOUS*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(shadow '*REMOTE_CONTROL_STATUS_AUTONOMOUS* (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(defconstant drive_ros_msgs::mav_cc16_TELEMETRY::*REMOTE_CONTROL_STATUS_AUTONOMOUS* 2)
(intern "*REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(shadow '*REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS* (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(defconstant drive_ros_msgs::mav_cc16_TELEMETRY::*REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS* 3)
(intern "*REMOTE_CONTROL_STATUS_MANUAL*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(shadow '*REMOTE_CONTROL_STATUS_MANUAL* (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(defconstant drive_ros_msgs::mav_cc16_TELEMETRY::*REMOTE_CONTROL_STATUS_MANUAL* 4)
(intern "*DRIVE_MODE_TRACK*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(shadow '*DRIVE_MODE_TRACK* (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(defconstant drive_ros_msgs::mav_cc16_TELEMETRY::*DRIVE_MODE_TRACK* 0)
(intern "*DRIVE_MODE_TRACK_OBSTACLES*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(shadow '*DRIVE_MODE_TRACK_OBSTACLES* (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(defconstant drive_ros_msgs::mav_cc16_TELEMETRY::*DRIVE_MODE_TRACK_OBSTACLES* 1)
(intern "*DRIVE_MODE_PARKING*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(shadow '*DRIVE_MODE_PARKING* (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(defconstant drive_ros_msgs::mav_cc16_TELEMETRY::*DRIVE_MODE_PARKING* 2)
(intern "*DRIVE_MODE_IDLE*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(shadow '*DRIVE_MODE_IDLE* (find-package "DRIVE_ROS_MSGS::MAV_CC16_TELEMETRY"))
(defconstant drive_ros_msgs::mav_cc16_TELEMETRY::*DRIVE_MODE_IDLE* 3)
(defclass drive_ros_msgs::mav_cc16_TELEMETRY
  :super ros::object
  :slots (_header _sysid _compid _xacc _yacc _zacc _xgyro _ygyro _zgyro _dist_front _dist_rear _dist_side _odom _odom_accumulated _xmotion_front _ymotion_front _xmotion_rear _ymotion_rear _motion_front_quality _motion_rear_quality _current_motor _current_servo_front _current_servo_rear _current_total _pwm_servo_front _pwm_servo_rear _battery_voltage _remote_control _drive_mode ))

(defmethod drive_ros_msgs::mav_cc16_TELEMETRY
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:xacc __xacc) 0.0)
    ((:yacc __yacc) 0.0)
    ((:zacc __zacc) 0.0)
    ((:xgyro __xgyro) 0.0)
    ((:ygyro __ygyro) 0.0)
    ((:zgyro __zgyro) 0.0)
    ((:dist_front __dist_front) 0.0)
    ((:dist_rear __dist_rear) 0.0)
    ((:dist_side __dist_side) 0.0)
    ((:odom __odom) 0.0)
    ((:odom_accumulated __odom_accumulated) 0.0)
    ((:xmotion_front __xmotion_front) 0.0)
    ((:ymotion_front __ymotion_front) 0.0)
    ((:xmotion_rear __xmotion_rear) 0.0)
    ((:ymotion_rear __ymotion_rear) 0.0)
    ((:motion_front_quality __motion_front_quality) 0)
    ((:motion_rear_quality __motion_rear_quality) 0)
    ((:current_motor __current_motor) 0)
    ((:current_servo_front __current_servo_front) 0)
    ((:current_servo_rear __current_servo_rear) 0)
    ((:current_total __current_total) 0)
    ((:pwm_servo_front __pwm_servo_front) 0)
    ((:pwm_servo_rear __pwm_servo_rear) 0)
    ((:battery_voltage __battery_voltage) 0)
    ((:remote_control __remote_control) 0)
    ((:drive_mode __drive_mode) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _xacc (float __xacc))
   (setq _yacc (float __yacc))
   (setq _zacc (float __zacc))
   (setq _xgyro (float __xgyro))
   (setq _ygyro (float __ygyro))
   (setq _zgyro (float __zgyro))
   (setq _dist_front (float __dist_front))
   (setq _dist_rear (float __dist_rear))
   (setq _dist_side (float __dist_side))
   (setq _odom (float __odom))
   (setq _odom_accumulated (float __odom_accumulated))
   (setq _xmotion_front (float __xmotion_front))
   (setq _ymotion_front (float __ymotion_front))
   (setq _xmotion_rear (float __xmotion_rear))
   (setq _ymotion_rear (float __ymotion_rear))
   (setq _motion_front_quality (round __motion_front_quality))
   (setq _motion_rear_quality (round __motion_rear_quality))
   (setq _current_motor (round __current_motor))
   (setq _current_servo_front (round __current_servo_front))
   (setq _current_servo_rear (round __current_servo_rear))
   (setq _current_total (round __current_total))
   (setq _pwm_servo_front (round __pwm_servo_front))
   (setq _pwm_servo_rear (round __pwm_servo_rear))
   (setq _battery_voltage (round __battery_voltage))
   (setq _remote_control (round __remote_control))
   (setq _drive_mode (round __drive_mode))
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
  (:xacc
   (&optional __xacc)
   (if __xacc (setq _xacc __xacc)) _xacc)
  (:yacc
   (&optional __yacc)
   (if __yacc (setq _yacc __yacc)) _yacc)
  (:zacc
   (&optional __zacc)
   (if __zacc (setq _zacc __zacc)) _zacc)
  (:xgyro
   (&optional __xgyro)
   (if __xgyro (setq _xgyro __xgyro)) _xgyro)
  (:ygyro
   (&optional __ygyro)
   (if __ygyro (setq _ygyro __ygyro)) _ygyro)
  (:zgyro
   (&optional __zgyro)
   (if __zgyro (setq _zgyro __zgyro)) _zgyro)
  (:dist_front
   (&optional __dist_front)
   (if __dist_front (setq _dist_front __dist_front)) _dist_front)
  (:dist_rear
   (&optional __dist_rear)
   (if __dist_rear (setq _dist_rear __dist_rear)) _dist_rear)
  (:dist_side
   (&optional __dist_side)
   (if __dist_side (setq _dist_side __dist_side)) _dist_side)
  (:odom
   (&optional __odom)
   (if __odom (setq _odom __odom)) _odom)
  (:odom_accumulated
   (&optional __odom_accumulated)
   (if __odom_accumulated (setq _odom_accumulated __odom_accumulated)) _odom_accumulated)
  (:xmotion_front
   (&optional __xmotion_front)
   (if __xmotion_front (setq _xmotion_front __xmotion_front)) _xmotion_front)
  (:ymotion_front
   (&optional __ymotion_front)
   (if __ymotion_front (setq _ymotion_front __ymotion_front)) _ymotion_front)
  (:xmotion_rear
   (&optional __xmotion_rear)
   (if __xmotion_rear (setq _xmotion_rear __xmotion_rear)) _xmotion_rear)
  (:ymotion_rear
   (&optional __ymotion_rear)
   (if __ymotion_rear (setq _ymotion_rear __ymotion_rear)) _ymotion_rear)
  (:motion_front_quality
   (&optional __motion_front_quality)
   (if __motion_front_quality (setq _motion_front_quality __motion_front_quality)) _motion_front_quality)
  (:motion_rear_quality
   (&optional __motion_rear_quality)
   (if __motion_rear_quality (setq _motion_rear_quality __motion_rear_quality)) _motion_rear_quality)
  (:current_motor
   (&optional __current_motor)
   (if __current_motor (setq _current_motor __current_motor)) _current_motor)
  (:current_servo_front
   (&optional __current_servo_front)
   (if __current_servo_front (setq _current_servo_front __current_servo_front)) _current_servo_front)
  (:current_servo_rear
   (&optional __current_servo_rear)
   (if __current_servo_rear (setq _current_servo_rear __current_servo_rear)) _current_servo_rear)
  (:current_total
   (&optional __current_total)
   (if __current_total (setq _current_total __current_total)) _current_total)
  (:pwm_servo_front
   (&optional __pwm_servo_front)
   (if __pwm_servo_front (setq _pwm_servo_front __pwm_servo_front)) _pwm_servo_front)
  (:pwm_servo_rear
   (&optional __pwm_servo_rear)
   (if __pwm_servo_rear (setq _pwm_servo_rear __pwm_servo_rear)) _pwm_servo_rear)
  (:battery_voltage
   (&optional __battery_voltage)
   (if __battery_voltage (setq _battery_voltage __battery_voltage)) _battery_voltage)
  (:remote_control
   (&optional __remote_control)
   (if __remote_control (setq _remote_control __remote_control)) _remote_control)
  (:drive_mode
   (&optional __drive_mode)
   (if __drive_mode (setq _drive_mode __drive_mode)) _drive_mode)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; float32 _xacc
    4
    ;; float32 _yacc
    4
    ;; float32 _zacc
    4
    ;; float32 _xgyro
    4
    ;; float32 _ygyro
    4
    ;; float32 _zgyro
    4
    ;; float32 _dist_front
    4
    ;; float32 _dist_rear
    4
    ;; float32 _dist_side
    4
    ;; float32 _odom
    4
    ;; float32 _odom_accumulated
    4
    ;; float32 _xmotion_front
    4
    ;; float32 _ymotion_front
    4
    ;; float32 _xmotion_rear
    4
    ;; float32 _ymotion_rear
    4
    ;; uint8 _motion_front_quality
    1
    ;; uint8 _motion_rear_quality
    1
    ;; int32 _current_motor
    4
    ;; uint16 _current_servo_front
    2
    ;; uint16 _current_servo_rear
    2
    ;; uint16 _current_total
    2
    ;; uint16 _pwm_servo_front
    2
    ;; uint16 _pwm_servo_rear
    2
    ;; uint16 _battery_voltage
    2
    ;; uint8 _remote_control
    1
    ;; uint8 _drive_mode
    1
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
     ;; float32 _xacc
       (sys::poke _xacc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _yacc
       (sys::poke _yacc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _zacc
       (sys::poke _zacc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _xgyro
       (sys::poke _xgyro (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _ygyro
       (sys::poke _ygyro (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _zgyro
       (sys::poke _zgyro (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _dist_front
       (sys::poke _dist_front (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _dist_rear
       (sys::poke _dist_rear (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _dist_side
       (sys::poke _dist_side (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _odom
       (sys::poke _odom (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _odom_accumulated
       (sys::poke _odom_accumulated (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _xmotion_front
       (sys::poke _xmotion_front (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _ymotion_front
       (sys::poke _ymotion_front (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _xmotion_rear
       (sys::poke _xmotion_rear (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _ymotion_rear
       (sys::poke _ymotion_rear (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _motion_front_quality
       (write-byte _motion_front_quality s)
     ;; uint8 _motion_rear_quality
       (write-byte _motion_rear_quality s)
     ;; int32 _current_motor
       (write-long _current_motor s)
     ;; uint16 _current_servo_front
       (write-word _current_servo_front s)
     ;; uint16 _current_servo_rear
       (write-word _current_servo_rear s)
     ;; uint16 _current_total
       (write-word _current_total s)
     ;; uint16 _pwm_servo_front
       (write-word _pwm_servo_front s)
     ;; uint16 _pwm_servo_rear
       (write-word _pwm_servo_rear s)
     ;; uint16 _battery_voltage
       (write-word _battery_voltage s)
     ;; uint8 _remote_control
       (write-byte _remote_control s)
     ;; uint8 _drive_mode
       (write-byte _drive_mode s)
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
   ;; float32 _xacc
     (setq _xacc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _yacc
     (setq _yacc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _zacc
     (setq _zacc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _xgyro
     (setq _xgyro (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _ygyro
     (setq _ygyro (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _zgyro
     (setq _zgyro (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _dist_front
     (setq _dist_front (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _dist_rear
     (setq _dist_rear (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _dist_side
     (setq _dist_side (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _odom
     (setq _odom (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _odom_accumulated
     (setq _odom_accumulated (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _xmotion_front
     (setq _xmotion_front (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _ymotion_front
     (setq _ymotion_front (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _xmotion_rear
     (setq _xmotion_rear (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _ymotion_rear
     (setq _ymotion_rear (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _motion_front_quality
     (setq _motion_front_quality (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _motion_rear_quality
     (setq _motion_rear_quality (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; int32 _current_motor
     (setq _current_motor (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint16 _current_servo_front
     (setq _current_servo_front (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _current_servo_rear
     (setq _current_servo_rear (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _current_total
     (setq _current_total (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _pwm_servo_front
     (setq _pwm_servo_front (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _pwm_servo_rear
     (setq _pwm_servo_rear (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _battery_voltage
     (setq _battery_voltage (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint8 _remote_control
     (setq _remote_control (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _drive_mode
     (setq _drive_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_TELEMETRY :md5sum-) "432f9dfb0037d5f65f83be8d10976087")
(setf (get drive_ros_msgs::mav_cc16_TELEMETRY :datatype-) "drive_ros_msgs/mav_cc16_TELEMETRY")
(setf (get drive_ros_msgs::mav_cc16_TELEMETRY :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.452753
# MESSAGE: TELEMETRY
# Description:Telemetry
Header header

uint8 ID = 3
uint8 sysid
uint8 compid

float32 xacc
float32 yacc
float32 zacc
float32 xgyro
float32 ygyro
float32 zgyro
float32 dist_front
float32 dist_rear
float32 dist_side
float32 odom
float32 odom_accumulated
float32 xmotion_front
float32 ymotion_front
float32 xmotion_rear
float32 ymotion_rear
uint8 motion_front_quality
uint8 motion_rear_quality
int32 current_motor
uint16 current_servo_front
uint16 current_servo_rear
uint16 current_total
uint16 pwm_servo_front
uint16 pwm_servo_rear
uint16 battery_voltage
uint8 remote_control
uint8 drive_mode


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



(provide :drive_ros_msgs/mav_cc16_TELEMETRY "432f9dfb0037d5f65f83be8d10976087")


