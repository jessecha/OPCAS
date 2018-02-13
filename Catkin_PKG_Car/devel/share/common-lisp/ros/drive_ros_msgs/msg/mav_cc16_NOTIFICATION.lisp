; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_NOTIFICATION.msg.html

(cl:defclass <mav_cc16_NOTIFICATION> (roslisp-msg-protocol:ros-message)
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
   (type
    :reader type
    :initarg :type
    :type cl:fixnum
    :initform 0)
   (description
    :reader description
    :initarg :description
    :type (cl:vector cl:integer)
   :initform (cl:make-array 50 :element-type 'cl:integer :initial-element 0))
   (tag
    :reader tag
    :initarg :tag
    :type (cl:vector cl:integer)
   :initform (cl:make-array 30 :element-type 'cl:integer :initial-element 0)))
)

(cl:defclass mav_cc16_NOTIFICATION (<mav_cc16_NOTIFICATION>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_NOTIFICATION>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_NOTIFICATION)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_NOTIFICATION> is deprecated: use drive_ros_msgs-msg:mav_cc16_NOTIFICATION instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <mav_cc16_NOTIFICATION>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:header-val is deprecated.  Use drive_ros_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_NOTIFICATION>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_NOTIFICATION>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <mav_cc16_NOTIFICATION>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:type-val is deprecated.  Use drive_ros_msgs-msg:type instead.")
  (type m))

(cl:ensure-generic-function 'description-val :lambda-list '(m))
(cl:defmethod description-val ((m <mav_cc16_NOTIFICATION>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:description-val is deprecated.  Use drive_ros_msgs-msg:description instead.")
  (description m))

(cl:ensure-generic-function 'tag-val :lambda-list '(m))
(cl:defmethod tag-val ((m <mav_cc16_NOTIFICATION>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:tag-val is deprecated.  Use drive_ros_msgs-msg:tag instead.")
  (tag m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_NOTIFICATION>)))
    "Constants for message type '<mav_cc16_NOTIFICATION>"
  '((:ID . 0)
    (:NOTIFICATION_TYPE_DEBUG . 0)
    (:NOTIFICATION_TYPE_INFO . 1)
    (:NOTIFICATION_TYPE_WARNING . 2)
    (:NOTIFICATION_TYPE_CRITICAL . 3))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_NOTIFICATION)))
    "Constants for message type 'mav_cc16_NOTIFICATION"
  '((:ID . 0)
    (:NOTIFICATION_TYPE_DEBUG . 0)
    (:NOTIFICATION_TYPE_INFO . 1)
    (:NOTIFICATION_TYPE_WARNING . 2)
    (:NOTIFICATION_TYPE_CRITICAL . 3))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_NOTIFICATION>) ostream)
  "Serializes a message object of type '<mav_cc16_NOTIFICATION>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'type)) ostream)
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'description))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'tag))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_NOTIFICATION>) istream)
  "Deserializes a message object of type '<mav_cc16_NOTIFICATION>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'type)) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'description) (cl:make-array 50))
  (cl:let ((vals (cl:slot-value msg 'description)))
    (cl:dotimes (i 50)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))))
  (cl:setf (cl:slot-value msg 'tag) (cl:make-array 30))
  (cl:let ((vals (cl:slot-value msg 'tag)))
    (cl:dotimes (i 30)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_NOTIFICATION>)))
  "Returns string type for a message object of type '<mav_cc16_NOTIFICATION>"
  "drive_ros_msgs/mav_cc16_NOTIFICATION")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_NOTIFICATION)))
  "Returns string type for a message object of type 'mav_cc16_NOTIFICATION"
  "drive_ros_msgs/mav_cc16_NOTIFICATION")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_NOTIFICATION>)))
  "Returns md5sum for a message object of type '<mav_cc16_NOTIFICATION>"
  "4343ec807a104fe1e21a2558c07a365a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_NOTIFICATION)))
  "Returns md5sum for a message object of type 'mav_cc16_NOTIFICATION"
  "4343ec807a104fe1e21a2558c07a365a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_NOTIFICATION>)))
  "Returns full string definition for message of type '<mav_cc16_NOTIFICATION>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452630~%# MESSAGE: NOTIFICATION~%# Description:Sends a notification to the app~%Header header~%~%uint8 ID = 0~%uint8 sysid~%uint8 compid~%~%uint8 type              # Type of the notification (see enum NOTIFICATION_TYPE)~%char[50] description    # Notification~%char[30] tag            # Tag~%~%uint8 NOTIFICATION_TYPE_DEBUG = 0             # Debug Notification~%uint8 NOTIFICATION_TYPE_INFO = 1              # Info Notification~%uint8 NOTIFICATION_TYPE_WARNING = 2           # Warning Notification~%uint8 NOTIFICATION_TYPE_CRITICAL = 3          # Critical Notification~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_NOTIFICATION)))
  "Returns full string definition for message of type 'mav_cc16_NOTIFICATION"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452630~%# MESSAGE: NOTIFICATION~%# Description:Sends a notification to the app~%Header header~%~%uint8 ID = 0~%uint8 sysid~%uint8 compid~%~%uint8 type              # Type of the notification (see enum NOTIFICATION_TYPE)~%char[50] description    # Notification~%char[30] tag            # Tag~%~%uint8 NOTIFICATION_TYPE_DEBUG = 0             # Debug Notification~%uint8 NOTIFICATION_TYPE_INFO = 1              # Info Notification~%uint8 NOTIFICATION_TYPE_WARNING = 2           # Warning Notification~%uint8 NOTIFICATION_TYPE_CRITICAL = 3          # Critical Notification~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_NOTIFICATION>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     1
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'description) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'tag) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_NOTIFICATION>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_NOTIFICATION
    (cl:cons ':header (header msg))
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':type (type msg))
    (cl:cons ':description (description msg))
    (cl:cons ':tag (tag msg))
))
