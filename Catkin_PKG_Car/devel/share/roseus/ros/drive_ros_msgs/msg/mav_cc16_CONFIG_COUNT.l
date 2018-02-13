;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_CONFIG_COUNT)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_CONFIG_COUNT (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_COUNT")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_COUNT"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_CONFIG_COUNT.msg.html


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_COUNT"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_COUNT"))
(defconstant drive_ros_msgs::mav_cc16_CONFIG_COUNT::*ID* 195)
(defclass drive_ros_msgs::mav_cc16_CONFIG_COUNT
  :super ros::object
  :slots (_sysid _compid _config_id_mask ))

(defmethod drive_ros_msgs::mav_cc16_CONFIG_COUNT
  (:init
   (&key
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:config_id_mask __config_id_mask) 0)
    )
   (send-super :init)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _config_id_mask (round __config_id_mask))
   self)
  (:sysid
   (&optional __sysid)
   (if __sysid (setq _sysid __sysid)) _sysid)
  (:compid
   (&optional __compid)
   (if __compid (setq _compid __compid)) _compid)
  (:config_id_mask
   (&optional __config_id_mask)
   (if __config_id_mask (setq _config_id_mask __config_id_mask)) _config_id_mask)
  (:serialization-length
   ()
   (+
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; uint32 _config_id_mask
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _sysid
       (write-byte _sysid s)
     ;; uint8 _compid
       (write-byte _compid s)
     ;; uint32 _config_id_mask
       (write-long _config_id_mask s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _sysid
     (setq _sysid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _compid
     (setq _compid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint32 _config_id_mask
     (setq _config_id_mask (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_CONFIG_COUNT :md5sum-) "46576e4a4b8b1009c8c8d61fa45767d8")
(setf (get drive_ros_msgs::mav_cc16_CONFIG_COUNT :datatype-) "drive_ros_msgs/mav_cc16_CONFIG_COUNT")
(setf (get drive_ros_msgs::mav_cc16_CONFIG_COUNT :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.453094
# MESSAGE: CONFIG_COUNT
# Description:Config quantity/id information
uint8 ID = 195
uint8 sysid
uint8 compid

uint32 config_id_mask       # Bitmask indicating which ids are used (LSB = id 0)

")



(provide :drive_ros_msgs/mav_cc16_CONFIG_COUNT "46576e4a4b8b1009c8c8d61fa45767d8")


