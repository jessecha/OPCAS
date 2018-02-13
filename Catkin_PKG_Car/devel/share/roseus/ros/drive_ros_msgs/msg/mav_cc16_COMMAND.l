;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_COMMAND)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_COMMAND (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_COMMAND")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_COMMAND"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_COMMAND.msg.html


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_COMMAND"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_COMMAND"))
(defconstant drive_ros_msgs::mav_cc16_COMMAND::*ID* 210)
(intern "*COMMAND_TYPE_IMU_CALI*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_COMMAND"))
(shadow '*COMMAND_TYPE_IMU_CALI* (find-package "DRIVE_ROS_MSGS::MAV_CC16_COMMAND"))
(defconstant drive_ros_msgs::mav_cc16_COMMAND::*COMMAND_TYPE_IMU_CALI* 0)
(intern "*COMMAND_TYPE_SELF_TEST*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_COMMAND"))
(shadow '*COMMAND_TYPE_SELF_TEST* (find-package "DRIVE_ROS_MSGS::MAV_CC16_COMMAND"))
(defconstant drive_ros_msgs::mav_cc16_COMMAND::*COMMAND_TYPE_SELF_TEST* 1)
(defclass drive_ros_msgs::mav_cc16_COMMAND
  :super ros::object
  :slots (_sysid _compid _command ))

(defmethod drive_ros_msgs::mav_cc16_COMMAND
  (:init
   (&key
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:command __command) 0)
    )
   (send-super :init)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _command (round __command))
   self)
  (:sysid
   (&optional __sysid)
   (if __sysid (setq _sysid __sysid)) _sysid)
  (:compid
   (&optional __compid)
   (if __compid (setq _compid __compid)) _compid)
  (:command
   (&optional __command)
   (if __command (setq _command __command)) _command)
  (:serialization-length
   ()
   (+
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; uint8 _command
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
     ;; uint8 _command
       (write-byte _command s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _sysid
     (setq _sysid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _compid
     (setq _compid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _command
     (setq _command (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_COMMAND :md5sum-) "be67c996d08c2861ab69974cb5883a21")
(setf (get drive_ros_msgs::mav_cc16_COMMAND :datatype-) "drive_ros_msgs/mav_cc16_COMMAND")
(setf (get drive_ros_msgs::mav_cc16_COMMAND :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.453254
# MESSAGE: COMMAND
# Description:Command to perform
uint8 ID = 210
uint8 sysid
uint8 compid

uint8 command   # Command to perform (see COMMAND_TYPE ENUM)

uint8 COMMAND_TYPE_IMU_CALI = 0           # Command: Perform IMU calibration
uint8 COMMAND_TYPE_SELF_TEST = 1          # Command: Perform self-test of sensor and actor

")



(provide :drive_ros_msgs/mav_cc16_COMMAND "be67c996d08c2861ab69974cb5883a21")


