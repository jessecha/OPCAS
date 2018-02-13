;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_DEBUG)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_DEBUG (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_DEBUG")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_DEBUG"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_DEBUG.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_DEBUG"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_DEBUG"))
(defconstant drive_ros_msgs::mav_cc16_DEBUG::*ID* 2)
(defclass drive_ros_msgs::mav_cc16_DEBUG
  :super ros::object
  :slots (_header _sysid _compid _data ))

(defmethod drive_ros_msgs::mav_cc16_DEBUG
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:data __data) (make-array 12 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _header __header)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _data __data)
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
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; float32[12] _data
    (* 4    12)
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
     ;; float32[12] _data
     (dotimes (i 12)
       (sys::poke (elt _data i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
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
   ;; float32[12] _data
   (dotimes (i (length _data))
     (setf (elt _data i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     )
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_DEBUG :md5sum-) "ab7f462cba6959e1c450a692805731e2")
(setf (get drive_ros_msgs::mav_cc16_DEBUG :datatype-) "drive_ros_msgs/mav_cc16_DEBUG")
(setf (get drive_ros_msgs::mav_cc16_DEBUG :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.452733
# MESSAGE: DEBUG
# Description:Debug message
Header header

uint8 ID = 2
uint8 sysid
uint8 compid

float32[12] data    # Debug data

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



(provide :drive_ros_msgs/mav_cc16_DEBUG "ab7f462cba6959e1c450a692805731e2")


