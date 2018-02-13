;; Auto-generated. Do not edit!


(when (boundp 'drive_ros_msgs::mav_cc16_CONFIG_PARAM_FLOAT)
  (if (not (find-package "DRIVE_ROS_MSGS"))
    (make-package "DRIVE_ROS_MSGS"))
  (shadow 'mav_cc16_CONFIG_PARAM_FLOAT (find-package "DRIVE_ROS_MSGS")))
(unless (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_PARAM_FLOAT")
  (make-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_PARAM_FLOAT"))

(in-package "ROS")
;;//! \htmlinclude mav_cc16_CONFIG_PARAM_FLOAT.msg.html


(intern "*ID*" (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_PARAM_FLOAT"))
(shadow '*ID* (find-package "DRIVE_ROS_MSGS::MAV_CC16_CONFIG_PARAM_FLOAT"))
(defconstant drive_ros_msgs::mav_cc16_CONFIG_PARAM_FLOAT::*ID* 199)
(defclass drive_ros_msgs::mav_cc16_CONFIG_PARAM_FLOAT
  :super ros::object
  :slots (_sysid _compid _config_id _param_id _name _value _default_value _min _max ))

(defmethod drive_ros_msgs::mav_cc16_CONFIG_PARAM_FLOAT
  (:init
   (&key
    ((:sysid __sysid) 0)
    ((:compid __compid) 0)
    ((:config_id __config_id) 0)
    ((:param_id __param_id) 0)
    ((:name __name) (make-array 30 :initial-element 0 :element-type :integer))
    ((:value __value) 0.0)
    ((:default_value __default_value) 0.0)
    ((:min __min) 0.0)
    ((:max __max) 0.0)
    )
   (send-super :init)
   (setq _sysid (round __sysid))
   (setq _compid (round __compid))
   (setq _config_id (round __config_id))
   (setq _param_id (round __param_id))
   (setq _name __name)
   (setq _value (float __value))
   (setq _default_value (float __default_value))
   (setq _min (float __min))
   (setq _max (float __max))
   self)
  (:sysid
   (&optional __sysid)
   (if __sysid (setq _sysid __sysid)) _sysid)
  (:compid
   (&optional __compid)
   (if __compid (setq _compid __compid)) _compid)
  (:config_id
   (&optional __config_id)
   (if __config_id (setq _config_id __config_id)) _config_id)
  (:param_id
   (&optional __param_id)
   (if __param_id (setq _param_id __param_id)) _param_id)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:default_value
   (&optional __default_value)
   (if __default_value (setq _default_value __default_value)) _default_value)
  (:min
   (&optional __min)
   (if __min (setq _min __min)) _min)
  (:max
   (&optional __max)
   (if __max (setq _max __max)) _max)
  (:serialization-length
   ()
   (+
    ;; uint8 _sysid
    1
    ;; uint8 _compid
    1
    ;; uint8 _config_id
    1
    ;; uint8 _param_id
    1
    ;; char[30] _name
    (* 1    30)
    ;; float32 _value
    4
    ;; float32 _default_value
    4
    ;; float32 _min
    4
    ;; float32 _max
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _sysid
       (write-byte _sysid s)
     ;; uint8 _compid
       (write-byte _compid s)
     ;; uint8 _config_id
       (write-byte _config_id s)
     ;; uint8 _param_id
       (write-byte _param_id s)
     ;; char[30] _name
     (dotimes (i 30)
       (write-byte (elt _name i) s)
       )
     ;; float32 _value
       (sys::poke _value (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _default_value
       (sys::poke _default_value (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _min
       (sys::poke _min (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _max
       (sys::poke _max (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _sysid
     (setq _sysid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _compid
     (setq _compid (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _config_id
     (setq _config_id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _param_id
     (setq _param_id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; char[30] _name
   (dotimes (i (length _name))
     (setf (elt _name i) (sys::peek buf ptr- :char)) (incf ptr- 1)
     )
   ;; float32 _value
     (setq _value (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _default_value
     (setq _default_value (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _min
     (setq _min (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _max
     (setq _max (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get drive_ros_msgs::mav_cc16_CONFIG_PARAM_FLOAT :md5sum-) "741fdd8de6581857c65264e7de5761ef")
(setf (get drive_ros_msgs::mav_cc16_CONFIG_PARAM_FLOAT :datatype-) "drive_ros_msgs/mav_cc16_CONFIG_PARAM_FLOAT")
(setf (get drive_ros_msgs::mav_cc16_CONFIG_PARAM_FLOAT :definition-)
      "# Automatically Generated in 2017-06-12 22:33:47.453178
# MESSAGE: CONFIG_PARAM_FLOAT
# Description:Config parameter information for float param
uint8 ID = 199
uint8 sysid
uint8 compid

uint8 config_id         # ID of the configuration set
uint8 param_id          # ID of the configuration parameter within the config set
char[30] name           # Name of the configuration parameter
float32 value           # Current parameter value
float32 default_value   # Default parameter value
float32 min             # Minimum parameter value
float32 max             # Maximum parameter value

")



(provide :drive_ros_msgs/mav_cc16_CONFIG_PARAM_FLOAT "741fdd8de6581857c65264e7de5761ef")


