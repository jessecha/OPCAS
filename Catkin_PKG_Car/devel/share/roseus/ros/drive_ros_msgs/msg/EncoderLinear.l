;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::EncoderLinear)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'EncoderLinear (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::ENCODERLINEAR")
  (make-package "DRIVE_ROS_MSGS::ENCODERLINEAR"))

(in-package "ROS")
;;//! \htmlinclude EncoderLinear.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass drive_ros_msgs::EncoderLinear
  :super ros::object
  :slots (_header _pos_abs _pos_abs_var _pos_rel _pos_rel_var _vel _vel_var ))

(defmethod drive_ros_msgs::EncoderLinear
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:pos_abs __pos_abs) 0.0)
    ((:pos_abs_var __pos_abs_var) 0.0)
    ((:pos_rel __pos_rel) 0.0)
    ((:pos_rel_var __pos_rel_var) 0.0)
    ((:vel __vel) 0.0)
    ((:vel_var __vel_var) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _pos_abs (float __pos_abs))
   (setq _pos_abs_var (float __pos_abs_var))
   (setq _pos_rel (float __pos_rel))
   (setq _pos_rel_var (float __pos_rel_var))
   (setq _vel (float __vel))
   (setq _vel_var (float __vel_var))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:pos_abs
   (&optional __pos_abs)
   (if __pos_abs (setq _pos_abs __pos_abs)) _pos_abs)
  (:pos_abs_var
   (&optional __pos_abs_var)
   (if __pos_abs_var (setq _pos_abs_var __pos_abs_var)) _pos_abs_var)
  (:pos_rel
   (&optional __pos_rel)
   (if __pos_rel (setq _pos_rel __pos_rel)) _pos_rel)
  (:pos_rel_var
   (&optional __pos_rel_var)
   (if __pos_rel_var (setq _pos_rel_var __pos_rel_var)) _pos_rel_var)
  (:vel
   (&optional __vel)
   (if __vel (setq _vel __vel)) _vel)
  (:vel_var
   (&optional __vel_var)
   (if __vel_var (setq _vel_var __vel_var)) _vel_var)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _pos_abs
    4
    ;; float32 _pos_abs_var
    4
    ;; float32 _pos_rel
    4
    ;; float32 _pos_rel_var
    4
    ;; float32 _vel
    4
    ;; float32 _vel_var
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _pos_abs
       (sys::poke _pos_abs (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _pos_abs_var
       (sys::poke _pos_abs_var (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _pos_rel
       (sys::poke _pos_rel (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _pos_rel_var
       (sys::poke _pos_rel_var (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _vel
       (sys::poke _vel (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _vel_var
       (sys::poke _vel_var (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _pos_abs
     (setq _pos_abs (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _pos_abs_var
     (setq _pos_abs_var (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _pos_rel
     (setq _pos_rel (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _pos_rel_var
     (setq _pos_rel_var (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _vel
     (setq _vel (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _vel_var
     (setq _vel_var (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get drive_ros_msgs::EncoderLinear :md5sum-) "c78bee85271f30efdc5b5221778b0109")
(setf (get drive_ros_msgs::EncoderLinear :datatype-) "drive_ros_msgs/EncoderLinear")
(setf (get drive_ros_msgs::EncoderLinear :definition-)
      "# linear encoder message
Header header

# absolut position of encoder in [m]
float32 pos_abs
float32 pos_abs_var

# relative position of encoder in [m] compared to last message
float32 pos_rel
float32 pos_rel_var

# velocity of encoder in [m/s]
float32 vel
float32 vel_var

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



(provide :drive_ros_msgs/EncoderLinear "c78bee85271f30efdc5b5221778b0109")


