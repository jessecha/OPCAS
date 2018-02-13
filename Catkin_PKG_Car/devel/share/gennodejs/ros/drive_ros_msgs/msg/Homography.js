// Auto-generated. Do not edit!

// (in-package drive_ros_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class Homography {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.world2cam = null;
      this.cam2world = null;
    }
    else {
      if (initObj.hasOwnProperty('world2cam')) {
        this.world2cam = initObj.world2cam
      }
      else {
        this.world2cam = new std_msgs.msg.Float64MultiArray();
      }
      if (initObj.hasOwnProperty('cam2world')) {
        this.cam2world = initObj.cam2world
      }
      else {
        this.cam2world = new std_msgs.msg.Float64MultiArray();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Homography
    // Serialize message field [world2cam]
    bufferOffset = std_msgs.msg.Float64MultiArray.serialize(obj.world2cam, buffer, bufferOffset);
    // Serialize message field [cam2world]
    bufferOffset = std_msgs.msg.Float64MultiArray.serialize(obj.cam2world, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Homography
    let len;
    let data = new Homography(null);
    // Deserialize message field [world2cam]
    data.world2cam = std_msgs.msg.Float64MultiArray.deserialize(buffer, bufferOffset);
    // Deserialize message field [cam2world]
    data.cam2world = std_msgs.msg.Float64MultiArray.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Float64MultiArray.getMessageSize(object.world2cam);
    length += std_msgs.msg.Float64MultiArray.getMessageSize(object.cam2world);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/Homography';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b0a59e30c90c7be9d3ae607a62c4b1a6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Float64MultiArray world2cam
    std_msgs/Float64MultiArray cam2world
    
    ================================================================================
    MSG: std_msgs/Float64MultiArray
    # Please look at the MultiArrayLayout message definition for
    # documentation on all multiarrays.
    
    MultiArrayLayout  layout        # specification of data layout
    float64[]         data          # array of data
    
    
    ================================================================================
    MSG: std_msgs/MultiArrayLayout
    # The multiarray declares a generic multi-dimensional array of a
    # particular data type.  Dimensions are ordered from outer most
    # to inner most.
    
    MultiArrayDimension[] dim # Array of dimension properties
    uint32 data_offset        # padding elements at front of data
    
    # Accessors should ALWAYS be written in terms of dimension stride
    # and specified outer-most dimension first.
    # 
    # multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]
    #
    # A standard, 3-channel 640x480 image with interleaved color channels
    # would be specified as:
    #
    # dim[0].label  = "height"
    # dim[0].size   = 480
    # dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)
    # dim[1].label  = "width"
    # dim[1].size   = 640
    # dim[1].stride = 3*640 = 1920
    # dim[2].label  = "channel"
    # dim[2].size   = 3
    # dim[2].stride = 3
    #
    # multiarray(i,j,k) refers to the ith row, jth column, and kth channel.
    
    ================================================================================
    MSG: std_msgs/MultiArrayDimension
    string label   # label of given dimension
    uint32 size    # size of given dimension (in type units)
    uint32 stride  # stride of given dimension
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Homography(null);
    if (msg.world2cam !== undefined) {
      resolved.world2cam = std_msgs.msg.Float64MultiArray.Resolve(msg.world2cam)
    }
    else {
      resolved.world2cam = new std_msgs.msg.Float64MultiArray()
    }

    if (msg.cam2world !== undefined) {
      resolved.cam2world = std_msgs.msg.Float64MultiArray.Resolve(msg.cam2world)
    }
    else {
      resolved.cam2world = new std_msgs.msg.Float64MultiArray()
    }

    return resolved;
    }
};

module.exports = Homography;
