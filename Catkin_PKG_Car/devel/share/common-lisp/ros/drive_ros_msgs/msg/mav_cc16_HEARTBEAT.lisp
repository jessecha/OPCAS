; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude mav_cc16_HEARTBEAT.msg.html

(cl:defclass <mav_cc16_HEARTBEAT> (roslisp-msg-protocol:ros-message)
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
    :initform 0)
   (rc_velocity
    :reader rc_velocity
    :initarg :rc_velocity
    :type cl:float
    :initform 0.0)
   (rc_steering_front
    :reader rc_steering_front
    :initarg :rc_steering_front
    :type cl:float
    :initform 0.0)
   (rc_steering_rear
    :reader rc_steering_rear
    :initarg :rc_steering_rear
    :type cl:float
    :initform 0.0))
)

(cl:defclass mav_cc16_HEARTBEAT (<mav_cc16_HEARTBEAT>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mav_cc16_HEARTBEAT>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mav_cc16_HEARTBEAT)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<mav_cc16_HEARTBEAT> is deprecated: use drive_ros_msgs-msg:mav_cc16_HEARTBEAT instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <mav_cc16_HEARTBEAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:header-val is deprecated.  Use drive_ros_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'sysid-val :lambda-list '(m))
(cl:defmethod sysid-val ((m <mav_cc16_HEARTBEAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:sysid-val is deprecated.  Use drive_ros_msgs-msg:sysid instead.")
  (sysid m))

(cl:ensure-generic-function 'compid-val :lambda-list '(m))
(cl:defmethod compid-val ((m <mav_cc16_HEARTBEAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:compid-val is deprecated.  Use drive_ros_msgs-msg:compid instead.")
  (compid m))

(cl:ensure-generic-function 'battery_voltage-val :lambda-list '(m))
(cl:defmethod battery_voltage-val ((m <mav_cc16_HEARTBEAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:battery_voltage-val is deprecated.  Use drive_ros_msgs-msg:battery_voltage instead.")
  (battery_voltage m))

(cl:ensure-generic-function 'remote_control-val :lambda-list '(m))
(cl:defmethod remote_control-val ((m <mav_cc16_HEARTBEAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:remote_control-val is deprecated.  Use drive_ros_msgs-msg:remote_control instead.")
  (remote_control m))

(cl:ensure-generic-function 'drive_mode-val :lambda-list '(m))
(cl:defmethod drive_mode-val ((m <mav_cc16_HEARTBEAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:drive_mode-val is deprecated.  Use drive_ros_msgs-msg:drive_mode instead.")
  (drive_mode m))

(cl:ensure-generic-function 'rc_velocity-val :lambda-list '(m))
(cl:defmethod rc_velocity-val ((m <mav_cc16_HEARTBEAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:rc_velocity-val is deprecated.  Use drive_ros_msgs-msg:rc_velocity instead.")
  (rc_velocity m))

(cl:ensure-generic-function 'rc_steering_front-val :lambda-list '(m))
(cl:defmethod rc_steering_front-val ((m <mav_cc16_HEARTBEAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:rc_steering_front-val is deprecated.  Use drive_ros_msgs-msg:rc_steering_front instead.")
  (rc_steering_front m))

(cl:ensure-generic-function 'rc_steering_rear-val :lambda-list '(m))
(cl:defmethod rc_steering_rear-val ((m <mav_cc16_HEARTBEAT>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:rc_steering_rear-val is deprecated.  Use drive_ros_msgs-msg:rc_steering_rear instead.")
  (rc_steering_rear m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mav_cc16_HEARTBEAT>)))
    "Constants for message type '<mav_cc16_HEARTBEAT>"
  '((:ID . 1)
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
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mav_cc16_HEARTBEAT)))
    "Constants for message type 'mav_cc16_HEARTBEAT"
  '((:ID . 1)
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
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mav_cc16_HEARTBEAT>) ostream)
  "Serializes a message object of type '<mav_cc16_HEARTBEAT>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'battery_voltage)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'battery_voltage)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'remote_control)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'drive_mode)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'rc_velocity))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'rc_steering_front))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'rc_steering_rear))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mav_cc16_HEARTBEAT>) istream)
  "Deserializes a message object of type '<mav_cc16_HEARTBEAT>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sysid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'compid)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'battery_voltage)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'battery_voltage)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'remote_control)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'drive_mode)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'rc_velocity) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'rc_steering_front) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'rc_steering_rear) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mav_cc16_HEARTBEAT>)))
  "Returns string type for a message object of type '<mav_cc16_HEARTBEAT>"
  "drive_ros_msgs/mav_cc16_HEARTBEAT")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mav_cc16_HEARTBEAT)))
  "Returns string type for a message object of type 'mav_cc16_HEARTBEAT"
  "drive_ros_msgs/mav_cc16_HEARTBEAT")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mav_cc16_HEARTBEAT>)))
  "Returns md5sum for a message object of type '<mav_cc16_HEARTBEAT>"
  "7f0c43a59dc6fe6c5ede5ec59a47ab1b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mav_cc16_HEARTBEAT)))
  "Returns md5sum for a message object of type 'mav_cc16_HEARTBEAT"
  "7f0c43a59dc6fe6c5ede5ec59a47ab1b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mav_cc16_HEARTBEAT>)))
  "Returns full string definition for message of type '<mav_cc16_HEARTBEAT>"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452693~%# MESSAGE: HEARTBEAT~%# Description:Heartbeat status message~%Header header~%~%uint8 ID = 1~%uint8 sysid~%uint8 compid~%~%uint16 battery_voltage      # Battery voltage, in millivolts (1 = 1 millivolt)~%uint8 remote_control        # Remote Control status (see REMOTE_CONTROL_STATUS ENUM)~%uint8 drive_mode            # Selected drive mode (see DRIVE_MODE ENUM)~%float32 rc_velocity         # Velocity set by remote control [m/s]~%float32 rc_steering_front   # Front steering angle set by remote control [rad]~%float32 rc_steering_rear    # Rear steering angle set by remote control [rad]~%~%uint8 REMOTE_CONTROL_STATUS_DISCONNECTED = 0     # Remote Control is not connected to the system~%uint8 REMOTE_CONTROL_STATUS_CONNECTED = 1        # Remote Control connection is established~%uint8 REMOTE_CONTROL_STATUS_AUTONOMOUS = 2       # Remote Control is connected and under active control~%uint8 REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS = 3  # Remote Control is connected and under active control~%uint8 REMOTE_CONTROL_STATUS_MANUAL = 4           # Remote Control is connected and under active control~%~%~%uint8 DRIVE_MODE_TRACK = 0              # Track (excluding obstacles)~%uint8 DRIVE_MODE_TRACK_OBSTACLES = 1    # Track including obstacles~%uint8 DRIVE_MODE_PARKING = 2            # Parking mode~%uint8 DRIVE_MODE_IDLE = 3               # Idle mode~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mav_cc16_HEARTBEAT)))
  "Returns full string definition for message of type 'mav_cc16_HEARTBEAT"
  (cl:format cl:nil "# Automatically Generated in 2017-06-12 22:33:47.452693~%# MESSAGE: HEARTBEAT~%# Description:Heartbeat status message~%Header header~%~%uint8 ID = 1~%uint8 sysid~%uint8 compid~%~%uint16 battery_voltage      # Battery voltage, in millivolts (1 = 1 millivolt)~%uint8 remote_control        # Remote Control status (see REMOTE_CONTROL_STATUS ENUM)~%uint8 drive_mode            # Selected drive mode (see DRIVE_MODE ENUM)~%float32 rc_velocity         # Velocity set by remote control [m/s]~%float32 rc_steering_front   # Front steering angle set by remote control [rad]~%float32 rc_steering_rear    # Rear steering angle set by remote control [rad]~%~%uint8 REMOTE_CONTROL_STATUS_DISCONNECTED = 0     # Remote Control is not connected to the system~%uint8 REMOTE_CONTROL_STATUS_CONNECTED = 1        # Remote Control connection is established~%uint8 REMOTE_CONTROL_STATUS_AUTONOMOUS = 2       # Remote Control is connected and under active control~%uint8 REMOTE_CONTROL_STATUS_SEMI_AUTONOMOUS = 3  # Remote Control is connected and under active control~%uint8 REMOTE_CONTROL_STATUS_MANUAL = 4           # Remote Control is connected and under active control~%~%~%uint8 DRIVE_MODE_TRACK = 0              # Track (excluding obstacles)~%uint8 DRIVE_MODE_TRACK_OBSTACLES = 1    # Track including obstacles~%uint8 DRIVE_MODE_PARKING = 2            # Parking mode~%uint8 DRIVE_MODE_IDLE = 3               # Idle mode~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mav_cc16_HEARTBEAT>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     2
     1
     1
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mav_cc16_HEARTBEAT>))
  "Converts a ROS message object to a list"
  (cl:list 'mav_cc16_HEARTBEAT
    (cl:cons ':header (header msg))
    (cl:cons ':sysid (sysid msg))
    (cl:cons ':compid (compid msg))
    (cl:cons ':battery_voltage (battery_voltage msg))
    (cl:cons ':remote_control (remote_control msg))
    (cl:cons ':drive_mode (drive_mode msg))
    (cl:cons ':rc_velocity (rc_velocity msg))
    (cl:cons ':rc_steering_front (rc_steering_front msg))
    (cl:cons ':rc_steering_rear (rc_steering_rear msg))
))
