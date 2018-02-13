; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_COMMAND.msg.html

(cl:defclass <mav_cc16_COMMAND> (roslisp-msg-protocol:ros-message)
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
   (command
    :reader command
    :initarg :command
    :type cl:fixnum
    :initform 0))
)

(cl:defclass mav_cc16_COMMAND (<mav_cc16_COMMAND>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_COMMAND>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_COMMAND)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_COMMAND> is deprecated: use drive_ros_msgs-msg:mav_cc16_COMMAND instead.")))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_COMMAND>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_COMMAND>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'command-val :lambda-list '(m))
(cl:defmethod command-val ((m <mav_cc16_COMMAND>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:command-val is deprecated.  Use drive_ros_msgs-msg:command instead.")
  (command m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_COMMAND>)))
    "Constants for message type '<mav_cc16_COMMAND>"
  '((:ID . 210)
    (:COMMAND_TYPE_IMU_CALI . 0)
    (:COMMAND_TYPE_SELF_TEST . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_COMMAND)))
    "Constants for message type 'mav_cc16_COMMAND"
  '((:ID . 210)
    (:COMMAND_TYPE_IMU_CALI . 0)
    (:COMMAND_TYPE_SELF_TEST . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_COMMAND>) ostream)
  "Serializes a message object of type '<mav_cc16_COMMAND>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'command)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_COMMAND>) istream)
  "Deserializes a message object of type '<mav_cc16_COMMAND>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'command)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_COMMAND>)))
  "Returns string type for a message object of type '<mav_cc16_COMMAND>"
  "drive_ros_msgs/mav_cc16_COMMAND")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_COMMAND)))
  "Returns string type for a message object of type 'mav_cc16_COMMAND"
  "drive_ros_msgs/mav_cc16_COMMAND")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_COMMAND>)))
  "Returns md5sum for a message object of type '<mav_cc16_COMMAND>"
  "be67c996d08c2861ab69974cb5883a21")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_COMMAND)))
  "Returns md5sum for a message object of type 'mav_cc16_COMMAND"
  "be67c996d08c2861ab69974cb5883a21")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_COMMAND>)))
  "Returns full string definition for message of type '<mav_cc16_COMMAND>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453254~%# MESSAGE: COMMAND~%# Description:Command to perform~%uint8 ID = 210~%uint8 sysid~%uint8 compid~%~%uint8 command   # Command to perform (see COMMAND_TYPE ENUM)~%~%uint8 COMMAND_TYPE_IMU_CALI = 0           # Command: Perform IMU calibration~%uint8 COMMAND_TYPE_SELF_TEST = 1          # Command: Perform self-test of sensor and actor~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_COMMAND)))
  "Returns full string definition for message of type 'mav_cc16_COMMAND"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453254~%# MESSAGE: COMMAND~%# Description:Command to perform~%uint8 ID = 210~%uint8 sysid~%uint8 compid~%~%uint8 command   # Command to perform (see COMMAND_TYPE ENUM)~%~%uint8 COMMAND_TYPE_IMU_CALI = 0           # Command: Perform IMU calibration~%uint8 COMMAND_TYPE_SELF_TEST = 1          # Command: Perform self-test of sensor and actor~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_COMMAND>))
  (cl:+ 0
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_COMMAND>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_COMMAND
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':command (command msg))
))
