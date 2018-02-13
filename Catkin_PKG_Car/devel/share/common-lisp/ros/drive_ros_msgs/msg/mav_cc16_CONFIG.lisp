; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_CONFIG.msg.html

(cl:defclass <mav_cc16_CONFIG> (roslisp-msg-protocol:ros-message)
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
   (name
    :reader name
    :initarg :name
    :type (cl:vector cl:integer)
   :initform (cl:make-array 30 :element-type 'cl:integer :initial-element 0))
   (param_id_mask
    :reader param_id_mask
    :initarg :param_id_mask
    :type cl:fixnum
    :initform 0))
)

(cl:defclass mav_cc16_CONFIG (<mav_cc16_CONFIG>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_CONFIG>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_CONFIG)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_CONFIG> is deprecated: use drive_ros_msgs-msg:mav_cc16_CONFIG instead.")))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_CONFIG>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_CONFIG>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'config_id-val :lambda-list '(m))
(cl:defmethod config_id-val ((m <mav_cc16_CONFIG>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:config_id-val is deprecated.  Use drive_ros_msgs-msg:config_id instead.")
  (config_id m))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <mav_cc16_CONFIG>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:name-val is deprecated.  Use drive_ros_msgs-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'param_id_mask-val :lambda-list '(m))
(cl:defmethod param_id_mask-val ((m <mav_cc16_CONFIG>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:param_id_mask-val is deprecated.  Use drive_ros_msgs-msg:param_id_mask instead.")
  (param_id_mask m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_CONFIG>)))
    "Constants for message type '<mav_cc16_CONFIG>"
  '((:ID . 196))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_CONFIG)))
    "Constants for message type 'mav_cc16_CONFIG"
  '((:ID . 196))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_CONFIG>) ostream)
  "Serializes a message object of type '<mav_cc16_CONFIG>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'config_id)) ostream)
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'name))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'param_id_mask)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'param_id_mask)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_CONFIG>) istream)
  "Deserializes a message object of type '<mav_cc16_CONFIG>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'config_id)) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'name) (cl:make-array 30))
  (cl:let ((vals (cl:slot-value msg 'name)))
    (cl:dotimes (i 30)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'param_id_mask)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'param_id_mask)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_CONFIG>)))
  "Returns string type for a message object of type '<mav_cc16_CONFIG>"
  "drive_ros_msgs/mav_cc16_CONFIG")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_CONFIG)))
  "Returns string type for a message object of type 'mav_cc16_CONFIG"
  "drive_ros_msgs/mav_cc16_CONFIG")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_CONFIG>)))
  "Returns md5sum for a message object of type '<mav_cc16_CONFIG>"
  "0173aab5bcc4cc9e033c6fccf6233937")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_CONFIG)))
  "Returns md5sum for a message object of type 'mav_cc16_CONFIG"
  "0173aab5bcc4cc9e033c6fccf6233937")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_CONFIG>)))
  "Returns full string definition for message of type '<mav_cc16_CONFIG>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453109~%# MESSAGE: CONFIG~%# Description:Config set information~%uint8 ID = 196~%uint8 sysid~%uint8 compid~%~%uint8 config_id         # ID of the configuration set~%char[30] name           # Name of the configuration set~%uint16 param_id_mask    # Bitmask indicating which param ids are used (LSB = id 0)~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_CONFIG)))
  "Returns full string definition for message of type 'mav_cc16_CONFIG"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.453109~%# MESSAGE: CONFIG~%# Description:Config set information~%uint8 ID = 196~%uint8 sysid~%uint8 compid~%~%uint8 config_id         # ID of the configuration set~%char[30] name           # Name of the configuration set~%uint16 param_id_mask    # Bitmask indicating which param ids are used (LSB = id 0)~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_CONFIG>))
  (cl:+ 0
     1
     1
     1
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'name) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_CONFIG>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_CONFIG
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':config_id (config_id msg))
    (cl:cons ':name (name msg))
    (cl:cons ':param_id_mask (param_id_mask msg))
))
