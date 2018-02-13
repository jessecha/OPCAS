; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_IMU.msg.html

(cl:defclass <mav_cc16_IMU> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (sysid
    :reader sysid
    :initarg :sysid
    :type cl:fixnum
    :initform 0)
   (compid
    :reader compid
    :initarg :compid
    :type cl:fixnum
    :initform 0)
   (acc
    :reader acc
    :initarg :acc
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (gyro
    :reader gyro
    :initarg :gyro
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (mag
    :reader mag
    :initarg :mag
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3)))
)

(cl:defclass mav_cc16_IMU (<mav_cc16_IMU>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_IMU>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_IMU)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_IMU> is deprecated: use drive_ros_msgs-msg:mav_cc16_IMU instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <mav_cc16_IMU>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:header-val is deprecated.  Use drive_ros_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_IMU>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_IMU>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'acc-val :lambda-list '(m))
(cl:defmethod acc-val ((m <mav_cc16_IMU>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:acc-val is deprecated.  Use drive_ros_msgs-msg:acc instead.")
  (acc m))

(cl:ensure-generic-function 'gyro-val :lambda-list '(m))
(cl:defmethod gyro-val ((m <mav_cc16_IMU>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:gyro-val is deprecated.  Use drive_ros_msgs-msg:gyro instead.")
  (gyro m))

(cl:ensure-generic-function 'mag-val :lambda-list '(m))
(cl:defmethod mag-val ((m <mav_cc16_IMU>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:mag-val is deprecated.  Use drive_ros_msgs-msg:mag instead.")
  (mag m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_IMU>)))
    "Constants for message type '<mav_cc16_IMU>"
  '((:ID . 128))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_IMU)))
    "Constants for message type 'mav_cc16_IMU"
  '((:ID . 128))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_IMU>) ostream)
  "Serializes a message object of type '<mav_cc16_IMU>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'acc) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'gyro) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'mag) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_IMU>) istream)
  "Deserializes a message object of type '<mav_cc16_IMU>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'acc) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'gyro) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'mag) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_IMU>)))
  "Returns string type for a message object of type '<mav_cc16_IMU>"
  "drive_ros_msgs/mav_cc16_IMU")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_IMU)))
  "Returns string type for a message object of type 'mav_cc16_IMU"
  "drive_ros_msgs/mav_cc16_IMU")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_IMU>)))
  "Returns md5sum for a message object of type '<mav_cc16_IMU>"
  "ea5bbf17106eb0f69246a582d49f7ab1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_IMU)))
  "Returns md5sum for a message object of type 'mav_cc16_IMU"
  "ea5bbf17106eb0f69246a582d49f7ab1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_IMU>)))
  "Returns full string definition for message of type '<mav_cc16_IMU>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452851~%# MESSAGE: IMU~%# Description: Measurement of 9DOF Inertial Measurement Unit (IMU)~%Header header~%~%uint8 ID = 128~%uint8 sysid~%uint8 compid~%~%geometry_msgs/Vector3 acc       # Linear acceleration [g]~%geometry_msgs/Vector3 gyro      # Angular velocity [rad/s]~%geometry_msgs/Vector3 mag       # Magnetic field strength [T]~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_IMU)))
  "Returns full string definition for message of type 'mav_cc16_IMU"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452851~%# MESSAGE: IMU~%# Description: Measurement of 9DOF Inertial Measurement Unit (IMU)~%Header header~%~%uint8 ID = 128~%uint8 sysid~%uint8 compid~%~%geometry_msgs/Vector3 acc       # Linear acceleration [g]~%geometry_msgs/Vector3 gyro      # Angular velocity [rad/s]~%geometry_msgs/Vector3 mag       # Magnetic field strength [T]~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_IMU>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'acc))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'gyro))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'mag))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_IMU>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_IMU
    (cl:cons ':header (header msg))
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':acc (acc msg))
    (cl:cons ':gyro (gyro msg))
    (cl:cons ':mag (mag msg))
))
