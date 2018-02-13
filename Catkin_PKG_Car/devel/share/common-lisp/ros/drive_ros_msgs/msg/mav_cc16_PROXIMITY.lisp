; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_PROXIMITY.msg.html

(cl:defclass <mav_cc16_PROXIMITY> (roslisp-msg-protocol:ros-message)
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
   (distance
    :reader distance
    :initarg :distance
    :type cl:float
    :initform 0.0))
)

(cl:defclass mav_cc16_PROXIMITY (<mav_cc16_PROXIMITY>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_PROXIMITY>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_PROXIMITY)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_PROXIMITY> is deprecated: use drive_ros_msgs-msg:mav_cc16_PROXIMITY instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <mav_cc16_PROXIMITY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:header-val is deprecated.  Use drive_ros_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_PROXIMITY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_PROXIMITY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'distance-val :lambda-list '(m))
(cl:defmethod distance-val ((m <mav_cc16_PROXIMITY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:distance-val is deprecated.  Use drive_ros_msgs-msg:distance instead.")
  (distance m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_PROXIMITY>)))
    "Constants for message type '<mav_cc16_PROXIMITY>"
  '((:ID . 144))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_PROXIMITY)))
    "Constants for message type 'mav_cc16_PROXIMITY"
  '((:ID . 144))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_PROXIMITY>) ostream)
  "Serializes a message object of type '<mav_cc16_PROXIMITY>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'distance))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_PROXIMITY>) istream)
  "Deserializes a message object of type '<mav_cc16_PROXIMITY>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'distance) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_PROXIMITY>)))
  "Returns string type for a message object of type '<mav_cc16_PROXIMITY>"
  "drive_ros_msgs/mav_cc16_PROXIMITY")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_PROXIMITY)))
  "Returns string type for a message object of type 'mav_cc16_PROXIMITY"
  "drive_ros_msgs/mav_cc16_PROXIMITY")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_PROXIMITY>)))
  "Returns md5sum for a message object of type '<mav_cc16_PROXIMITY>"
  "8afc510032fe1f0ab6776b034700382e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_PROXIMITY)))
  "Returns md5sum for a message object of type 'mav_cc16_PROXIMITY"
  "8afc510032fe1f0ab6776b034700382e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_PROXIMITY>)))
  "Returns full string definition for message of type '<mav_cc16_PROXIMITY>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453002~%# MESSAGE: PROXIMITY~%# Description:Measurement of Proximity/Distance Sensor~%Header header~%~%uint8 ID = 144~%uint8 sysid~%uint8 compid~%~%float32 distance    # Distance to obstacle [m]~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_PROXIMITY)))
  "Returns full string definition for message of type 'mav_cc16_PROXIMITY"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453002~%# MESSAGE: PROXIMITY~%# Description:Measurement of Proximity/Distance Sensor~%Header header~%~%uint8 ID = 144~%uint8 sysid~%uint8 compid~%~%float32 distance    # Distance to obstacle [m]~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_PROXIMITY>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_PROXIMITY>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_PROXIMITY
    (cl:cons ':header (header msg))
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':distance (distance msg))
))
