  # DNRacing
This repository is for the scaled V2V autonomous motorsport project involving two 1:8 scale RC cars equipped with Ximea XiQ Cameras on a Nvidia Jetson TX2. The cars are built on top of OFNA DM1-SpecE and Hong Nor X3-GT chassis. Arduino Uno boards send PWM signals to the RC ESCs (Tekin RX8 v.2) and the Jetson TX2s are powered by 120W Goal Zero Sherpa 100 battery packs. The environment for deployment is Linux Ubuntu 16.02.3 LTS and ROS Kinetic Kame. 

Current work involves the use of 3D CNN for an end-to-end behavioral cloning-based racing architecture. 

  <Folder: 3D_CNN_Model>
The end-to-end, behavioral cloning 3D CNN model uses a stack of images with specified jumps. 
data_preprocessing_v2.py processes the .csv file which contains throttle, steering, brake inputs correlated with the corresponding image.
deploymodel.py deploys the keras model within ROS using the joy catkin package
model.py contains the actual 3D CNN model implementation
run_3d_cnn.py creates the 3D CNN model with the .csv file and the image folder

  <Folders: Catkin_PKG_Master/src>
This folder contains all the ROS catkin packages used by the Host PC (PC that has the Logitech G27 steering wheel).
bag_converter contains the roslaunch script used to create the image folder and the image .csv file from the recorded rosbag.
dnracing_host contains the launch file used on the Host PC for training and deployment
joy contains the catkin pkg which interfaces ROS with the Logitech G27 steering wheel.
joytwo is the second joy pkg for the second vehicle
rosbag_to_csv contains the roslaunch script used to create the steering wheel .csv file from the recorded rosbag.

  <Folder: Useful_Tools>
usbfinder.sh is a script used to find all the usb serial devices connected to the PC.
imageconverter.py is a script which converts the images obtained from the XiQ cameras. (e.g. Downsampling)

  <Folder: Past_Work>
This folder contains scripts used previously (e.g. for AHRS IMUs and MarvelMind IPS) which may be of some use. 
