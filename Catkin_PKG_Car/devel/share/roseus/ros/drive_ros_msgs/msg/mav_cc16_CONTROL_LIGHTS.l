;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_CONTROL_LIGHTS)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_CONTROL_LIGHTS (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_LIGHTS")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_LIGHTS"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_CONTROL_LIGHTS.msg.html


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_LIGHTS"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONTROL_LIGHTS"))
(defconstant drive_ros_msgs::mav_cc16_CONTROL_LIGHTS::*ID* 32)
(defclass drive_ros_msgs::mav_cc16_CONTROL_LIGHTS
  :super ros::object
  :slots (_sysid _compid _colors ))

(defmethod drive_ros_msgs::mav_cc16_CONTROL_LIGHTS
  (:init
   (&key
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:colors __colors) (make-array 15 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _colors __colors)
   self)
  (:sysid
   (&optional __sysid)
   (if __sysid (setq _sysid __sysid)) _sysid)
  (:compid
   (&optional __compid)
   (if __compid (setq _compid __compid)) _compid)
  (:colors
   (&optional __colors)
   (if __colors (setq _colors __colors)) _colors)
  (:serialization-length
   ()
   (+
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; uint32[15] _colors
    (* 4    15)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _sysid
       (write-byte _sysid s)
     ;; uint8 _compid
       (write-byte _compid s)
     ;; uint32[15] _colors
     (dotimes (i 15)
       (write-long (elt _colors i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _sysid
     (setq _sysid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _compid
     (setq _compid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint32[15] _colors
   (dotimes (i (length _colors))
     (setf (elt _colors i) (sys::peek buf ptr- :integer)) (incf ptr- 4)
     )
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_CONTROL_LIGHTS :md5sum-) "8d6b19f83df7d1d5d31de59ee6e1ece9")
(setf (get drive_ros_msgs::mav_cc16_CONTROL_LIGHTS :datatype-) "drive_ros_msgs/mav_cc16_CONTROL_LIGHTS")
(setf (get drive_ros_msgs::mav_cc16_CONTROL_LIGHTS :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.452797
# MESSAGE: CONTROL_LIGHTS
# Description:RGB lights
uint8 ID = 32
uint8 sysid
uint8 compid

uint32[15] colors   # Colors-4 bytes, r,g,b, nothing

")



(provide :drive_ros_msgs/mav_cc16_CONTROL_LIGHTS "8d6b19f83df7d1d5d31de59ee6e1ece9")


