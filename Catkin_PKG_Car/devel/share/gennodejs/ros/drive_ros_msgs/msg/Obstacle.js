// Auto-generated. Do not edit!

// (in-package drive_ros_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let geometry_msgs = _finder('geometry_msgs');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class Obstacle {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.obstacle_type = null;
      this.polygon = null;
      this.width = null;
      this.trust = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('obstacle_type')) {
        this.obstacle_type = initObj.obstacle_type
      }
      else {
        this.obstacle_type = 0;
      }
      if (initObj.hasOwnProperty('polygon')) {
        this.polygon = initObj.polygon
      }
      else {
        this.polygon = new geometry_msgs.msg.Polygon();
      }
      if (initObj.hasOwnProperty('width')) {
        this.width = initObj.width
      }
      else {
        this.width = 0.0;
      }
      if (initObj.hasOwnProperty('trust')) {
        this.trust = initObj.trust
      }
      else {
        this.trust = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Obstacle
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [obstacle_type]
    bufferOffset = _serializer.uint8(obj.obstacle_type, buffer, bufferOffset);
    // Serialize message field [polygon]
    bufferOffset = geometry_msgs.msg.Polygon.serialize(obj.polygon, buffer, bufferOffset);
    // Serialize message field [width]
    bufferOffset = _serializer.float32(obj.width, buffer, bufferOffset);
    // Serialize message field [trust]
    bufferOffset = _serializer.float32(obj.trust, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Obstacle
    let len;
    let data = new Obstacle(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [obstacle_type]
    data.obstacle_type = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [polygon]
    data.polygon = geometry_msgs.msg.Polygon.deserialize(buffer, bufferOffset);
    // Deserialize message field [width]
    data.width = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [trust]
    data.trust = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += geometry_msgs.msg.Polygon.getMessageSize(object.polygon);
    return length + 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'drive_ros_msgs/Obstacle';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '54fd7294dc0ef4063e3d924c0d95b221';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    # possible obstacle types
    uint8 TYPE_GENERIC = 0
    uint8 TYPE_CAMERA = 1
    uint8 TYPE_LIDAR = 2
    uint8 obstacle_type
    geometry_msgs/Polygon polygon
    float32 width
    float32 trust
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Polygon
    #A specification of a polygon where the first and last points are assumed to be connected
    Point32[] points
    
    ================================================================================
    MSG: geometry_msgs/Point32
    # This contains the position of a point in free space(with 32 bits of precision).
    # It is recommeded to use Point wherever possible instead of Point32.  
    # 
    # This recommendation is to promote interoperability.  
    #
    # This message is designed to take up less space when sending
    # lots of points at once, as in the case of a PointCloud.  
    
    float32 x
    float32 y
    float32 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Obstacle(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.obstacle_type !== undefined) {
      resolved.obstacle_type = msg.obstacle_type;
    }
    else {
      resolved.obstacle_type = 0
    }

    if (msg.polygon !== undefined) {
      resolved.polygon = geometry_msgs.msg.Polygon.Resolve(msg.polygon)
    }
    else {
      resolved.polygon = new geometry_msgs.msg.Polygon()
    }

    if (msg.width !== undefined) {
      resolved.width = msg.width;
    }
    else {
      resolved.width = 0.0
    }

    if (msg.trust !== undefined) {
      resolved.trust = msg.trust;
    }
    else {
      resolved.trust = 0.0
    }

    return resolved;
    }
};

// Constants for message
Obstacle.Constants = {
  TYPE_GENERIC: 0,
  TYPE_CAMERA: 1,
  TYPE_LIDAR: 2,
}

module.exports = Obstacle;
