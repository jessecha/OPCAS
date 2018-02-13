; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude EncoderLinear.msg.html

(cl:defclass <EncoderLinear> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (pos_abs
    :reader pos_abs
    :initarg :pos_abs
    :type cl:float
    :initform 0.0)
   (pos_abs_var
    :reader pos_abs_var
    :initarg :pos_abs_var
    :type cl:float
    :initform 0.0)
   (pos_rel
    :reader pos_rel
    :initarg :pos_rel
    :type cl:float
    :initform 0.0)
   (pos_rel_var
    :reader pos_rel_var
    :initarg :pos_rel_var
    :type cl:float
    :initform 0.0)
   (vel
    :reader vel
    :initarg :vel
    :type cl:float
    :initform 0.0)
   (vel_var
    :reader vel_var
    :initarg :vel_var
    :type cl:float
    :initform 0.0))
)

(cl:defclass EncoderLinear (<EncoderLinear>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EncoderLinear>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EncoderLinear)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<EncoderLinear> is deprecated: use drive_ros_msgs-msg:EncoderLinear instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <EncoderLinear>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:header-val is deprecated.  Use drive_ros_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'pos_abs-val :lambda-list '(m))
(cl:defmethod pos_abs-val ((m <EncoderLinear>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:pos_abs-val is deprecated.  Use drive_ros_msgs-msg:pos_abs instead.")
  (pos_abs m))

(cl:ensure-generic-function 'pos_abs_var-val :lambda-list '(m))
(cl:defmethod pos_abs_var-val ((m <EncoderLinear>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:pos_abs_var-val is deprecated.  Use drive_ros_msgs-msg:pos_abs_var instead.")
  (pos_abs_var m))

(cl:ensure-generic-function 'pos_rel-val :lambda-list '(m))
(cl:defmethod pos_rel-val ((m <EncoderLinear>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:pos_rel-val is deprecated.  Use drive_ros_msgs-msg:pos_rel instead.")
  (pos_rel m))

(cl:ensure-generic-function 'pos_rel_var-val :lambda-list '(m))
(cl:defmethod pos_rel_var-val ((m <EncoderLinear>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:pos_rel_var-val is deprecated.  Use drive_ros_msgs-msg:pos_rel_var instead.")
  (pos_rel_var m))

(cl:ensure-generic-function 'vel-val :lambda-list '(m))
(cl:defmethod vel-val ((m <EncoderLinear>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:vel-val is deprecated.  Use drive_ros_msgs-msg:vel instead.")
  (vel m))

(cl:ensure-generic-function 'vel_var-val :lambda-list '(m))
(cl:defmethod vel_var-val ((m <EncoderLinear>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:vel_var-val is deprecated.  Use drive_ros_msgs-msg:vel_var instead.")
  (vel_var m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EncoderLinear>) ostream)
  "Serializes a message object of type '<EncoderLinear>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pos_abs))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pos_abs_var))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pos_rel))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pos_rel_var))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'vel))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'vel_var))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EncoderLinear>) istream)
  "Deserializes a message object of type '<EncoderLinear>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pos_abs) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pos_abs_var) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pos_rel) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pos_rel_var) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'vel) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'vel_var) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EncoderLinear>)))
  "Returns string type for a message object of type '<EncoderLinear>"
  "drive_ros_msgs/EncoderLinear")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EncoderLinear)))
  "Returns string type for a message object of type 'EncoderLinear"
  "drive_ros_msgs/EncoderLinear")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EncoderLinear>)))
  "Returns md5sum for a message object of type '<EncoderLinear>"
  "c78bee85271f30efdc5b5221778b0109")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EncoderLinear)))
  "Returns md5sum for a message object of type 'EncoderLinear"
  "c78bee85271f30efdc5b5221778b0109")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EncoderLinear>)))
  "Returns full string definition for message of type '<EncoderLinear>"
  (cl:format cl:nil "# linear encoder message~%Header header~%~%# absolut position of encoder in [m]~%float32 pos_abs~%float32 pos_abs_var~%~%# relative position of encoder in [m] compared to last message~%float32 pos_rel~%float32 pos_rel_var~%~%# velocity of encoder in [m/s]~%float32 vel~%float32 vel_var~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EncoderLinear)))
  "Returns full string definition for message of type 'EncoderLinear"
  (cl:format cl:nil "# linear encoder message~%Header header~%~%# absolut position of encoder in [m]~%float32 pos_abs~%float32 pos_abs_var~%~%# relative position of encoder in [m] compared to last message~%float32 pos_rel~%float32 pos_rel_var~%~%# velocity of encoder in [m/s]~%float32 vel~%float32 vel_var~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EncoderLinear>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EncoderLinear>))
  "Converts a ROS message object to a list"
  (cl:list 'EncoderLinear
    (cl:cons ':header (header msg))
    (cl:cons ':pos_abs (pos_abs msg))
    (cl:cons ':pos_abs_var (pos_abs_var msg))
    (cl:cons ':pos_rel (pos_rel msg))
    (cl:cons ':pos_rel_var (pos_rel_var msg))
    (cl:cons ':vel (vel msg))
    (cl:cons ':vel_var (vel_var msg))
))
