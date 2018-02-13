;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::RoadLine)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'RoadLine (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::ROADLINE")
  (make-package "DRIVE_ROS_MSGS::ROADLINE"))

(in-package "ROS")
;;//! \htmlinclude RoadLine.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(intern "*UNKNOWN*" (find-package "DRIVE_ROS_MSGS::ROADLINE"))
(shadow '*UNKNOWN* (find-package "DRIVE_ROS_MSGS::ROADLINE"))
(defconstant drive_ros_msgs::RoadLine::*UNKNOWN* 0)
(intern "*LEFT*" (find-package "DRIVE_ROS_MSGS::ROADLINE"))
(shadow '*LEFT* (find-package "DRIVE_ROS_MSGS::ROADLINE"))
(defconstant drive_ros_msgs::RoadLine::*LEFT* 1)
(intern "*MIDDLE*" (find-package "DRIVE_ROS_MSGS::ROADLINE"))
(shadow '*MIDDLE* (find-package "DRIVE_ROS_MSGS::ROADLINE"))
(defconstant drive_ros_msgs::RoadLine::*MIDDLE* 2)
(intern "*RIGHT*" (find-package "DRIVE_ROS_MSGS::ROADLINE"))
(shadow '*RIGHT* (find-package "DRIVE_ROS_MSGS::ROADLINE"))
(defconstant drive_ros_msgs::RoadLine::*RIGHT* 3)
(defclass drive_ros_msgs::RoadLine
  :super ros::object
  :slots (_points _lineType ))

(defmethod drive_ros_msgs::RoadLine
  (:init
   (&key
    ((:points __points) (let (r) (dotimes (i 0) (push (instance geometry_msgs::PointStamped :init) r)) r))
    ((:lineType __lineType) 0)
    )
   (send-super :init)
   (setq _points __points)
   (setq _lineType (round __lineType))
   self)
  (:points
   (&rest __points)
   (if (keywordp (car __points))
       (send* _points __points)
     (progn
       (if __points (setq _points (car __points)))
       _points)))
  (:lineType
   (&optional __lineType)
   (if __lineType (setq _lineType __lineType)) _lineType)
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/PointStamped[] _points
    (apply #'+ (send-all _points :serialization-length)) 4
    ;; uint8 _lineType
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/PointStamped[] _points
     (write-long (length _points) s)
     (dolist (elem _points)
       (send elem :serialize s)
       )
     ;; uint8 _lineType
       (write-byte _lineType s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/PointStamped[] _points
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _points (let (r) (dotimes (i n) (push (instance geometry_msgs::PointStamped :init) r)) r))
     (dolist (elem- _points)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; uint8 _lineType
     (setq _lineType (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get drive_ros_msgs::RoadLine :md5sum-) "372f68ca7096e5f6db8beda284620015")
(setf (get drive_ros_msgs::RoadLine :datatype-) "drive_ros_msgs/RoadLine")
(setf (get drive_ros_msgs::RoadLine :definition-)
      "# line points
geometry_msgs/PointStamped[] points

# type of line
uint8 UNKNOWN=0
uint8 LEFT=1
uint8 MIDDLE=2
uint8 RIGHT = 3

uint8 lineType

================================================================================
MSG: geometry_msgs/PointStamped
# This represents a Point with reference coordinate frame and timestamp
Header header
Point point

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
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

")



(provide :drive_ros_msgs/RoadLine "372f68ca7096e5f6db8beda284620015")


