  # DNRacing
This repository is for the scaled V2V autonomous motorsport project involving two 1:8 scale RC cars equipped with high speed USB3.0 Ximea XiQ CMOS Cameras on a Nvidia Jetson TX2. The cars are built on top of OFNA DM1-Spec-E and Hong Nor X3-GT chassis. Arduino Uno boards send PWM signals to the RC ESCs (Tekin RX8 v.2) and the servos used to steer the vehicle. The Jetson TX2s are powered by 120W Goal Zero Sherpa 100 battery packs. The camera videofeed is streamed with an Amimon Connex HDMI wireless transmitter, and the PPM radio control signals are transmitted with a Futaba TX/RX. The environment for deployment is within Linux Ubuntu 16.02.3 LTS and ROS Kinetic Kame. 

Current work involves the use of convolutional neural networks for a multi-agent end-to-end behavioral cloning-based racing architecture. <br />

  <**CNN_Model**> <br />
The end-to-end, behavioral cloning 3D CNN model uses a stack of images with specified jumps. <br />
data_preprocessing_v2.py processes the .csv file which contains throttle, steering, brake inputs correlated with the corresponding image. <br />
deploymodel.py deploys the keras model within ROS using the joy catkin package <br />
model.py contains the actual 3D CNN model implementation <br />
run_3d_cnn.py creates the 3D CNN model with the .csv file and the image folder <br />

  <**Catkin_PKG_Car**/src> <br />
This folder contains all the ROS catkin packages used by the DNRacing Car. <br />

  <**USBtoPPM**> <br />
This Java application is used to convert the USB HID commands sent from the Logitech G27 Steering Wheel & Quanum Head Tracker into PPM signals.
 
  <**Useful_Tools**> <br />
usbfinder.sh is a script used to find all the usb serial devices connected to the PC. <br />
imageconverter.py is a script which converts the images obtained from the XiQ cameras. (e.g. Downsampling) <br />

  <**Past_Work**> <br />
This folder contains scripts used previously (e.g. for AHRS IMUs and MarvelMind IPS) which may be of some use. <br />

  <**Hardware**> <br />
    **Computing Unit** <br />
    Nvidia Jetson TX2 Developer Board x2  <br />
    Arduino Uno x2 <br />
    Zotac Zbox EN970 (Discontinued) <br />
    Nvidia Jetson TX1 (Discontinued)  <br /> 
    **FPV RX/TX Interface** <br />
    Amimon Connex <br />
    Futaba RX/TX
    **Sensors** <br />
    Ximea XiQ CMOS Camera with 1.8mm fisheye lens x2 <br />
    MarvelMind Indoor Positioning System (Discontinued) <br />
    Hokuyo UST-10LX LIDAR (Discontinued) <br />
    Razor M0 AHRS Inertial Measurement Unit (Discontinued) <br />
    ZED Stereo Camera (Discontinued) <br />
    Occipital Structure IR Sensor (Discontinued) <br />
    **Chassis** <br />
    Vehicle #1: OFNA DM1-Spec E <br />
    Vehicle #2: Hong Nor X3-GT <br />
    **Drive Train**  <br />
    Electronic Speed Controller: Tekin RX-8 ver.2 x2 <br />
    Pinion Gear: 11T Steel x2 <br />
    Spur Gear: 48T Steel x2  <br />
    Motor: TrackStar 2650Kv Brushless Motor x2 <br />
    Tires: HPI Desert Buster 190/60 x8 (Future Work) <br />
    **PowerSupply** <br />
    GoalZero Sherpa 100 Battery Pack x2 <br />
    5000mAh 11.1v LiPo Battery Pack x2 <br />
