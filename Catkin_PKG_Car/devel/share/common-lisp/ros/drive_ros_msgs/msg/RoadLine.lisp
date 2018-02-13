; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude RoadLine.msg.html

(cl:defclass <RoadLine> (roslisp-msg-protocol:ros-message)
  ((points
    :reader points
    :initarg :points
    :type (cl:vector geometry_msgs-msg:PointStamped)
   :initform (cl:make-array 0 :element-type 'geometry_msgs-msg:PointStamped :initial-element (cl:make-instance 'geometry_msgs-msg:PointStamped)))
   (lineType
    :reader lineType
    :initarg :lineType
    :type cl:fixnum
    :initform 0))
)

(cl:defclass RoadLine (<RoadLine>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RoadLine>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RoadLine)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<RoadLine> is deprecated: use drive_ros_msgs-msg:RoadLine instead.")))

(cl:ensure-generic-function 'points-val :lambda-list '(m))
(cl:defmethod points-val ((m <RoadLine>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:points-val is deprecated.  Use drive_ros_msgs-msg:points instead.")
  (points m))

(cl:ensure-generic-function 'lineType-val :lambda-list '(m))
(cl:defmethod lineType-val ((m <RoadLine>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:lineType-val is deprecated.  Use drive_ros_msgs-msg:lineType instead.")
  (lineType m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<RoadLine>)))
    "Constants for message type '<RoadLine>"
  '((:UNKNOWN . 0)
    (:LEFT . 1)
    (:MIDDLE . 2)
    (:RIGHT . 3))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'RoadLine)))
    "Constants for message type 'RoadLine"
  '((:UNKNOWN . 0)
    (:LEFT . 1)
    (:MIDDLE . 2)
    (:RIGHT . 3))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RoadLine>) ostream)
  "Serializes a message object of type '<RoadLine>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'points))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'points))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'lineType)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RoadLine>) istream)
  "Deserializes a message object of type '<RoadLine>"
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
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'lineType)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RoadLine>)))
  "Returns string type for a message object of type '<RoadLine>"
  "drive_ros_msgs/RoadLine")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RoadLine)))
  "Returns string type for a message object of type 'RoadLine"
  "drive_ros_msgs/RoadLine")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RoadLine>)))
  "Returns md5sum for a message object of type '<RoadLine>"
  "372f68ca7096e5f6db8beda284620015")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RoadLine)))
  "Returns md5sum for a message object of type 'RoadLine"
  "372f68ca7096e5f6db8beda284620015")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RoadLine>)))
  "Returns full string definition for message of type '<RoadLine>"
  (cl:format cl:nil "# line points~%geometry_msgs/PointStamped[] points~%~%# type of line~%uint8 UNKNOWN=0~%uint8 LEFT=1~%uint8 MIDDLE=2~%uint8 RIGHT = 3~%~%uint8 lineType~%~%================================================================================~%MSG: geometry_msgs/PointStamped~%# This represents a Point with reference coordinate frame and timestamp~%Header header~%Point point~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RoadLine)))
  "Returns full string definition for message of type 'RoadLine"
  (cl:format cl:nil "# line points~%geometry_msgs/PointStamped[] points~%~%# type of line~%uint8 UNKNOWN=0~%uint8 LEFT=1~%uint8 MIDDLE=2~%uint8 RIGHT = 3~%~%uint8 lineType~%~%================================================================================~%MSG: geometry_msgs/PointStamped~%# This represents a Point with reference coordinate frame and timestamp~%Header header~%Point point~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RoadLine>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'points) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RoadLine>))
  "Converts a ROS message object to a list"
  (cl:list 'RoadLine
    (cl:cons ':points (points msg))
    (cl:cons ':lineType (lineType msg))
))
