; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_CONFIG_COUNT.msg.html

(cl:defclass <mav_cc16_CONFIG_COUNT> (roslisp-msg-protocol:ros-message)
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
   (config_id_mask
    :reader config_id_mask
    :initarg :config_id_mask
    :type cl:integer
    :initform 0))
)

(cl:defclass mav_cc16_CONFIG_COUNT (<mav_cc16_CONFIG_COUNT>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_CONFIG_COUNT>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_CONFIG_COUNT)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_CONFIG_COUNT> is deprecated: use drive_ros_msgs-msg:mav_cc16_CONFIG_COUNT instead.")))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_CONFIG_COUNT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_CONFIG_COUNT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'config_id_mask-val :lambda-list '(m))
(cl:defmethod config_id_mask-val ((m <mav_cc16_CONFIG_COUNT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:config_id_mask-val is deprecated.  Use drive_ros_msgs-msg:config_id_mask instead.")
  (config_id_mask m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_CONFIG_COUNT>)))
    "Constants for message type '<mav_cc16_CONFIG_COUNT>"
  '((:ID . 195))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_CONFIG_COUNT)))
    "Constants for message type 'mav_cc16_CONFIG_COUNT"
  '((:ID . 195))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_CONFIG_COUNT>) ostream)
  "Serializes a message object of type '<mav_cc16_CONFIG_COUNT>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'config_id_mask)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'config_id_mask)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'config_id_mask)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'config_id_mask)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_CONFIG_COUNT>) istream)
  "Deserializes a message object of type '<mav_cc16_CONFIG_COUNT>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'config_id_mask)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'config_id_mask)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'config_id_mask)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'config_id_mask)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_CONFIG_COUNT>)))
  "Returns string type for a message object of type '<mav_cc16_CONFIG_COUNT>"
  "drive_ros_msgs/mav_cc16_CONFIG_COUNT")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_CONFIG_COUNT)))
  "Returns string type for a message object of type 'mav_cc16_CONFIG_COUNT"
  "drive_ros_msgs/mav_cc16_CONFIG_COUNT")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_CONFIG_COUNT>)))
  "Returns md5sum for a message object of type '<mav_cc16_CONFIG_COUNT>"
  "46576e4a4b8b1009c8c8d61fa45767d8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_CONFIG_COUNT)))
  "Returns md5sum for a message object of type 'mav_cc16_CONFIG_COUNT"
  "46576e4a4b8b1009c8c8d61fa45767d8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_CONFIG_COUNT>)))
  "Returns full string definition for message of type '<mav_cc16_CONFIG_COUNT>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453094~%# MESSAGE: CONFIG_COUNT~%# Description:Config quantity/id information~%uint8 ID = 195~%uint8 sysid~%uint8 compid~%~%uint32 config_id_mask       # Bitmask indicating which ids are used (LSB = id 0)~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_CONFIG_COUNT)))
  "Returns full string definition for message of type 'mav_cc16_CONFIG_COUNT"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453094~%# MESSAGE: CONFIG_COUNT~%# Description:Config quantity/id information~%uint8 ID = 195~%uint8 sysid~%uint8 compid~%~%uint32 config_id_mask       # Bitmask indicating which ids are used (LSB = id 0)~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_CONFIG_COUNT>))
  (cl:+ 0
     1
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_CONFIG_COUNT>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_CONFIG_COUNT
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':config_id_mask (config_id_mask msg))
))
