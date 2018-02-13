;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::Obstacle)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'Obstacle (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::OBSTACLE")
  (make-package "DRIVE_ROS_MSGS::OBSTACLE"))

(in-package "ROS")
;;//! \htmlinclude Obstacle.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*TYPE_GENERIC*" (find-package "DRIVE_ROS_MSGS::OBSTACLE"))
(shadow '*TYPE_GENERIC* (find-package "DRIVE_ROS_MSGS::OBSTACLE"))
(defconstant drive_ros_msgs::Obstacle::*TYPE_GENERIC* 0)
(intern "*TYPE_CAMERA*" (find-package "DRIVE_ROS_MSGS::OBSTACLE"))
(shadow '*TYPE_CAMERA* (find-package "DRIVE_ROS_MSGS::OBSTACLE"))
(defconstant drive_ros_msgs::Obstacle::*TYPE_CAMERA* 1)
(intern "*TYPE_LIDAR*" (find-package "DRIVE_ROS_MSGS::OBSTACLE"))
(shadow '*TYPE_LIDAR* (find-package "DRIVE_ROS_MSGS::OBSTACLE"))
(defconstant drive_ros_msgs::Obstacle::*TYPE_LIDAR* 2)
(defclass drive_ros_msgs::Obstacle
  :super ros::object
  :slots (_header _obstacle_type _polygon _width _trust ))

(defmethod drive_ros_msgs::Obstacle
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:obstacle_type __obstacle_type) 0)
    ((:polygon __polygon) (instance geometry_msgs::Polygon :init))
    ((:width __width) 0.0)
    ((:trust __trust) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _obstacle_type (round __obstacle_type))
   (setq _polygon __polygon)
   (setq _width (float __width))
   (setq _trust (float __trust))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:obstacle_type
   (&optional __obstacle_type)
   (if __obstacle_type (setq _obstacle_type __obstacle_type)) _obstacle_type)
  (:polygon
   (&rest __polygon)
   (if (keywordp (car __polygon))
       (send* _polygon __polygon)
     (progn
       (if __polygon (setq _polygon (car __polygon)))
       _polygon)))
  (:width
   (&optional __width)
   (if __width (setq _width __width)) _width)
  (:trust
   (&optional __trust)
   (if __trust (setq _trust __trust)) _trust)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _obstacle_type
    1
    ;; geometry_msgs/Polygon _polygon
    (send _polygon :serialization-length)
    ;; float32 _width
    4
    ;; float32 _trust
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _obstacle_type
       (write-byte _obstacle_type s)
     ;; geometry_msgs/Polygon _polygon
       (send _polygon :serialize s)
     ;; float32 _width
       (sys::poke _width (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _trust
       (sys::poke _trust (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _obstacle_type
     (setq _obstacle_type (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; geometry_msgs/Polygon _polygon
     (send _polygon :deserialize buf ptr-) (incf ptr- (send _polygon :serialization-length))
   ;; float32 _width
     (setq _width (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _trust
     (setq _trust (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get drive_ros_msgs::Obstacle :md5sum-) "54fd7294dc0ef4063e3d924c0d95b221")
(setf (get drive_ros_msgs::Obstacle :datatype-) "drive_ros_msgs/Obstacle")
(setf (get drive_ros_msgs::Obstacle :definition-)
      "Header header
# possible obstacle types
uint8 TYPE_GENERIC = 0
uint8 TYPE_CAMERA = 1
uint8 TYPE_LIDAR = 2
uint8 obstacle_type
geometry_msgs/Polygon polygon
float32 width
float32 trust

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
MSG: geometry_msgs/Polygon
#A specification of a polygon where the first and last points are assumed to be connected
Point32[] points

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z
")



(provide :drive_ros_msgs/Obstacle "54fd7294dc0ef4063e3d924c0d95b221")


