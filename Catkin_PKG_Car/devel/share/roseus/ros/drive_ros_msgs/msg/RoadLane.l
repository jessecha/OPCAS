;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::RoadLane)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'RoadLane (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::ROADLANE")
  (make-package "DRIVE_ROS_MSGS::ROADLANE"))

(in-package "ROS")
;;//! \htmlinclude RoadLane.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*UNKNOWN*" (find-package "DRIVE_ROS_MSGS::ROADLANE"))
(shadow '*UNKNOWN* (find-package "DRIVE_ROS_MSGS::ROADLANE"))
(defconstant drive_ros_msgs::RoadLane::*UNKNOWN* 0)
(intern "*STRAIGHT*" (find-package "DRIVE_ROS_MSGS::ROADLANE"))
(shadow '*STRAIGHT* (find-package "DRIVE_ROS_MSGS::ROADLANE"))
(defconstant drive_ros_msgs::RoadLane::*STRAIGHT* 1)
(intern "*STRAIGHT_CURVE*" (find-package "DRIVE_ROS_MSGS::ROADLANE"))
(shadow '*STRAIGHT_CURVE* (find-package "DRIVE_ROS_MSGS::ROADLANE"))
(defconstant drive_ros_msgs::RoadLane::*STRAIGHT_CURVE* 2)
(intern "*CURVE*" (find-package "DRIVE_ROS_MSGS::ROADLANE"))
(shadow '*CURVE* (find-package "DRIVE_ROS_MSGS::ROADLANE"))
(defconstant drive_ros_msgs::RoadLane::*CURVE* 3)
(defclass drive_ros_msgs::RoadLane
  :super ros::object
  :slots (_header _points _roadStateType ))

(defmethod drive_ros_msgs::RoadLane
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:points __points) (let (r) (dotimes (i 0) (push (instance geometry_msgs::PointStamped :init) r)) r))
    ((:roadStateType __roadStateType) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _points __points)
   (setq _roadStateType (round __roadStateType))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:points
   (&rest __points)
   (if (keywordp (car __points))
       (send* _points __points)
     (progn
       (if __points (setq _points (car __points)))
       _points)))
  (:roadStateType
   (&optional __roadStateType)
   (if __roadStateType (setq _roadStateType __roadStateType)) _roadStateType)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; geometry_msgs/PointStamped[] _points
    (apply #'+ (send-all _points :serialization-length)) 4
    ;; uint8 _roadStateType
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; geometry_msgs/PointStamped[] _points
     (write-long (length _points) s)
     (dolist (elem _points)
       (send elem :serialize s)
       )
     ;; uint8 _roadStateType
       (write-byte _roadStateType s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; geometry_msgs/PointStamped[] _points
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _points (let (r) (dotimes (i n) (push (instance geometry_msgs::PointStamped :init) r)) r))
     (dolist (elem- _points)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; uint8 _roadStateType
     (setq _roadStateType (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get drive_ros_msgs::RoadLane :md5sum-) "05cb982bf8b1f912f4a91cbf36ba54b0")
(setf (get drive_ros_msgs::RoadLane :datatype-) "drive_ros_msgs/RoadLane")
(setf (get drive_ros_msgs::RoadLane :definition-)
      "#Port of RoadLane from LMS:
Header header
# lane points
geometry_msgs/PointStamped[] points
# type of lane
uint8 UNKNOWN=0
uint8 STRAIGHT=1
uint8 STRAIGHT_CURVE=2
uint8 CURVE = 3
uint8 roadStateType

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

================================================================================
MSG: geometry_msgs/PointStamped
# This represents a Point with reference coordinate frame and timestamp
Header header
Point point

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

")



(provide :drive_ros_msgs/RoadLane "05cb982bf8b1f912f4a91cbf36ba54b0")


