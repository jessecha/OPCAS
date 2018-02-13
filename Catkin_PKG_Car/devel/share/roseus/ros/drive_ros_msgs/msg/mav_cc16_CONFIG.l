;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_CONFIG)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_CONFIG (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_CONFIG.msg.html


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG"))
(defconstant drive_ros_msgs::mav_cc16_CONFIG::*ID* 196)
(defclass drive_ros_msgs::mav_cc16_CONFIG
  :super ros::object
  :slots (_sysid _compid _config_id _name _param_id_mask ))

(defmethod drive_ros_msgs::mav_cc16_CONFIG
  (:init
   (&key
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:config_id __config_id) 0)
    ((:name __name) (make-array 30 :initial-element 0 :element-type :integer))
    ((:param_id_mask __param_id_mask) 0)
    )
   (send-super :init)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _config_id (round __config_id))
   (setq _name __name)
   (setq _param_id_mask (round __param_id_mask))
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
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:param_id_mask
   (&optional __param_id_mask)
   (if __param_id_mask (setq _param_id_mask __param_id_mask)) _param_id_mask)
  (:serialization-length
   ()
   (+
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; uint8 _config_id
    1
    ;; char[30] _name
    (* 1    30)
    ;; uint16 _param_id_mask
    2
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
     ;; char[30] _name
     (dotimes (i 30)
       (write-byte (elt _name i) s)
       )
     ;; uint16 _param_id_mask
       (write-word _param_id_mask s)
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
   ;; char[30] _name
   (dotimes (i (length _name))
     (setf (elt _name i) (sys::peek buf ptr- :char)) (incf ptr- 1)
     )
   ;; uint16 _param_id_mask
     (setq _param_id_mask (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_CONFIG :md5sum-) "0173aab5bcc4cc9e033c6fccf6233937")
(setf (get drive_ros_msgs::mav_cc16_CONFIG :datatype-) "drive_ros_msgs/mav_cc16_CONFIG")
(setf (get drive_ros_msgs::mav_cc16_CONFIG :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.453109
# MESSAGE: CONFIG
# Description:Config set information
uint8 ID = 196
uint8 sysid
uint8 compid

uint8 config_id         # ID of the configuration set
char[30] name           # Name of the configuration set
uint16 param_id_mask    # Bitmask indicating which param ids are used (LSB = id 0)

")



(provide :drive_ros_msgs/mav_cc16_CONFIG "0173aab5bcc4cc9e033c6fccf6233937")


