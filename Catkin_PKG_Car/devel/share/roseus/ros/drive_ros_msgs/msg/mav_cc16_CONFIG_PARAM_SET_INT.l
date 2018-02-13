;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_INT)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_CONFIG_PARAM_SET_INT (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_PARAM_SET_INT")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_PARAM_SET_INT"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_CONFIG_PARAM_SET_INT.msg.html


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_PARAM_SET_INT"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_PARAM_SET_INT"))
(defconstant drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_INT::*ID* 200)
(defclass drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_INT
  :super ros::object
  :slots (_sysid _compid _config_id _param_id _value ))

(defmethod drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_INT
  (:init
   (&key
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:config_id __config_id) 0)
    ((:param_id __param_id) 0)
    ((:value __value) 0)
    )
   (send-super :init)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _config_id (round __config_id))
   (setq _param_id (round __param_id))
   (setq _value (round __value))
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
  (:param_id
   (&optional __param_id)
   (if __param_id (setq _param_id __param_id)) _param_id)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; uint8 _config_id
    1
    ;; uint8 _param_id
    1
    ;; int32 _value
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
     ;; uint8 _config_id
       (write-byte _config_id s)
     ;; uint8 _param_id
       (write-byte _param_id s)
     ;; int32 _value
       (write-long _value s)
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
   ;; uint8 _param_id
     (setq _param_id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; int32 _value
     (setq _value (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_INT :md5sum-) "13a44efe541a5bf1e48949df36ecdb1d")
(setf (get drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_INT :datatype-) "drive_ros_msgs/mav_cc16_CONFIG_PARAM_SET_INT")
(setf (get drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_INT :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.453203
# MESSAGE: CONFIG_PARAM_SET_INT
# Description:Set new config parameter int value
uint8 ID = 200
uint8 sysid
uint8 compid

uint8 config_id     # ID of the configuration set
uint8 param_id      # ID of the configuration parameter within the config set
int32 value         # New parameter value

")



(provide :drive_ros_msgs/mav_cc16_CONFIG_PARAM_SET_INT "13a44efe541a5bf1e48949df36ecdb1d")


