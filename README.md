Air Quality Sensor
by: Aadi Padmawar

This project contains code for the Arduino which will collect the air particle count. This also contains C++ code which stores the air particle count in the object AirParticles. The newly created AirParticles objects then can be stored in the AirParticleCollection object then to calculate different statistics about the data.


Getting Started

Prerequisites
You need to have C++ installed on your computer.

Installing
You need to go to terminal and go to the location of the C++ file
Next type in: g++ -o AirDriver AirDriver.cpp
press Enter
Next type: ./AirDriver
press Enter

The Output should look like this:
15 PPM	17 PPM	16 PPM	14 PPM	14 PPM
avg = 15.200000PPM
max = 17PPM
min = 14PPM
15 PPM	17 PPM	16 PPM	14 PPM	14 PPM	23 PPM	9 PPM
9 PPM	14 PPM	14 PPM	15 PPM	16 PPM	17 PPM	23 PPM
15 PPM 
