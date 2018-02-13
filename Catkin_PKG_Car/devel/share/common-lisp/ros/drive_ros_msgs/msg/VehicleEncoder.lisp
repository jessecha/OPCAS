; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude VehicleEncoder.msg.html

(cl:defclass <VehicleEncoder> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (encoder
    :reader encoder
    :initarg :encoder
    :type (cl:vector drive_ros_msgs-msg:EncoderLinear)
   :initform (cl:make-array 4 :element-type 'drive_ros_msgs-msg:EncoderLinear :initial-element (cl:make-instance 'drive_ros_msgs-msg:EncoderLinear))))
)

(cl:defclass VehicleEncoder (<VehicleEncoder>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VehicleEncoder>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VehicleEncoder)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<VehicleEncoder> is deprecated: use drive_ros_msgs-msg:VehicleEncoder instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <VehicleEncoder>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:header-val is deprecated.  Use drive_ros_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'encoder-val :lambda-list '(m))
(cl:defmethod encoder-val ((m <VehicleEncoder>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:encoder-val is deprecated.  Use drive_ros_msgs-msg:encoder instead.")
  (encoder m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<VehicleEncoder>)))
    "Constants for message type '<VehicleEncoder>"
  '((:MOTOR . 0)
    (:FRONT_WHEEL_LEFT . 0)
    (:FRONT_WHEEL_RIGHT . 1)
    (:REAR_WHEEL_LEFT . 2)
    (:REAR_WHEEL_RIGHT . 3))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'VehicleEncoder)))
    "Constants for message type 'VehicleEncoder"
  '((:MOTOR . 0)
    (:FRONT_WHEEL_LEFT . 0)
    (:FRONT_WHEEL_RIGHT . 1)
    (:REAR_WHEEL_LEFT . 2)
    (:REAR_WHEEL_RIGHT . 3))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VehicleEncoder>) ostream)
  "Serializes a message object of type '<VehicleEncoder>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'encoder))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VehicleEncoder>) istream)
  "Deserializes a message object of type '<VehicleEncoder>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:setf (cl:slot-value msg 'encoder) (cl:make-array 4))
  (cl:let ((vals (cl:slot-value msg 'encoder)))
    (cl:dotimes (i 4)
    (cl:setf (cl:aref vals i) (cl:make-instance 'drive_ros_msgs-msg:EncoderLinear))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VehicleEncoder>)))
  "Returns string type for a message object of type '<VehicleEncoder>"
  "drive_ros_msgs/VehicleEncoder")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VehicleEncoder)))
  "Returns string type for a message object of type 'VehicleEncoder"
  "drive_ros_msgs/VehicleEncoder")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VehicleEncoder>)))
  "Returns md5sum for a message object of type '<VehicleEncoder>"
  "a9cb468b8c6666bc24bad1a31a5a51a0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VehicleEncoder)))
  "Returns md5sum for a message object of type 'VehicleEncoder"
  "a9cb468b8c6666bc24bad1a31a5a51a0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VehicleEncoder>)))
  "Returns full string definition for message of type '<VehicleEncoder>"
  (cl:format cl:nil "Header header~%~%# array of encoders~%EncoderLinear[4] encoder~%~%# only one motor encoder~%uint8 MOTOR=0~%~%# 4 wheel encoders~%uint8 FRONT_WHEEL_LEFT=0~%uint8 FRONT_WHEEL_RIGHT=1~%uint8 REAR_WHEEL_LEFT=2~%uint8 REAR_WHEEL_RIGHT=3~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: drive_ros_msgs/EncoderLinear~%# linear encoder message~%Header header~%~%# absolut position of encoder in [m]~%float32 pos_abs~%float32 pos_abs_var~%~%# relative position of encoder in [m] compared to last message~%float32 pos_rel~%float32 pos_rel_var~%~%# velocity of encoder in [m/s]~%float32 vel~%float32 vel_var~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VehicleEncoder)))
  "Returns full string definition for message of type 'VehicleEncoder"
  (cl:format cl:nil "Header header~%~%# array of encoders~%EncoderLinear[4] encoder~%~%# only one motor encoder~%uint8 MOTOR=0~%~%# 4 wheel encoders~%uint8 FRONT_WHEEL_LEFT=0~%uint8 FRONT_WHEEL_RIGHT=1~%uint8 REAR_WHEEL_LEFT=2~%uint8 REAR_WHEEL_RIGHT=3~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: drive_ros_msgs/EncoderLinear~%# linear encoder message~%Header header~%~%# absolut position of encoder in [m]~%float32 pos_abs~%float32 pos_abs_var~%~%# relative position of encoder in [m] compared to last message~%float32 pos_rel~%float32 pos_rel_var~%~%# velocity of encoder in [m/s]~%float32 vel~%float32 vel_var~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VehicleEncoder>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'encoder) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VehicleEncoder>))
  "Converts a ROS message object to a list"
  (cl:list 'VehicleEncoder
    (cl:cons ':header (header msg))
    (cl:cons ':encoder (encoder msg))
))
