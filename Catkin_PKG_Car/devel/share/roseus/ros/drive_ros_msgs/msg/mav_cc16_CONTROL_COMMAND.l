;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_CONTROL_COMMAND)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_CONTROL_COMMAND (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_COMMAND")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_COMMAND"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_CONTROL_COMMAND.msg.html


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_COMMAND"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_COMMAND"))
(defconstant drive_ros_msgs::mav_cc16_CONTROL_COMMAND::*ID* 64)
(intern "*INDICATOR_OFF*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_COMMAND"))
(shadow '*INDICATOR_OFF* (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_COMMAND"))
(defconstant drive_ros_msgs::mav_cc16_CONTROL_COMMAND::*INDICATOR_OFF* 0)
(intern "*INDICATOR_ON*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_COMMAND"))
(shadow '*INDICATOR_ON* (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_COMMAND"))
(defconstant drive_ros_msgs::mav_cc16_CONTROL_COMMAND::*INDICATOR_ON* 1)
(defclass drive_ros_msgs::mav_cc16_CONTROL_COMMAND
  :super ros::object
  :slots (_sysid _compid _velocity _steering_front _steering_rear _indicator_left _indicator_right ))

(defmethod drive_ros_msgs::mav_cc16_CONTROL_COMMAND
  (:init
   (&key
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:velocity __velocity) 0.0)
    ((:steering_front __steering_front) 0.0)
    ((:steering_rear __steering_rear) 0.0)
    ((:indicator_left __indicator_left) 0)
    ((:indicator_right __indicator_right) 0)
    )
   (send-super :init)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _velocity (float __velocity))
   (setq _steering_front (float __steering_front))
   (setq _steering_rear (float __steering_rear))
   (setq _indicator_left (round __indicator_left))
   (setq _indicator_right (round __indicator_right))
   self)
  (:sysid
   (&optional __sysid)
   (if __sysid (setq _sysid __sysid)) _sysid)
  (:compid
   (&optional __compid)
   (if __compid (setq _compid __compid)) _compid)
  (:velocity
   (&optional __velocity)
   (if __velocity (setq _velocity __velocity)) _velocity)
  (:steering_front
   (&optional __steering_front)
   (if __steering_front (setq _steering_front __steering_front)) _steering_front)
  (:steering_rear
   (&optional __steering_rear)
   (if __steering_rear (setq _steering_rear __steering_rear)) _steering_rear)
  (:indicator_left
   (&optional __indicator_left)
   (if __indicator_left (setq _indicator_left __indicator_left)) _indicator_left)
  (:indicator_right
   (&optional __indicator_right)
   (if __indicator_right (setq _indicator_right __indicator_right)) _indicator_right)
  (:serialization-length
   ()
   (+
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; float32 _velocity
    4
    ;; float32 _steering_front
    4
    ;; float32 _steering_rear
    4
    ;; uint8 _indicator_left
    1
    ;; uint8 _indicator_right
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _sysid
       (write-byte _sysid s)
     ;; uint8 _compid
       (write-byte _compid s)
     ;; float32 _velocity
       (sys::poke _velocity (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steering_front
       (sys::poke _steering_front (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steering_rear
       (sys::poke _steering_rear (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _indicator_left
       (write-byte _indicator_left s)
     ;; uint8 _indicator_right
       (write-byte _indicator_right s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _sysid
     (setq _sysid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _compid
     (setq _compid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _velocity
     (setq _velocity (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steering_front
     (setq _steering_front (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steering_rear
     (setq _steering_rear (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _indicator_left
     (setq _indicator_left (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _indicator_right
     (setq _indicator_right (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_CONTROL_COMMAND :md5sum-) "db3d4778273e5bde28a0418e456620d4")
(setf (get drive_ros_msgs::mav_cc16_CONTROL_COMMAND :datatype-) "drive_ros_msgs/mav_cc16_CONTROL_COMMAND")
(setf (get drive_ros_msgs::mav_cc16_CONTROL_COMMAND :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.452827
# MESSAGE: CONTROL_COMMAND
# Description: Control command data
uint8 ID = 64
uint8 sysid
uint8 compid

float32 velocity            # Desired velocity [m/s]
float32 steering_front      # Front axle steering angle [rad]
float32 steering_rear       # Rear axle steering angle [rad]
uint8 indicator_left        # Left turn signal indicator
uint8 indicator_right       # Right turn signal indicator

uint8 INDICATOR_OFF = 0 # turn indicator off
uint8 INDICATOR_ON  = 1 # turn indicator on

")



(provide :drive_ros_msgs/mav_cc16_CONTROL_COMMAND "db3d4778273e5bde28a0418e456620d4")


