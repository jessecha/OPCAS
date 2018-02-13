; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_CONTROL_COMMAND.msg.html

(cl:defclass <mav_cc16_CONTROL_COMMAND> (roslisp-msg-protocol:ros-message)
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
   (velocity
    :reader velocity
    :initarg :velocity
    :type cl:float
    :initform 0.0)
   (steering_front
    :reader steering_front
    :initarg :steering_front
    :type cl:float
    :initform 0.0)
   (steering_rear
    :reader steering_rear
    :initarg :steering_rear
    :type cl:float
    :initform 0.0)
   (indicator_left
    :reader indicator_left
    :initarg :indicator_left
    :type cl:fixnum
    :initform 0)
   (indicator_right
    :reader indicator_right
    :initarg :indicator_right
    :type cl:fixnum
    :initform 0))
)

(cl:defclass mav_cc16_CONTROL_COMMAND (<mav_cc16_CONTROL_COMMAND>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_CONTROL_COMMAND>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_CONTROL_COMMAND)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_CONTROL_COMMAND> is deprecated: use drive_ros_msgs-msg:mav_cc16_CONTROL_COMMAND instead.")))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_CONTROL_COMMAND>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_CONTROL_COMMAND>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'velocity-val :lambda-list '(m))
(cl:defmethod velocity-val ((m <mav_cc16_CONTROL_COMMAND>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:velocity-val is deprecated.  Use drive_ros_msgs-msg:velocity instead.")
  (velocity m))

(cl:ensure-generic-function 'steering_front-val :lambda-list '(m))
(cl:defmethod steering_front-val ((m <mav_cc16_CONTROL_COMMAND>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:steering_front-val is deprecated.  Use drive_ros_msgs-msg:steering_front instead.")
  (steering_front m))

(cl:ensure-generic-function 'steering_rear-val :lambda-list '(m))
(cl:defmethod steering_rear-val ((m <mav_cc16_CONTROL_COMMAND>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:steering_rear-val is deprecated.  Use drive_ros_msgs-msg:steering_rear instead.")
  (steering_rear m))

(cl:ensure-generic-function 'indicator_left-val :lambda-list '(m))
(cl:defmethod indicator_left-val ((m <mav_cc16_CONTROL_COMMAND>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:indicator_left-val is deprecated.  Use drive_ros_msgs-msg:indicator_left instead.")
  (indicator_left m))

(cl:ensure-generic-function 'indicator_right-val :lambda-list '(m))
(cl:defmethod indicator_right-val ((m <mav_cc16_CONTROL_COMMAND>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:indicator_right-val is deprecated.  Use drive_ros_msgs-msg:indicator_right instead.")
  (indicator_right m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_CONTROL_COMMAND>)))
    "Constants for message type '<mav_cc16_CONTROL_COMMAND>"
  '((:ID . 64)
    (:INDICATOR_OFF . 0)
    (:INDICATOR_ON . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_CONTROL_COMMAND)))
    "Constants for message type 'mav_cc16_CONTROL_COMMAND"
  '((:ID . 64)
    (:INDICATOR_OFF . 0)
    (:INDICATOR_ON . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_CONTROL_COMMAND>) ostream)
  "Serializes a message object of type '<mav_cc16_CONTROL_COMMAND>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'velocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steering_front))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steering_rear))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'indicator_left)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'indicator_right)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_CONTROL_COMMAND>) istream)
  "Deserializes a message object of type '<mav_cc16_CONTROL_COMMAND>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'velocity) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steering_front) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steering_rear) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'indicator_left)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'indicator_right)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_CONTROL_COMMAND>)))
  "Returns string type for a message object of type '<mav_cc16_CONTROL_COMMAND>"
  "drive_ros_msgs/mav_cc16_CONTROL_COMMAND")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_CONTROL_COMMAND)))
  "Returns string type for a message object of type 'mav_cc16_CONTROL_COMMAND"
  "drive_ros_msgs/mav_cc16_CONTROL_COMMAND")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_CONTROL_COMMAND>)))
  "Returns md5sum for a message object of type '<mav_cc16_CONTROL_COMMAND>"
  "db3d4778273e5bde28a0418e456620d4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_CONTROL_COMMAND)))
  "Returns md5sum for a message object of type 'mav_cc16_CONTROL_COMMAND"
  "db3d4778273e5bde28a0418e456620d4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_CONTROL_COMMAND>)))
  "Returns full string definition for message of type '<mav_cc16_CONTROL_COMMAND>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452827~%# MESSAGE: CONTROL_COMMAND~%# Description: Control command data~%uint8 ID = 64~%uint8 sysid~%uint8 compid~%~%float32 velocity            # Desired velocity [m/s]~%float32 steering_front      # Front axle steering angle [rad]~%float32 steering_rear       # Rear axle steering angle [rad]~%uint8 indicator_left        # Left turn signal indicator~%uint8 indicator_right       # Right turn signal indicator~%~%uint8 INDICATOR_OFF = 0 # turn indicator off~%uint8 INDICATOR_ON  = 1 # turn indicator on~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_CONTROL_COMMAND)))
  "Returns full string definition for message of type 'mav_cc16_CONTROL_COMMAND"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452827~%# MESSAGE: CONTROL_COMMAND~%# Description: Control command data~%uint8 ID = 64~%uint8 sysid~%uint8 compid~%~%float32 velocity            # Desired velocity [m/s]~%float32 steering_front      # Front axle steering angle [rad]~%float32 steering_rear       # Rear axle steering angle [rad]~%uint8 indicator_left        # Left turn signal indicator~%uint8 indicator_right       # Right turn signal indicator~%~%uint8 INDICATOR_OFF = 0 # turn indicator off~%uint8 INDICATOR_ON  = 1 # turn indicator on~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_CONTROL_COMMAND>))
  (cl:+ 0
     1
     1
     4
     4
     4
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_CONTROL_COMMAND>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_CONTROL_COMMAND
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':velocity (velocity msg))
    (cl:cons ':steering_front (steering_front msg))
    (cl:cons ':steering_rear (steering_rear msg))
    (cl:cons ':indicator_left (indicator_left msg))
    (cl:cons ':indicator_right (indicator_right msg))
))
