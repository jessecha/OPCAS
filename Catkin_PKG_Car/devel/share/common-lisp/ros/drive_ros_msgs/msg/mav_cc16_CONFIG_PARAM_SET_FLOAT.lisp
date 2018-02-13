; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_CONFIG_PARAM_SET_FLOAT.msg.html

(cl:defclass <mav_cc16_CONFIG_PARAM_SET_FLOAT> (roslisp-msg-protocol:ros-message)
  ((sysid
    :reader sysid
    :initarg :sysid
    :type cl:fixnum
    :initform 0)
   (compid
    :reader compid
    :initarg :compid
    :type cl:fixnum
    :initform 0)
   (config_id
    :reader config_id
    :initarg :config_id
    :type cl:fixnum
    :initform 0)
   (param_id
    :reader param_id
    :initarg :param_id
    :type cl:fixnum
    :initform 0)
   (value
    :reader value
    :initarg :value
    :type cl:float
    :initform 0.0))
)

(cl:defclass mav_cc16_CONFIG_PARAM_SET_FLOAT (<mav_cc16_CONFIG_PARAM_SET_FLOAT>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_CONFIG_PARAM_SET_FLOAT>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_CONFIG_PARAM_SET_FLOAT)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_CONFIG_PARAM_SET_FLOAT> is deprecated: use drive_ros_msgs-msg:mav_cc16_CONFIG_PARAM_SET_FLOAT instead.")))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_CONFIG_PARAM_SET_FLOAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_CONFIG_PARAM_SET_FLOAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'config_id-val :lambda-list '(m))
(cl:defmethod config_id-val ((m <mav_cc16_CONFIG_PARAM_SET_FLOAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:config_id-val is deprecated.  Use drive_ros_msgs-msg:config_id instead.")
  (config_id m))

(cl:ensure-generic-function 'param_id-val :lambda-list '(m))
(cl:defmethod param_id-val ((m <mav_cc16_CONFIG_PARAM_SET_FLOAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:param_id-val is deprecated.  Use drive_ros_msgs-msg:param_id instead.")
  (param_id m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <mav_cc16_CONFIG_PARAM_SET_FLOAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:value-val is deprecated.  Use drive_ros_msgs-msg:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_CONFIG_PARAM_SET_FLOAT>)))
    "Constants for message type '<mav_cc16_CONFIG_PARAM_SET_FLOAT>"
  '((:ID . 202))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_CONFIG_PARAM_SET_FLOAT)))
    "Constants for message type 'mav_cc16_CONFIG_PARAM_SET_FLOAT"
  '((:ID . 202))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_CONFIG_PARAM_SET_FLOAT>) ostream)
  "Serializes a message object of type '<mav_cc16_CONFIG_PARAM_SET_FLOAT>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'config_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'param_id)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_CONFIG_PARAM_SET_FLOAT>) istream)
  "Deserializes a message object of type '<mav_cc16_CONFIG_PARAM_SET_FLOAT>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'config_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'param_id)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'value) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_CONFIG_PARAM_SET_FLOAT>)))
  "Returns string type for a message object of type '<mav_cc16_CONFIG_PARAM_SET_FLOAT>"
  "drive_ros_msgs/mav_cc16_CONFIG_PARAM_SET_FLOAT")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_CONFIG_PARAM_SET_FLOAT)))
  "Returns string type for a message object of type 'mav_cc16_CONFIG_PARAM_SET_FLOAT"
  "drive_ros_msgs/mav_cc16_CONFIG_PARAM_SET_FLOAT")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_CONFIG_PARAM_SET_FLOAT>)))
  "Returns md5sum for a message object of type '<mav_cc16_CONFIG_PARAM_SET_FLOAT>"
  "00d5e75142c82f1d5d368f2e81384b0e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_CONFIG_PARAM_SET_FLOAT)))
  "Returns md5sum for a message object of type 'mav_cc16_CONFIG_PARAM_SET_FLOAT"
  "00d5e75142c82f1d5d368f2e81384b0e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_CONFIG_PARAM_SET_FLOAT>)))
  "Returns full string definition for message of type '<mav_cc16_CONFIG_PARAM_SET_FLOAT>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453237~%# MESSAGE: CONFIG_PARAM_SET_FLOAT~%# Description:Set new config parameter float value~%uint8 ID = 202~%uint8 sysid~%uint8 compid~%~%uint8 config_id     # ID of the configuration set~%uint8 param_id      # ID of the configuration parameter within the config set~%float32 value       # New parameter value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_CONFIG_PARAM_SET_FLOAT)))
  "Returns full string definition for message of type 'mav_cc16_CONFIG_PARAM_SET_FLOAT"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453237~%# MESSAGE: CONFIG_PARAM_SET_FLOAT~%# Description:Set new config parameter float value~%uint8 ID = 202~%uint8 sysid~%uint8 compid~%~%uint8 config_id     # ID of the configuration set~%uint8 param_id      # ID of the configuration parameter within the config set~%float32 value       # New parameter value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_CONFIG_PARAM_SET_FLOAT>))
  (cl:+ 0
     1
     1
     1
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_CONFIG_PARAM_SET_FLOAT>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_CONFIG_PARAM_SET_FLOAT
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':config_id (config_id msg))
    (cl:cons ':param_id (param_id msg))
    (cl:cons ':value (value msg))
))
