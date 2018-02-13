;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_CONFIG_REQUEST)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_CONFIG_REQUEST (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_REQUEST")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_REQUEST"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_CONFIG_REQUEST.msg.html


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_REQUEST"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_REQUEST"))
(defconstant drive_ros_msgs::mav_cc16_CONFIG_REQUEST::*ID* 193)
(defclass drive_ros_msgs::mav_cc16_CONFIG_REQUEST
  :super ros::object
  :slots (_sysid _compid _config_id ))

(defmethod drive_ros_msgs::mav_cc16_CONFIG_REQUEST
  (:init
   (&key
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:config_id __config_id) 0)
    )
   (send-super :init)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _config_id (round __config_id))
   self)
  (:sysid
   (&optional __sysid)
   (if __sysid (setq _sysid __sysid)) _sysid)
  (:compid
   (&optional __compid)
   (if __compid (setq _compid __compid)) _compid)
  (:config_id
   (&optional __config_id)
   (if __config_id (setq _config_id __config_id)) _config_id)
  (:serialization-length
   ()
   (+
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; uint8 _config_id
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
     ;; uint8 _config_id
       (write-byte _config_id s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _sysid
     (setq _sysid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _compid
     (setq _compid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _config_id
     (setq _config_id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_CONFIG_REQUEST :md5sum-) "68cb0440e1be5e257a0abf85c72d9952")
(setf (get drive_ros_msgs::mav_cc16_CONFIG_REQUEST :datatype-) "drive_ros_msgs/mav_cc16_CONFIG_REQUEST")
(setf (get drive_ros_msgs::mav_cc16_CONFIG_REQUEST :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.453053
# MESSAGE: CONFIG_REQUEST
# Description:Request config information
uint8 ID = 193
uint8 sysid
uint8 compid

uint8 config_id     # Id of the config to request

")



(provide :drive_ros_msgs/mav_cc16_CONFIG_REQUEST "68cb0440e1be5e257a0abf85c72d9952")


