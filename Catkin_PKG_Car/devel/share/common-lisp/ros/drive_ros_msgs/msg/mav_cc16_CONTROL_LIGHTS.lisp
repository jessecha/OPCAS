; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_CONTROL_LIGHTS.msg.html

(cl:defclass <mav_cc16_CONTROL_LIGHTS> (roslisp-msg-protocol:ros-message)
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
   (colors
    :reader colors
    :initarg :colors
    :type (cl:vector cl:integer)
   :initform (cl:make-array 15 :element-type 'cl:integer :initial-element 0)))
)

(cl:defclass mav_cc16_CONTROL_LIGHTS (<mav_cc16_CONTROL_LIGHTS>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_CONTROL_LIGHTS>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_CONTROL_LIGHTS)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_CONTROL_LIGHTS> is deprecated: use drive_ros_msgs-msg:mav_cc16_CONTROL_LIGHTS instead.")))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_CONTROL_LIGHTS>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_CONTROL_LIGHTS>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'colors-val :lambda-list '(m))
(cl:defmethod colors-val ((m <mav_cc16_CONTROL_LIGHTS>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:colors-val is deprecated.  Use drive_ros_msgs-msg:colors instead.")
  (colors m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_CONTROL_LIGHTS>)))
    "Constants for message type '<mav_cc16_CONTROL_LIGHTS>"
  '((:ID . 32))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_CONTROL_LIGHTS)))
    "Constants for message type 'mav_cc16_CONTROL_LIGHTS"
  '((:ID . 32))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_CONTROL_LIGHTS>) ostream)
  "Serializes a message object of type '<mav_cc16_CONTROL_LIGHTS>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) ele) ostream))
   (cl:slot-value msg 'colors))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_CONTROL_LIGHTS>) istream)
  "Deserializes a message object of type '<mav_cc16_CONTROL_LIGHTS>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'colors) (cl:make-array 15))
  (cl:let ((vals (cl:slot-value msg 'colors)))
    (cl:dotimes (i 15)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:aref vals i)) (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_CONTROL_LIGHTS>)))
  "Returns string type for a message object of type '<mav_cc16_CONTROL_LIGHTS>"
  "drive_ros_msgs/mav_cc16_CONTROL_LIGHTS")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_CONTROL_LIGHTS)))
  "Returns string type for a message object of type 'mav_cc16_CONTROL_LIGHTS"
  "drive_ros_msgs/mav_cc16_CONTROL_LIGHTS")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_CONTROL_LIGHTS>)))
  "Returns md5sum for a message object of type '<mav_cc16_CONTROL_LIGHTS>"
  "8d6b19f83df7d1d5d31de59ee6e1ece9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_CONTROL_LIGHTS)))
  "Returns md5sum for a message object of type 'mav_cc16_CONTROL_LIGHTS"
  "8d6b19f83df7d1d5d31de59ee6e1ece9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_CONTROL_LIGHTS>)))
  "Returns full string definition for message of type '<mav_cc16_CONTROL_LIGHTS>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452797~%# MESSAGE: CONTROL_LIGHTS~%# Description:RGB lights~%uint8 ID = 32~%uint8 sysid~%uint8 compid~%~%uint32[15] colors   # Colors-4 bytes, r,g,b, nothing~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_CONTROL_LIGHTS)))
  "Returns full string definition for message of type 'mav_cc16_CONTROL_LIGHTS"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452797~%# MESSAGE: CONTROL_LIGHTS~%# Description:RGB lights~%uint8 ID = 32~%uint8 sysid~%uint8 compid~%~%uint32[15] colors   # Colors-4 bytes, r,g,b, nothing~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_CONTROL_LIGHTS>))
  (cl:+ 0
     1
     1
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'colors) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_CONTROL_LIGHTS>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_CONTROL_LIGHTS
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':colors (colors msg))
))
