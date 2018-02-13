; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude RoadLane.msg.html

(cl:defclass <RoadLane> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (points
    :reader points
    :initarg :points
    :type (cl:vector geometry_msgs-msg:PointStamped)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:PointStamped :initial-element (cl:make-instance 'geometry_msgs-msg:PointStamped)))
   (roadStateType
    :reader roadStateType
    :initarg :roadStateType
    :type cl:fixnum
    :initform 0))
)

(cl:defclass RoadLane (<RoadLane>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RoadLane>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RoadLane)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<RoadLane> is deprecated: use drive_ros_msgs-msg:RoadLane instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <RoadLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:header-val is deprecated.  Use drive_ros_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'points-val :lambda-list '(m))
(cl:defmethod points-val ((m <RoadLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:points-val is deprecated.  Use drive_ros_msgs-msg:points instead.")
  (points m))

(cl:ensure-generic-function 'roadStateType-val :lambda-list '(m))
(cl:defmethod roadStateType-val ((m <RoadLane>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:roadStateType-val is deprecated.  Use drive_ros_msgs-msg:roadStateType instead.")
  (roadStateType m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<RoadLane>)))
    "Constants for message type '<RoadLane>"
  '((:UNKNOWN . 0)
    (:STRAIGHT . 1)
    (:STRAIGHT_CURVE . 2)
    (:CURVE . 3))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'RoadLane)))
    "Constants for message type 'RoadLane"
  '((:UNKNOWN . 0)
    (:STRAIGHT . 1)
    (:STRAIGHT_CURVE . 2)
    (:CURVE . 3))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RoadLane>) ostream)
  "Serializes a message object of type '<RoadLane>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'points))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'points))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'roadStateType)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RoadLane>) istream)
  "Deserializes a message object of type '<RoadLane>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'points) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'points)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'geometry_msgs-msg:PointStamped))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'roadStateType)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RoadLane>)))
  "Returns string type for a message object of type '<RoadLane>"
  "drive_ros_msgs/RoadLane")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RoadLane)))
  "Returns string type for a message object of type 'RoadLane"
  "drive_ros_msgs/RoadLane")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RoadLane>)))
  "Returns md5sum for a message object of type '<RoadLane>"
  "05cb982bf8b1f912f4a91cbf36ba54b0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RoadLane)))
  "Returns md5sum for a message object of type 'RoadLane"
  "05cb982bf8b1f912f4a91cbf36ba54b0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RoadLane>)))
  "Returns full string definition for message of type '<RoadLane>"
  (cl:format cl:nil "#Port of RoadLane from LMS:~%Header header~%# lane points~%geometry_msgs/PointStamped[] points~%# type of lane~%uint8 UNKNOWN=0~%uint8 STRAIGHT=1~%uint8 STRAIGHT_CURVE=2~%uint8 CURVE = 3~%uint8 roadStateType~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/PointStamped~%# This represents a Point with reference coordinate frame and timestamp~%Header header~%Point point~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RoadLane)))
  "Returns full string definition for message of type 'RoadLane"
  (cl:format cl:nil "#Port of RoadLane from LMS:~%Header header~%# lane points~%geometry_msgs/PointStamped[] points~%# type of lane~%uint8 UNKNOWN=0~%uint8 STRAIGHT=1~%uint8 STRAIGHT_CURVE=2~%uint8 CURVE = 3~%uint8 roadStateType~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/PointStamped~%# This represents a Point with reference coordinate frame and timestamp~%Header header~%Point point~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RoadLane>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'points) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RoadLane>))
  "Converts a ROS message object to a list"
  (cl:list 'RoadLane
    (cl:cons ':header (header msg))
    (cl:cons ':points (points msg))
    (cl:cons ':roadStateType (roadStateType msg))
))
