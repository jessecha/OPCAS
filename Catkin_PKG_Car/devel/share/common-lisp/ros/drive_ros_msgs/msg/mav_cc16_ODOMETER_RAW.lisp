; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_ODOMETER_RAW.msg.html

(cl:defclass <mav_cc16_ODOMETER_RAW> (roslisp-msg-protocol:ros-message)
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
   (dist
    :reader dist
    :initarg :dist
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (quality
    :reader quality
    :initarg :quality
    :type cl:fixnum
    :initform 0))
)

(cl:defclass mav_cc16_ODOMETER_RAW (<mav_cc16_ODOMETER_RAW>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_ODOMETER_RAW>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_ODOMETER_RAW)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_ODOMETER_RAW> is deprecated: use drive_ros_msgs-msg:mav_cc16_ODOMETER_RAW instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <mav_cc16_ODOMETER_RAW>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:header-val is deprecated.  Use drive_ros_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_ODOMETER_RAW>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_ODOMETER_RAW>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'dist-val :lambda-list '(m))
(cl:defmethod dist-val ((m <mav_cc16_ODOMETER_RAW>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:dist-val is deprecated.  Use drive_ros_msgs-msg:dist instead.")
  (dist m))

(cl:ensure-generic-function 'quality-val :lambda-list '(m))
(cl:defmethod quality-val ((m <mav_cc16_ODOMETER_RAW>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:quality-val is deprecated.  Use drive_ros_msgs-msg:quality instead.")
  (quality m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_ODOMETER_RAW>)))
    "Constants for message type '<mav_cc16_ODOMETER_RAW>"
  '((:ID . 137))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_ODOMETER_RAW)))
    "Constants for message type 'mav_cc16_ODOMETER_RAW"
  '((:ID . 137))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_ODOMETER_RAW>) ostream)
  "Serializes a message object of type '<mav_cc16_ODOMETER_RAW>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'dist) ostream)
  (cl:let* ((signed (cl:slot-value msg 'quality)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_ODOMETER_RAW>) istream)
  "Deserializes a message object of type '<mav_cc16_ODOMETER_RAW>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'dist) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'quality) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_ODOMETER_RAW>)))
  "Returns string type for a message object of type '<mav_cc16_ODOMETER_RAW>"
  "drive_ros_msgs/mav_cc16_ODOMETER_RAW")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_ODOMETER_RAW)))
  "Returns string type for a message object of type 'mav_cc16_ODOMETER_RAW"
  "drive_ros_msgs/mav_cc16_ODOMETER_RAW")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_ODOMETER_RAW>)))
  "Returns md5sum for a message object of type '<mav_cc16_ODOMETER_RAW>"
  "1bff3b0fa11439adfae39ba20bfc1e18")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_ODOMETER_RAW)))
  "Returns md5sum for a message object of type 'mav_cc16_ODOMETER_RAW"
  "1bff3b0fa11439adfae39ba20bfc1e18")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_ODOMETER_RAW>)))
  "Returns full string definition for message of type '<mav_cc16_ODOMETER_RAW>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452899~%# MESSAGE: ODOMETER_RAW~%# Description:Measurement of Odometry Sensor (raw ticks)~%Header header~%~%uint8 ID = 137~%uint8 sysid~%uint8 compid~%~%geometry_msgs/Vector3 dist   # Distance travelled [ticks]~%int16 quality                # Measurement quality indicator (-1 for no quality)~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_ODOMETER_RAW)))
  "Returns full string definition for message of type 'mav_cc16_ODOMETER_RAW"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452899~%# MESSAGE: ODOMETER_RAW~%# Description:Measurement of Odometry Sensor (raw ticks)~%Header header~%~%uint8 ID = 137~%uint8 sysid~%uint8 compid~%~%geometry_msgs/Vector3 dist   # Distance travelled [ticks]~%int16 quality                # Measurement quality indicator (-1 for no quality)~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_ODOMETER_RAW>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'dist))
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_ODOMETER_RAW>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_ODOMETER_RAW
    (cl:cons ':header (header msg))
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':dist (dist msg))
    (cl:cons ':quality (quality msg))
))
