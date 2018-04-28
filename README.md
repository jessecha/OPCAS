 # DNRacing <br />
Welcome to the DNRacing Repo! This repository is for a scaled V2V autonomous motorsport project involving two 1:8 scale RC cars. All of the work was done with ROS Kinetic and Keras. The project build is written below. <br />

 # How-to-get-started <br />

<<**Hardware**>> <br />

The complete list of materials used for the car is listed below. <br />
**Computing Unit** <br />
    Nvidia Jetson TX2 Developer Board : The TX2 is futureproof, but the TX1 will also run the 3D_CNN architecture with 2 stacked images.    <br />
    Arduino Uno : Arudino Megas are also a good option.  <br />
**FPV RX/TX Interface** <br />
    Amimon Connex : I tried UDP wifi video streaming, but the latencies were too high. The wireless HDMI transmitter from Amimon Connex has no latency, but it is expensive. An analogy FPV TX/RX setup will also work for those who are on a budget. <br />
    Futaba RX/TX : The trainer port must have trainer/master mode capability for the PPM-to-USB (Compufly V2) cable to stream the signals back to the PC and receive commands from the steering wheel. <br />
**Sensors** <br />
    Ximea XiQ CMOS Camera with 1.8mm fisheye lens : Fish eye lens are highly recommended for a wide field of view (FOV). I mounted the cameras really high with a long mobile phone stand because I wanted a larger FOV.  <br />
**Chassis** <br />
    Vehicle #1: OFNA DM1-Spec E <br />
    Vehicle #2: Hong Nor X3-GT <br />
    *Note: The vehicles above were chosen because they were fast. However, other 1/10th scale RC cars with standard servos and ESCs will also work. <br />
**Drive Train**  <br />
    Tekin RX-8 ver.2 Electronic Speed Controller : High end ESCs are recommended for quality low speed control with brushless motors. Sensored motors are also highly recommended.  <br />
    11T Steel Pinion Gear & 48T Steel Spur Gear : Both the spur gears and pinion gears should be steel because plastic ones tend to chip off after prolonged use.  <br />
    TrackStar 2650Kv Brushless Motor  <br />
**PowerSupply** <br />
    GoalZero Sherpa 100 Battery Pack : Although it is possible to buy other alternative batteries, remember that they should at least carry a power output of 30W. <br />
    5000mAh 11.1v LiPo Battery Pack <br />
**Other** <br />
    USB 3.0 7-port Expansion Hub <br />	
    Logitech G25/G27/G29 : The G25 is the best choice if you are on a budget. <br />
    Compufly V2 USB-to-PPM USB Cable : This converts the Logitech Steering Wheel commands into PPM signals for the Futaba transmitters to read. <br />
    VRC-3NT PWM-to-USB USB Cable : This converts the PWM signals from a standard RC receiver into signals readable by the ROS joy pkg. <br />

<<**Software**>> <br />

First, make the ROS Catkin_PKG_Car package and solve any dependecy issues. The race_robot folder contains the launch file (sixthtest.launch) for data collection. To start collecting images while driving, type <br />
roslaunch race_robot sixthtest.launch <br />
The controller folder contains the G27/G29 joystick commands which will be recorded in the rosbag. To start recording the images and controll commands, type <br />
rosbag record controller controller_two camera/left/image_raw <br />


 # List of Folders <br />

  <**CNN_Model**> <br />
The end-to-end, behavioral cloning 3D CNN model uses a stack of images with specified jumps. <br />
data_preprocessing_v2.py processes the .csv file which contains throttle, steering, brake inputs correlated with the corresponding image. <br />
deploymodel.py deploys the keras model within ROS using the joy catkin package <br />
model.py contains the actual 3D CNN model implementation <br />
run_3d_cnn.py creates the 3D CNN model with the .csv file and the image folder <br />

  <**Catkin_PKG_Car**/src> <br />
This folder contains all the ROS catkin packages used by the DNRacing Car. <br />

  <**USBtoPPM**> <br />
This Java application is used to convert the USB HID commands sent from the Logitech G27 Steering Wheel into PPM signals.
 
  <**Useful_Tools**> <br />
usbfinder.sh is a script used to find all the usb serial devices connected to the PC. <br />
imageconverter.py is a script which converts the images obtained from the XiQ cameras. (e.g. Downsampling) <br />

  <**Past_Work**> <br />
This folder contains scripts used previously (e.g. for AHRS IMUs and MarvelMind IPS) which may be of some use. <br />


