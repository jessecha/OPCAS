; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_CONFIG_REQUEST_PARAMS.msg.html

(cl:defclass <mav_cc16_CONFIG_REQUEST_PARAMS> (roslisp-msg-protocol:ros-message)
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
    :initform 0))
)

(cl:defclass mav_cc16_CONFIG_REQUEST_PARAMS (<mav_cc16_CONFIG_REQUEST_PARAMS>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_CONFIG_REQUEST_PARAMS>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_CONFIG_REQUEST_PARAMS)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_CONFIG_REQUEST_PARAMS> is deprecated: use drive_ros_msgs-msg:mav_cc16_CONFIG_REQUEST_PARAMS instead.")))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_CONFIG_REQUEST_PARAMS>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_CONFIG_REQUEST_PARAMS>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'config_id-val :lambda-list '(m))
(cl:defmethod config_id-val ((m <mav_cc16_CONFIG_REQUEST_PARAMS>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:config_id-val is deprecated.  Use drive_ros_msgs-msg:config_id instead.")
  (config_id m))

(cl:ensure-generic-function 'param_id-val :lambda-list '(m))
(cl:defmethod param_id-val ((m <mav_cc16_CONFIG_REQUEST_PARAMS>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:param_id-val is deprecated.  Use drive_ros_msgs-msg:param_id instead.")
  (param_id m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_CONFIG_REQUEST_PARAMS>)))
    "Constants for message type '<mav_cc16_CONFIG_REQUEST_PARAMS>"
  '((:ID . 194))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_CONFIG_REQUEST_PARAMS)))
    "Constants for message type 'mav_cc16_CONFIG_REQUEST_PARAMS"
  '((:ID . 194))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_CONFIG_REQUEST_PARAMS>) ostream)
  "Serializes a message object of type '<mav_cc16_CONFIG_REQUEST_PARAMS>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'config_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'param_id)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_CONFIG_REQUEST_PARAMS>) istream)
  "Deserializes a message object of type '<mav_cc16_CONFIG_REQUEST_PARAMS>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'config_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'param_id)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_CONFIG_REQUEST_PARAMS>)))
  "Returns string type for a message object of type '<mav_cc16_CONFIG_REQUEST_PARAMS>"
  "drive_ros_msgs/mav_cc16_CONFIG_REQUEST_PARAMS")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_CONFIG_REQUEST_PARAMS)))
  "Returns string type for a message object of type 'mav_cc16_CONFIG_REQUEST_PARAMS"
  "drive_ros_msgs/mav_cc16_CONFIG_REQUEST_PARAMS")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_CONFIG_REQUEST_PARAMS>)))
  "Returns md5sum for a message object of type '<mav_cc16_CONFIG_REQUEST_PARAMS>"
  "5ce152efbf37c393d893fa9eb0dfbfab")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_CONFIG_REQUEST_PARAMS)))
  "Returns md5sum for a message object of type 'mav_cc16_CONFIG_REQUEST_PARAMS"
  "5ce152efbf37c393d893fa9eb0dfbfab")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_CONFIG_REQUEST_PARAMS>)))
  "Returns full string definition for message of type '<mav_cc16_CONFIG_REQUEST_PARAMS>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453077~%# MESSAGE: CONFIG_REQUEST_PARAMS~%# Description:Request config parameter information~%uint8 ID = 194~%uint8 sysid~%uint8 compid~%~%uint8 config_id     # ID of the configuration set~%uint8 param_id      # ID of the config parameter within the set~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_CONFIG_REQUEST_PARAMS)))
  "Returns full string definition for message of type 'mav_cc16_CONFIG_REQUEST_PARAMS"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453077~%# MESSAGE: CONFIG_REQUEST_PARAMS~%# Description:Request config parameter information~%uint8 ID = 194~%uint8 sysid~%uint8 compid~%~%uint8 config_id     # ID of the configuration set~%uint8 param_id      # ID of the config parameter within the set~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_CONFIG_REQUEST_PARAMS>))
  (cl:+ 0
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_CONFIG_REQUEST_PARAMS>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_CONFIG_REQUEST_PARAMS
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':config_id (config_id msg))
    (cl:cons ':param_id (param_id msg))
))
