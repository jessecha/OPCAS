;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_PARKING_LOT)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_PARKING_LOT (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_PARKING_LOT")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_PARKING_LOT"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_PARKING_LOT.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_PARKING_LOT"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_PARKING_LOT"))
(defconstant drive_ros_msgs::mav_cc16_PARKING_LOT::*ID* 150)
(defclass drive_ros_msgs::mav_cc16_PARKING_LOT
  :super ros::object
  :slots (_header _sysid _compid _parking_lot_size _parking_lot_position ))

(defmethod drive_ros_msgs::mav_cc16_PARKING_LOT
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:parking_lot_size __parking_lot_size) 0.0)
    ((:parking_lot_position __parking_lot_position) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _parking_lot_size (float __parking_lot_size))
   (setq _parking_lot_position (float __parking_lot_position))
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
  (:parking_lot_size
   (&optional __parking_lot_size)
   (if __parking_lot_size (setq _parking_lot_size __parking_lot_size)) _parking_lot_size)
  (:parking_lot_position
   (&optional __parking_lot_position)
   (if __parking_lot_position (setq _parking_lot_position __parking_lot_position)) _parking_lot_position)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; float32 _parking_lot_size
    4
    ;; float32 _parking_lot_position
    4
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
     ;; float32 _parking_lot_size
       (sys::poke _parking_lot_size (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _parking_lot_position
       (sys::poke _parking_lot_position (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
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
   ;; float32 _parking_lot_size
     (setq _parking_lot_size (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _parking_lot_position
     (setq _parking_lot_position (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_PARKING_LOT :md5sum-) "4b449dea5df2bf4f6c8248aa0725add9")
(setf (get drive_ros_msgs::mav_cc16_PARKING_LOT :datatype-) "drive_ros_msgs/mav_cc16_PARKING_LOT")
(setf (get drive_ros_msgs::mav_cc16_PARKING_LOT :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.453020
# MESSAGE: PARKING_LOT
# Description:Parking Lot Sensor
Header header

uint8 ID = 150
uint8 sysid
uint8 compid

float32 parking_lot_size        # Size of the parking lot [m]
float32 parking_lot_position    # Position of the second edge of the parking lot [m]

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



(provide :drive_ros_msgs/mav_cc16_PARKING_LOT "4b449dea5df2bf4f6c8248aa0725add9")


