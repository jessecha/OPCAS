; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_CONFIG_REQUEST_COUNT.msg.html

(cl:defclass <mav_cc16_CONFIG_REQUEST_COUNT> (roslisp-msg-protocol:ros-message)
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
   (dummy
    :reader dummy
    :initarg :dummy
    :type cl:fixnum
    :initform 0))
)

(cl:defclass mav_cc16_CONFIG_REQUEST_COUNT (<mav_cc16_CONFIG_REQUEST_COUNT>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_CONFIG_REQUEST_COUNT>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_CONFIG_REQUEST_COUNT)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_CONFIG_REQUEST_COUNT> is deprecated: use drive_ros_msgs-msg:mav_cc16_CONFIG_REQUEST_COUNT instead.")))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_CONFIG_REQUEST_COUNT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_CONFIG_REQUEST_COUNT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'dummy-val :lambda-list '(m))
(cl:defmethod dummy-val ((m <mav_cc16_CONFIG_REQUEST_COUNT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:dummy-val is deprecated.  Use drive_ros_msgs-msg:dummy instead.")
  (dummy m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_CONFIG_REQUEST_COUNT>)))
    "Constants for message type '<mav_cc16_CONFIG_REQUEST_COUNT>"
  '((:ID . 192))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_CONFIG_REQUEST_COUNT)))
    "Constants for message type 'mav_cc16_CONFIG_REQUEST_COUNT"
  '((:ID . 192))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_CONFIG_REQUEST_COUNT>) ostream)
  "Serializes a message object of type '<mav_cc16_CONFIG_REQUEST_COUNT>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dummy)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_CONFIG_REQUEST_COUNT>) istream)
  "Deserializes a message object of type '<mav_cc16_CONFIG_REQUEST_COUNT>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dummy)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_CONFIG_REQUEST_COUNT>)))
  "Returns string type for a message object of type '<mav_cc16_CONFIG_REQUEST_COUNT>"
  "drive_ros_msgs/mav_cc16_CONFIG_REQUEST_COUNT")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_CONFIG_REQUEST_COUNT)))
  "Returns string type for a message object of type 'mav_cc16_CONFIG_REQUEST_COUNT"
  "drive_ros_msgs/mav_cc16_CONFIG_REQUEST_COUNT")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_CONFIG_REQUEST_COUNT>)))
  "Returns md5sum for a message object of type '<mav_cc16_CONFIG_REQUEST_COUNT>"
  "c8bde82c47574bf9d3ab6bb685675a04")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_CONFIG_REQUEST_COUNT)))
  "Returns md5sum for a message object of type 'mav_cc16_CONFIG_REQUEST_COUNT"
  "c8bde82c47574bf9d3ab6bb685675a04")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_CONFIG_REQUEST_COUNT>)))
  "Returns full string definition for message of type '<mav_cc16_CONFIG_REQUEST_COUNT>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453037~%# MESSAGE: CONFIG_REQUEST_COUNT~%# Description:Request quantity/id information of configs~%uint8 ID = 192~%uint8 sysid~%uint8 compid~%~%uint8 dummy~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_CONFIG_REQUEST_COUNT)))
  "Returns full string definition for message of type 'mav_cc16_CONFIG_REQUEST_COUNT"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453037~%# MESSAGE: CONFIG_REQUEST_COUNT~%# Description:Request quantity/id information of configs~%uint8 ID = 192~%uint8 sysid~%uint8 compid~%~%uint8 dummy~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_CONFIG_REQUEST_COUNT>))
  (cl:+ 0
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_CONFIG_REQUEST_COUNT>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_CONFIG_REQUEST_COUNT
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':dummy (dummy msg))
))
