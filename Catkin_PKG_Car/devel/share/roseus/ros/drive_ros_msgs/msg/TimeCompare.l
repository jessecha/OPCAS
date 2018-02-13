;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::TimeCompare)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'TimeCompare (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::TIMECOMPARE")
  (make-package "DRIVE_ROS_MSGS::TIMECOMPARE"))

(in-package "ROS")
;;//! \htmlinclude TimeCompare.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass drive_ros_msgs::TimeCompare
  :super ros::object
  :slots (_header _time_1 _time_2 _diff_time ))

(defmethod drive_ros_msgs::TimeCompare
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:time_1 __time_1) (instance ros::time :init))
    ((:time_2 __time_2) (instance ros::time :init))
    ((:diff_time __diff_time) (instance ros::time :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _time_1 __time_1)
   (setq _time_2 __time_2)
   (setq _diff_time __diff_time)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:time_1
   (&optional __time_1)
   (if __time_1 (setq _time_1 __time_1)) _time_1)
  (:time_2
   (&optional __time_2)
   (if __time_2 (setq _time_2 __time_2)) _time_2)
  (:diff_time
   (&optional __diff_time)
   (if __diff_time (setq _diff_time __diff_time)) _diff_time)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; time _time_1
    8
    ;; time _time_2
    8
    ;; duration _diff_time
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; time _time_1
       (write-long (send _time_1 :sec) s) (write-long (send _time_1 :nsec) s)
     ;; time _time_2
       (write-long (send _time_2 :sec) s) (write-long (send _time_2 :nsec) s)
     ;; duration _diff_time
       (write-long (send _diff_time :sec) s) (write-long (send _diff_time :nsec) s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; time _time_1
     (send _time_1 :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _time_1 :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; time _time_2
     (send _time_2 :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _time_2 :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; duration _diff_time
     (send _diff_time :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _diff_time :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get drive_ros_msgs::TimeCompare :md5sum-) "dc58cdcc02bacea924ddf264cf2cf618")
(setf (get drive_ros_msgs::TimeCompare :datatype-) "drive_ros_msgs/TimeCompare")
(setf (get drive_ros_msgs::TimeCompare :definition-)
      "# Debug Message
Header header

time time_1
time time_2
duration diff_time

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



(provide :drive_ros_msgs/TimeCompare "dc58cdcc02bacea924ddf264cf2cf618")


