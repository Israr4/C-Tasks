#!/bin/sh

#shell script to run that code when we click on any button in flask created object
mkdir -p ~/mathpractice_new_ws/src
source /opt/ros/noetic/setup.bash
# source ~/mathpractice_ws/devel/setup.bash
cd ..
sudo cp -R ~/mathpractice_ws 
cd ~/mathpractice_new_ws/
catkin_make
catkin_make -DPYTHON_EXECUTABLE=/usr/bin/python3
source devel/setup.bash
# ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:~/mathpractcice_new_ws/
echo $ROS_PACKAGE_PATH

cd src
roscreate-pkg mathpractice roscpp visualization_msgs

cd mathpractice
rm -rf include 
rm -rf CMakeLists.txt

CMAKE_PATH=$PWD
cd src/
C_CODE_PATH=$PWD
echo ${C_CODE_PATH}

cd ../../..
cd devel/lib/
C_NEW_PATH=$PWD

cd ../..
pwd
cd ..

cd mathpractice_ws/src/mathpractice
cp CMakeLists.txt ${CMAKE_PATH}
cd src

cp bjb_sangjani_full.xodr ${C_CODE_PATH}
cp mathline.cpp ${C_CODE_PATH}
cp rosline.cpp ${C_CODE_PATH}
cp rosline.h ${C_CODE_PATH}
cp license.txt ${C_CODE_PATH}
cp manual.html ${C_CODE_PATH}
cp rapidxml.hpp ${C_CODE_PATH}
cp rapidxml_iterators.hpp ${C_CODE_PATH}
cp rapidxml_print.hpp ${C_CODE_PATH}
cp rapidxml_utils.hpp ${C_CODE_PATH}

cd ../../..

cd devel/lib/mathpractice
cp mathlines ${C_NEW_PATH}

cd ../../../..
pwd





cd mathpractice_new_ws
source devel/setup.bash

catkin_make 

# source ~/mathpractice_new_ws/devel/setup.bash
rosmake mathpractice

roscore &


cd devel/lib/
./mathlines &


sleep 1m 50s
rviz riviz -f my_frame
false



# SQL is used to communicate with databases, usually to Create, Update and Delete data entries.

# JSON provides a standardized object notation/structure to talk to web services.

