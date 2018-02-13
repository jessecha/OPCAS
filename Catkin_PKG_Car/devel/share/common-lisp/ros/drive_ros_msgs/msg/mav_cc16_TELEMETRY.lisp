; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_TELEMETRY.msg.html

(cl:defclass <mav_cc16_TELEMETRY> (roslisp-msg-protocol:ros-message)
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
   (xacc
    :reader xacc
    :initarg :xacc
    :type cl:float
    :initform 0.0)
   (yacc
    :reader yacc
    :initarg :yacc
    :type cl:float
    :initform 0.0)
   (zacc
    :reader zacc
    :initarg :zacc
    :type cl:float
    :initform 0.0)
   (xgyro
    :reader xgyro
    :initarg :xgyro
    :type cl:float
    :initform 0.0)
   (ygyro
    :reader ygyro
    :initarg :ygyro
    :type cl:float
    :initform 0.0)
   (zgyro
    :reader zgyro
    :initarg :zgyro
    :type cl:float
    :initform 0.0)
   (dist_front
    :reader dist_front
    :initarg :dist_front
    :type cl:float
    :initform 0.0)
   (dist_rear
    :reader dist_rear
    :initarg :dist_rear
    :type cl:float
    :initform 0.0)
   (dist_side
    :reader dist_side
    :initarg :dist_side
    :type cl:float
    :initform 0.0)
   (odom
    :reader odom
    :initarg :odom
    :type cl:float
    :initform 0.0)
   (odom_accumulated
    :reader odom_accumulated
    :initarg :odom_accumulated
    :type cl:float
    :initform 0.0)
   (xmotion_front
    :reader xmotion_front
    :initarg :xmotion_front
    :type cl:float
    :initform 0.0)
   (ymotion_front
    :reader ymotion_front
    :initarg :ymotion_front
    :type cl:float
    :initform 0.0)
   (xmotion_rear
    :reader xmotion_rear
    :initarg :xmotion_rear
    :type cl:float
    :initform 0.0)
   (ymotion_rear
    :reader ymotion_rear
    :initarg :ymotion_rear
    :type cl:float
    :initform 0.0)
   (motion_front_quality
    :reader motion_front_quality
    :initarg :motion_front_quality
    :type cl:fixnum
    :initform 0)
   (motion_rear_quality
    :reader motion_rear_quality
    :initarg :motion_rear_quality
    :type cl:fixnum
    :initform 0)
   (current_motor
    :reader current_motor
    :initarg :current_motor
    :type cl:integer
    :initform 0)
   (current_servo_front
    :reader current_servo_front
    :initarg :current_servo_front
    :type cl:fixnum
    :initform 0)
   (current_servo_rear
    :reader current_servo_rear
    :initarg :current_servo_rear
    :type cl:fixnum
    :initform 0)
   (current_total
    :reader current_total
    :initarg :current_total
    :type cl:fixnum
    :initform 0)
   (pwm_servo_front
    :reader pwm_servo_front
    :initarg :pwm_servo_front
    :type cl:fixnum
    :initform 0)
   (pwm_servo_rear
    :reader pwm_servo_rear
    :initarg :pwm_servo_rear
    :type cl:fixnum
    :initform 0)
   (battery_voltage
    :reader battery_voltage
    :initarg :battery_voltage
    :type cl:fixnum
    :initform 0)
   (remote_control
    :reader remote_control
    :initarg :remote_control
    :type cl:fixnum
    :initform 0)
   (drive_mode
    :reader drive_mode
    :initarg :drive_mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass mav_cc16_TELEMETRY (<mav_cc16_TELEMETRY>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_TELEMETRY>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_TELEMETRY)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_TELEMETRY> is deprecated: use drive_ros_msgs-msg:mav_cc16_TELEMETRY instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:header-val is deprecated.  Use drive_ros_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'xacc-val :lambda-list '(m))
(cl:defmethod xacc-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:xacc-val is deprecated.  Use drive_ros_msgs-msg:xacc instead.")
  (xacc m))

(cl:ensure-generic-function 'yacc-val :lambda-list '(m))
(cl:defmethod yacc-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:yacc-val is deprecated.  Use drive_ros_msgs-msg:yacc instead.")
  (yacc m))

(cl:ensure-generic-function 'zacc-val :lambda-list '(m))
(cl:defmethod zacc-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:zacc-val is deprecated.  Use drive_ros_msgs-msg:zacc instead.")
  (zacc m))

(cl:ensure-generic-function 'xgyro-val :lambda-list '(m))
(cl:defmethod xgyro-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:xgyro-val is deprecated.  Use drive_ros_msgs-msg:xgyro instead.")
  (xgyro m))

(cl:ensure-generic-function 'ygyro-val :lambda-list '(m))
(cl:defmethod ygyro-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:ygyro-val is deprecated.  Use drive_ros_msgs-msg:ygyro instead.")
  (ygyro m))

(cl:ensure-generic-function 'zgyro-val :lambda-list '(m))
(cl:defmethod zgyro-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:zgyro-val is deprecated.  Use drive_ros_msgs-msg:zgyro instead.")
  (zgyro m))

(cl:ensure-generic-function 'dist_front-val :lambda-list '(m))
(cl:defmethod dist_front-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:dist_front-val is deprecated.  Use drive_ros_msgs-msg:dist_front instead.")
  (dist_front m))

(cl:ensure-generic-function 'dist_rear-val :lambda-list '(m))
(cl:defmethod dist_rear-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:dist_rear-val is deprecated.  Use drive_ros_msgs-msg:dist_rear instead.")
  (dist_rear m))

(cl:ensure-generic-function 'dist_side-val :lambda-list '(m))
(cl:defmethod dist_side-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:dist_side-val is deprecated.  Use drive_ros_msgs-msg:dist_side instead.")
  (dist_side m))

(cl:ensure-generic-function 'odom-val :lambda-list '(m))
(cl:defmethod odom-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:odom-val is deprecated.  Use drive_ros_msgs-msg:odom instead.")
  (odom m))

(cl:ensure-generic-function 'odom_accumulated-val :lambda-list '(m))
(cl:defmethod odom_accumulated-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:odom_accumulated-val is deprecated.  Use drive_ros_msgs-msg:odom_accumulated instead.")
  (odom_accumulated m))

(cl:ensure-generic-function 'xmotion_front-val :lambda-list '(m))
(cl:defmethod xmotion_front-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:xmotion_front-val is deprecated.  Use drive_ros_msgs-msg:xmotion_front instead.")
  (xmotion_front m))

(cl:ensure-generic-function 'ymotion_front-val :lambda-list '(m))
(cl:defmethod ymotion_front-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:ymotion_front-val is deprecated.  Use drive_ros_msgs-msg:ymotion_front instead.")
  (ymotion_front m))

(cl:ensure-generic-function 'xmotion_rear-val :lambda-list '(m))
(cl:defmethod xmotion_rear-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:xmotion_rear-val is deprecated.  Use drive_ros_msgs-msg:xmotion_rear instead.")
  (xmotion_rear m))

(cl:ensure-generic-function 'ymotion_rear-val :lambda-list '(m))
(cl:defmethod ymotion_rear-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:ymotion_rear-val is deprecated.  Use drive_ros_msgs-msg:ymotion_rear instead.")
  (ymotion_rear m))

(cl:ensure-generic-function 'motion_front_quality-val :lambda-list '(m))
(cl:defmethod motion_front_quality-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:motion_front_quality-val is deprecated.  Use drive_ros_msgs-msg:motion_front_quality instead.")
  (motion_front_quality m))

(cl:ensure-generic-function 'motion_rear_quality-val :lambda-list '(m))
(cl:defmethod motion_rear_quality-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:motion_rear_quality-val is deprecated.  Use drive_ros_msgs-msg:motion_rear_quality instead.")
  (motion_rear_quality m))

(cl:ensure-generic-function 'current_motor-val :lambda-list '(m))
(cl:defmethod current_motor-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:current_motor-val is deprecated.  Use drive_ros_msgs-msg:current_motor instead.")
  (current_motor m))

(cl:ensure-generic-function 'current_servo_front-val :lambda-list '(m))
(cl:defmethod current_servo_front-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:current_servo_front-val is deprecated.  Use drive_ros_msgs-msg:current_servo_front instead.")
  (current_servo_front m))

(cl:ensure-generic-function 'current_servo_rear-val :lambda-list '(m))
(cl:defmethod current_servo_rear-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:current_servo_rear-val is deprecated.  Use drive_ros_msgs-msg:current_servo_rear instead.")
  (current_servo_rear m))

(cl:ensure-generic-function 'current_total-val :lambda-list '(m))
(cl:defmethod current_total-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:current_total-val is deprecated.  Use drive_ros_msgs-msg:current_total instead.")
  (current_total m))

(cl:ensure-generic-function 'pwm_servo_front-val :lambda-list '(m))
(cl:defmethod pwm_servo_front-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:pwm_servo_front-val is deprecated.  Use drive_ros_msgs-msg:pwm_servo_front instead.")
  (pwm_servo_front m))

(cl:ensure-generic-function 'pwm_servo_rear-val :lambda-list '(m))
(cl:defmethod pwm_servo_rear-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:pwm_servo_rear-val is deprecated.  Use drive_ros_msgs-msg:pwm_servo_rear instead.")
  (pwm_servo_rear m))

(cl:ensure-generic-function 'battery_voltage-val :lambda-list '(m))
(cl:defmethod battery_voltage-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:battery_voltage-val is deprecated.  Use drive_ros_msgs-msg:battery_voltage instead.")
  (battery_voltage m))

(cl:ensure-generic-function 'remote_control-val :lambda-list '(m))
(cl:defmethod remote_control-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:remote_control-val is deprecated.  Use drive_ros_msgs-msg:remote_control instead.")
  (remote_control m))

(cl:ensure-generic-function 'drive_mode-val :lambda-list '(m))
(cl:defmethod drive_mode-val ((m <mav_cc16_TELEMETRY>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:drive_mode-val is deprecated.  Use drive_ros_msgs-msg:drive_mode instead.")
  (drive_mode m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_TELEMETRY>)))
    "Constants for message type '<mav_cc16_TELEMETRY>"
  '((:ID . 3)
    (:REMOTE_CONTROL_STATUS_DISCONNECTED . 0)
    (:REMOTE_CONTROL_STATUS_CONNECTED . 1)
    (:REMOTE_CONTROL_STATUS_AUTONOMOUS . 2)
    (:REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS . 3)
    (:REMOTE_CONTROL_STATUS_MANUAL . 4)
    (:DRIVE_MODE_TRACK . 0)
    (:DRIVE_MODE_TRACK_OBSTACLES . 1)
    (:DRIVE_MODE_PARKING . 2)
    (:DRIVE_MODE_IDLE . 3))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_TELEMETRY)))
    "Constants for message type 'mav_cc16_TELEMETRY"
  '((:ID . 3)
    (:REMOTE_CONTROL_STATUS_DISCONNECTED . 0)
    (:REMOTE_CONTROL_STATUS_CONNECTED . 1)
    (:REMOTE_CONTROL_STATUS_AUTONOMOUS . 2)
    (:REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS . 3)
    (:REMOTE_CONTROL_STATUS_MANUAL . 4)
    (:DRIVE_MODE_TRACK . 0)
    (:DRIVE_MODE_TRACK_OBSTACLES . 1)
    (:DRIVE_MODE_PARKING . 2)
    (:DRIVE_MODE_IDLE . 3))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_TELEMETRY>) ostream)
  "Serializes a message object of type '<mav_cc16_TELEMETRY>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'xacc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'yacc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'zacc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'xgyro))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'ygyro))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'zgyro))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'dist_front))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'dist_rear))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'dist_side))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'odom))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'odom_accumulated))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'xmotion_front))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'ymotion_front))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'xmotion_rear))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'ymotion_rear))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'motion_front_quality)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'motion_rear_quality)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'current_motor)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'current_servo_front)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'current_servo_front)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'current_servo_rear)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'current_servo_rear)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'current_total)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'current_total)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'pwm_servo_front)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'pwm_servo_front)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'pwm_servo_rear)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'pwm_servo_rear)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'battery_voltage)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'battery_voltage)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'remote_control)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'drive_mode)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_TELEMETRY>) istream)
  "Deserializes a message object of type '<mav_cc16_TELEMETRY>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'xacc) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'yacc) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'zacc) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'xgyro) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ygyro) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'zgyro) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'dist_front) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'dist_rear) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'dist_side) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'odom) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'odom_accumulated) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'xmotion_front) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ymotion_front) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'xmotion_rear) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ymotion_rear) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'motion_front_quality)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'motion_rear_quality)) (cl:read-byte istream))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'current_motor) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'current_servo_front)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'current_servo_front)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'current_servo_rear)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'current_servo_rear)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'current_total)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'current_total)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'pwm_servo_front)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'pwm_servo_front)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'pwm_servo_rear)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'pwm_servo_rear)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'battery_voltage)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'battery_voltage)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'remote_control)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'drive_mode)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_TELEMETRY>)))
  "Returns string type for a message object of type '<mav_cc16_TELEMETRY>"
  "drive_ros_msgs/mav_cc16_TELEMETRY")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_TELEMETRY)))
  "Returns string type for a message object of type 'mav_cc16_TELEMETRY"
  "drive_ros_msgs/mav_cc16_TELEMETRY")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_TELEMETRY>)))
  "Returns md5sum for a message object of type '<mav_cc16_TELEMETRY>"
  "432f9dfb0037d5f65f83be8d10976087")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_TELEMETRY)))
  "Returns md5sum for a message object of type 'mav_cc16_TELEMETRY"
  "432f9dfb0037d5f65f83be8d10976087")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_TELEMETRY>)))
  "Returns full string definition for message of type '<mav_cc16_TELEMETRY>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452753~%# MESSAGE: TELEMETRY~%# Description:Telemetry~%Header header~%~%uint8 ID = 3~%uint8 sysid~%uint8 compid~%~%float32 xacc~%float32 yacc~%float32 zacc~%float32 xgyro~%float32 ygyro~%float32 zgyro~%float32 dist_front~%float32 dist_rear~%float32 dist_side~%float32 odom~%float32 odom_accumulated~%float32 xmotion_front~%float32 ymotion_front~%float32 xmotion_rear~%float32 ymotion_rear~%uint8 motion_front_quality~%uint8 motion_rear_quality~%int32 current_motor~%uint16 current_servo_front~%uint16 current_servo_rear~%uint16 current_total~%uint16 pwm_servo_front~%uint16 pwm_servo_rear~%uint16 battery_voltage~%uint8 remote_control~%uint8 drive_mode~%~%~%uint8 REMOTE_CONTROL_STATUS_DISCONNECTED = 0     # Remote Control is not connected to the system~%uint8 REMOTE_CONTROL_STATUS_CONNECTED = 1        # Remote Control connection is established~%uint8 REMOTE_CONTROL_STATUS_AUTONOMOUS = 2       # Remote Control is connected and under active control~%uint8 REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS = 3  # Remote Control is connected and under active control~%uint8 REMOTE_CONTROL_STATUS_MANUAL = 4           # Remote Control is connected and under active control~%~%~%uint8 DRIVE_MODE_TRACK = 0              # Track (excluding obstacles)~%uint8 DRIVE_MODE_TRACK_OBSTACLES = 1    # Track including obstacles~%uint8 DRIVE_MODE_PARKING = 2            # Parking mode~%uint8 DRIVE_MODE_IDLE = 3               # Idle mode~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_TELEMETRY)))
  "Returns full string definition for message of type 'mav_cc16_TELEMETRY"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452753~%# MESSAGE: TELEMETRY~%# Description:Telemetry~%Header header~%~%uint8 ID = 3~%uint8 sysid~%uint8 compid~%~%float32 xacc~%float32 yacc~%float32 zacc~%float32 xgyro~%float32 ygyro~%float32 zgyro~%float32 dist_front~%float32 dist_rear~%float32 dist_side~%float32 odom~%float32 odom_accumulated~%float32 xmotion_front~%float32 ymotion_front~%float32 xmotion_rear~%float32 ymotion_rear~%uint8 motion_front_quality~%uint8 motion_rear_quality~%int32 current_motor~%uint16 current_servo_front~%uint16 current_servo_rear~%uint16 current_total~%uint16 pwm_servo_front~%uint16 pwm_servo_rear~%uint16 battery_voltage~%uint8 remote_control~%uint8 drive_mode~%~%~%uint8 REMOTE_CONTROL_STATUS_DISCONNECTED = 0     # Remote Control is not connected to the system~%uint8 REMOTE_CONTROL_STATUS_CONNECTED = 1        # Remote Control connection is established~%uint8 REMOTE_CONTROL_STATUS_AUTONOMOUS = 2       # Remote Control is connected and under active control~%uint8 REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS = 3  # Remote Control is connected and under active control~%uint8 REMOTE_CONTROL_STATUS_MANUAL = 4           # Remote Control is connected and under active control~%~%~%uint8 DRIVE_MODE_TRACK = 0              # Track (excluding obstacles)~%uint8 DRIVE_MODE_TRACK_OBSTACLES = 1    # Track including obstacles~%uint8 DRIVE_MODE_PARKING = 2            # Parking mode~%uint8 DRIVE_MODE_IDLE = 3               # Idle mode~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_TELEMETRY>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     4
     1
     1
     4
     2
     2
     2
     2
     2
     2
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_TELEMETRY>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_TELEMETRY
    (cl:cons ':header (header msg))
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':xacc (xacc msg))
    (cl:cons ':yacc (yacc msg))
    (cl:cons ':zacc (zacc msg))
    (cl:cons ':xgyro (xgyro msg))
    (cl:cons ':ygyro (ygyro msg))
    (cl:cons ':zgyro (zgyro msg))
    (cl:cons ':dist_front (dist_front msg))
    (cl:cons ':dist_rear (dist_rear msg))
    (cl:cons ':dist_side (dist_side msg))
    (cl:cons ':odom (odom msg))
    (cl:cons ':odom_accumulated (odom_accumulated msg))
    (cl:cons ':xmotion_front (xmotion_front msg))
    (cl:cons ':ymotion_front (ymotion_front msg))
    (cl:cons ':xmotion_rear (xmotion_rear msg))
    (cl:cons ':ymotion_rear (ymotion_rear msg))
    (cl:cons ':motion_front_quality (motion_front_quality msg))
    (cl:cons ':motion_rear_quality (motion_rear_quality msg))
    (cl:cons ':current_motor (current_motor msg))
    (cl:cons ':current_servo_front (current_servo_front msg))
    (cl:cons ':current_servo_rear (current_servo_rear msg))
    (cl:cons ':current_total (current_total msg))
    (cl:cons ':pwm_servo_front (pwm_servo_front msg))
    (cl:cons ':pwm_servo_rear (pwm_servo_rear msg))
    (cl:cons ':battery_voltage (battery_voltage msg))
    (cl:cons ':remote_control (remote_control msg))
    (cl:cons ':drive_mode (drive_mode msg))
))
