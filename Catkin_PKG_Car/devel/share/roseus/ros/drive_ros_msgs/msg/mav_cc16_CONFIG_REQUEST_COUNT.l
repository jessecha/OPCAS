;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_CONFIG_REQUEST_COUNT)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_CONFIG_REQUEST_COUNT (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_REQUEST_COUNT")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_REQUEST_COUNT"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_CONFIG_REQUEST_COUNT.msg.html


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_REQUEST_COUNT"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_REQUEST_COUNT"))
(defconstant drive_ros_msgs::mav_cc16_CONFIG_REQUEST_COUNT::*ID* 192)
(defclass drive_ros_msgs::mav_cc16_CONFIG_REQUEST_COUNT
  :super ros::object
  :slots (_sysid _compid _dummy ))

(defmethod drive_ros_msgs::mav_cc16_CONFIG_REQUEST_COUNT
  (:init
   (&key
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:dummy __dummy) 0)
    )
   (send-super :init)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _dummy (round __dummy))
   self)
  (:sysid
   (&optional __sysid)
   (if __sysid (setq _sysid __sysid)) _sysid)
  (:compid
   (&optional __compid)
   (if __compid (setq _compid __compid)) _compid)
  (:dummy
   (&optional __dummy)
   (if __dummy (setq _dummy __dummy)) _dummy)
  (:serialization-length
   ()
   (+
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; uint8 _dummy
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
     ;; uint8 _dummy
       (write-byte _dummy s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _sysid
     (setq _sysid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _compid
     (setq _compid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _dummy
     (setq _dummy (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_CONFIG_REQUEST_COUNT :md5sum-) "c8bde82c47574bf9d3ab6bb685675a04")
(setf (get drive_ros_msgs::mav_cc16_CONFIG_REQUEST_COUNT :datatype-) "drive_ros_msgs/mav_cc16_CONFIG_REQUEST_COUNT")
(setf (get drive_ros_msgs::mav_cc16_CONFIG_REQUEST_COUNT :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.453037
# MESSAGE: CONFIG_REQUEST_COUNT
# Description:Request quantity/id information of configs
uint8 ID = 192
uint8 sysid
uint8 compid

uint8 dummy

")



(provide :drive_ros_msgs/mav_cc16_CONFIG_REQUEST_COUNT "c8bde82c47574bf9d3ab6bb685675a04")


