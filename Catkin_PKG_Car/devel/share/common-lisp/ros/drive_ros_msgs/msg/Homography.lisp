; Auto-generated. Do not edit!


(cl:in-package drive_ros_msgs-msg)


;//! \htmlinclude Homography.msg.html

(cl:defclass <Homography> (roslisp-msg-protocol:ros-message)
  ((world2cam
    :reader world2cam
    :initarg :world2cam
    :type std_msgs-msg:Float64MultiArray
    :initform (cl:make-instance 'std_msgs-msg:Float64MultiArray))
   (cam2world
    :reader cam2world
    :initarg :cam2world
    :type std_msgs-msg:Float64MultiArray
    :initform (cl:make-instance 'std_msgs-msg:Float64MultiArray)))
)

(cl:defclass Homography (<Homography>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Homography>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Homography)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name drive_ros_msgs-msg:<Homography> is deprecated: use drive_ros_msgs-msg:Homography instead.")))

(cl:ensure-generic-function 'world2cam-val :lambda-list '(m))
(cl:defmethod world2cam-val ((m <Homography>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:world2cam-val is deprecated.  Use drive_ros_msgs-msg:world2cam instead.")
  (world2cam m))

(cl:ensure-generic-function 'cam2world-val :lambda-list '(m))
(cl:defmethod cam2world-val ((m <Homography>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader drive_ros_msgs-msg:cam2world-val is deprecated.  Use drive_ros_msgs-msg:cam2world instead.")
  (cam2world m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Homography>) ostream)
  "Serializes a message object of type '<Homography>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'world2cam) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'cam2world) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Homography>) istream)
  "Deserializes a message object of type '<Homography>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'world2cam) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'cam2world) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Homography>)))
  "Returns string type for a message object of type '<Homography>"
  "drive_ros_msgs/Homography")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Homography)))
  "Returns string type for a message object of type 'Homography"
  "drive_ros_msgs/Homography")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Homography>)))
  "Returns md5sum for a message object of type '<Homography>"
  "b0a59e30c90c7be9d3ae607a62c4b1a6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Homography)))
  "Returns md5sum for a message object of type 'Homography"
  "b0a59e30c90c7be9d3ae607a62c4b1a6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Homography>)))
  "Returns full string definition for message of type '<Homography>"
  (cl:format cl:nil "std_msgs/Float64MultiArray world2cam~%std_msgs/Float64MultiArray cam2world~%~%================================================================================~%MSG: std_msgs/Float64MultiArray~%# Please look at the MultiArrayLayout message definition for~%# documentation on all multiarrays.~%~%MultiArrayLayout  layout        # specification of data layout~%float64[]         data          # array of data~%~%~%================================================================================~%MSG: std_msgs/MultiArrayLayout~%# The multiarray declares a generic multi-dimensional array of a~%# particular data type.  Dimensions are ordered from outer most~%# to inner most.~%~%MultiArrayDimension[] dim # Array of dimension properties~%uint32 data_offset        # padding elements at front of data~%~%# Accessors should ALWAYS be written in terms of dimension stride~%# and specified outer-most dimension first.~%# ~%# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]~%#~%# A standard, 3-channel 640x480 image with interleaved color channels~%# would be specified as:~%#~%# dim[0].label  = \"height\"~%# dim[0].size   = 480~%# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)~%# dim[1].label  = \"width\"~%# dim[1].size   = 640~%# dim[1].stride = 3*640 = 1920~%# dim[2].label  = \"channel\"~%# dim[2].size   = 3~%# dim[2].stride = 3~%#~%# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.~%~%================================================================================~%MSG: std_msgs/MultiArrayDimension~%string label   # label of given dimension~%uint32 size    # size of given dimension (in type units)~%uint32 stride  # stride of given dimension~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Homography)))
  "Returns full string definition for message of type 'Homography"
  (cl:format cl:nil "std_msgs/Float64MultiArray world2cam~%std_msgs/Float64MultiArray cam2world~%~%================================================================================~%MSG: std_msgs/Float64MultiArray~%# Please look at the MultiArrayLayout message definition for~%# documentation on all multiarrays.~%~%MultiArrayLayout  layout        # specification of data layout~%float64[]         data          # array of data~%~%~%================================================================================~%MSG: std_msgs/MultiArrayLayout~%# The multiarray declares a generic multi-dimensional array of a~%# particular data type.  Dimensions are ordered from outer most~%# to inner most.~%~%MultiArrayDimension[] dim # Array of dimension properties~%uint32 data_offset        # padding elements at front of data~%~%# Accessors should ALWAYS be written in terms of dimension stride~%# and specified outer-most dimension first.~%# ~%# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]~%#~%# A standard, 3-channel 640x480 image with interleaved color channels~%# would be specified as:~%#~%# dim[0].label  = \"height\"~%# dim[0].size   = 480~%# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)~%# dim[1].label  = \"width\"~%# dim[1].size   = 640~%# dim[1].stride = 3*640 = 1920~%# dim[2].label  = \"channel\"~%# dim[2].size   = 3~%# dim[2].stride = 3~%#~%# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.~%~%================================================================================~%MSG: std_msgs/MultiArrayDimension~%string label   # label of given dimension~%uint32 size    # size of given dimension (in type units)~%uint32 stride  # stride of given dimension~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Homography>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'world2cam))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'cam2world))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Homography>))
  "Converts a ROS message object to a list"
  (cl:list 'Homography
    (cl:cons ':world2cam (world2cam msg))
    (cl:cons ':cam2world (cam2world msg))
))
