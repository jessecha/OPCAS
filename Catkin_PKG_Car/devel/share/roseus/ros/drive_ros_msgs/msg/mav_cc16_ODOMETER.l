;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_ODOMETER)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_ODOMETER (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_ODOMETER")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_ODOMETER"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_ODOMETER.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_ODOMETER"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_ODOMETER"))
(defconstant drive_ros_msgs::mav_cc16_ODOMETER::*ID* 140)
(defclass drive_ros_msgs::mav_cc16_ODOMETER
  :super ros::object
  :slots (_header _sysid _compid _time_delta _dist_delta _dist_abs _velocity _quality ))

(defmethod drive_ros_msgs::mav_cc16_ODOMETER
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:time_delta __time_delta) 0.0)
    ((:dist_delta __dist_delta) (instance geometry_msgs::Vector3 :init))
    ((:dist_abs __dist_abs) (instance geometry_msgs::Vector3 :init))
    ((:velocity __velocity) (instance geometry_msgs::Vector3 :init))
    ((:quality __quality) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _time_delta (float __time_delta))
   (setq _dist_delta __dist_delta)
   (setq _dist_abs __dist_abs)
   (setq _velocity __velocity)
   (setq _quality (round __quality))
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
  (:time_delta
   (&optional __time_delta)
   (if __time_delta (setq _time_delta __time_delta)) _time_delta)
  (:dist_delta
   (&rest __dist_delta)
   (if (keywordp (car __dist_delta))
       (send* _dist_delta __dist_delta)
     (progn
       (if __dist_delta (setq _dist_delta (car __dist_delta)))
       _dist_delta)))
  (:dist_abs
   (&rest __dist_abs)
   (if (keywordp (car __dist_abs))
       (send* _dist_abs __dist_abs)
     (progn
       (if __dist_abs (setq _dist_abs (car __dist_abs)))
       _dist_abs)))
  (:velocity
   (&rest __velocity)
   (if (keywordp (car __velocity))
       (send* _velocity __velocity)
     (progn
       (if __velocity (setq _velocity (car __velocity)))
       _velocity)))
  (:quality
   (&optional __quality)
   (if __quality (setq _quality __quality)) _quality)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; float32 _time_delta
    4
    ;; geometry_msgs/Vector3 _dist_delta
    (send _dist_delta :serialization-length)
    ;; geometry_msgs/Vector3 _dist_abs
    (send _dist_abs :serialization-length)
    ;; geometry_msgs/Vector3 _velocity
    (send _velocity :serialization-length)
    ;; int16 _quality
    2
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
     ;; float32 _time_delta
       (sys::poke _time_delta (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; geometry_msgs/Vector3 _dist_delta
       (send _dist_delta :serialize s)
     ;; geometry_msgs/Vector3 _dist_abs
       (send _dist_abs :serialize s)
     ;; geometry_msgs/Vector3 _velocity
       (send _velocity :serialize s)
     ;; int16 _quality
       (write-word _quality s)
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
   ;; float32 _time_delta
     (setq _time_delta (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; geometry_msgs/Vector3 _dist_delta
     (send _dist_delta :deserialize buf ptr-) (incf ptr- (send _dist_delta :serialization-length))
   ;; geometry_msgs/Vector3 _dist_abs
     (send _dist_abs :deserialize buf ptr-) (incf ptr- (send _dist_abs :serialization-length))
   ;; geometry_msgs/Vector3 _velocity
     (send _velocity :deserialize buf ptr-) (incf ptr- (send _velocity :serialization-length))
   ;; int16 _quality
     (setq _quality (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_ODOMETER :md5sum-) "6cebc1146cffb91bedfc5ca00d013869")
(setf (get drive_ros_msgs::mav_cc16_ODOMETER :datatype-) "drive_ros_msgs/mav_cc16_ODOMETER")
(setf (get drive_ros_msgs::mav_cc16_ODOMETER :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.452972
# MESSAGE: ODOMETER
# Description:Measurement of Odometry Sensor
Header header

uint8 ID = 140
uint8 sysid
uint8 compid

float32 time_delta                  # Time-delta within which the measurement has taken place [s]
geometry_msgs/Vector3 dist_delta    # Distance travelled within period [m]
geometry_msgs/Vector3 dist_abs      # Distance travelled [m]
geometry_msgs/Vector3 velocity      # Velocity [m/s]
int16 quality                       # Measurement quality indicator (-1 for no quality)

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
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :drive_ros_msgs/mav_cc16_ODOMETER "6cebc1146cffb91bedfc5ca00d013869")


