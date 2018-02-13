;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::Homography)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'Homography (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::HOMOGRAPHY")
  (make-package "DRIVE_ROS_MSGS::HOMOGRAPHY"))

(in-package "ROS")
;;//! \htmlinclude Homography.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass drive_ros_msgs::Homography
  :super ros::object
  :slots (_world2cam _cam2world ))

(defmethod drive_ros_msgs::Homography
  (:init
   (&key
    ((:world2cam __world2cam) (instance std_msgs::Float64MultiArray :init))
    ((:cam2world __cam2world) (instance std_msgs::Float64MultiArray :init))
    )
   (send-super :init)
   (setq _world2cam __world2cam)
   (setq _cam2world __cam2world)
   self)
  (:world2cam
   (&rest __world2cam)
   (if (keywordp (car __world2cam))
       (send* _world2cam __world2cam)
     (progn
       (if __world2cam (setq _world2cam (car __world2cam)))
       _world2cam)))
  (:cam2world
   (&rest __cam2world)
   (if (keywordp (car __cam2world))
       (send* _cam2world __cam2world)
     (progn
       (if __cam2world (setq _cam2world (car __cam2world)))
       _cam2world)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Float64MultiArray _world2cam
    (send _world2cam :serialization-length)
    ;; std_msgs/Float64MultiArray _cam2world
    (send _cam2world :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Float64MultiArray _world2cam
       (send _world2cam :serialize s)
     ;; std_msgs/Float64MultiArray _cam2world
       (send _cam2world :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Float64MultiArray _world2cam
     (send _world2cam :deserialize buf ptr-) (incf ptr- (send _world2cam :serialization-length))
   ;; std_msgs/Float64MultiArray _cam2world
     (send _cam2world :deserialize buf ptr-) (incf ptr- (send _cam2world :serialization-length))
   ;;
   self)
  )

(setf (get drive_ros_msgs::Homography :md5sum-) "b0a59e30c90c7be9d3ae607a62c4b1a6")
(setf (get drive_ros_msgs::Homography :datatype-) "drive_ros_msgs/Homography")
(setf (get drive_ros_msgs::Homography :definition-)
      "std_msgs/Float64MultiArray world2cam
std_msgs/Float64MultiArray cam2world

================================================================================
MSG: std_msgs/Float64MultiArray
# Please look at the MultiArrayLayout message definition for
# documentation on all multiarrays.

MultiArrayLayout  layout        # specification of data layout
float64[]         data          # array of data


================================================================================
MSG: std_msgs/MultiArrayLayout
# The multiarray declares a generic multi-dimensional array of a
# particular data type.  Dimensions are ordered from outer most
# to inner most.

MultiArrayDimension[] dim # Array of dimension properties
uint32 data_offset        # padding elements at front of data

# Accessors should ALWAYS be written in terms of dimension stride
# and specified outer-most dimension first.
# 
# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]
#
# A standard, 3-channel 640x480 image with interleaved color channels
# would be specified as:
#
# dim[0].label  = \"height\"
# dim[0].size   = 480
# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)
# dim[1].label  = \"width\"
# dim[1].size   = 640
# dim[1].stride = 3*640 = 1920
# dim[2].label  = \"channel\"
# dim[2].size   = 3
# dim[2].stride = 3
#
# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.

================================================================================
MSG: std_msgs/MultiArrayDimension
string label   # label of given dimension
uint32 size    # size of given dimension (in type units)
uint32 stride  # stride of given dimension
")



(provide :drive_ros_msgs/Homography "b0a59e30c90c7be9d3ae607a62c4b1a6")


