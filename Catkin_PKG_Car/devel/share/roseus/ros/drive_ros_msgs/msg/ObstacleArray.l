;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::ObstacleArray)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'ObstacleArray (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::OBSTACLEARRAY")
  (make-package "DRIVE_ROS_MSGS::OBSTACLEARRAY"))

(in-package "ROS")
;;//! \htmlinclude ObstacleArray.msg.html


(defclass drive_ros_msgs::ObstacleArray
  :super ros::object
  :slots (_obstacles ))

(defmethod drive_ros_msgs::ObstacleArray
  (:init
   (&key
    ((:obstacles __obstacles) (let (r) (dotimes (i 0) (push (instance drive_ros_msgs::Obstacle :init) r)) r))
    )
   (send-super :init)
   (setq _obstacles __obstacles)
   self)
  (:obstacles
   (&rest __obstacles)
   (if (keywordp (car __obstacles))
       (send* _obstacles __obstacles)
     (progn
       (if __obstacles (setq _obstacles (car __obstacles)))
       _obstacles)))
  (:serialization-length
   ()
   (+
    ;; drive_ros_msgs/Obstacle[] _obstacles
    (apply #'+ (send-all _obstacles :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; drive_ros_msgs/Obstacle[] _obstacles
     (write-long (length _obstacles) s)
     (dolist (elem _obstacles)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; drive_ros_msgs/Obstacle[] _obstacles
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _obstacles (let (r) (dotimes (i n) (push (instance drive_ros_msgs::Obstacle :init) r)) r))
     (dolist (elem- _obstacles)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get drive_ros_msgs::ObstacleArray :md5sum-) "1bedd6a57408423b561d03b3446fbdd8")
(setf (get drive_ros_msgs::ObstacleArray :datatype-) "drive_ros_msgs/ObstacleArray")
(setf (get drive_ros_msgs::ObstacleArray :definition-)
      "drive_ros_msgs/Obstacle[] obstacles

================================================================================
MSG: drive_ros_msgs/Obstacle
Header header
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



(provide :drive_ros_msgs/ObstacleArray "1bedd6a57408423b561d03b3446fbdd8")


