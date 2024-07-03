# Smart Temperature Regulation with IoT and Image Processing

## Project Overview
This project aims to create an automated temperature regulation system using IoT and image processing. The system is designed to control air conditioners (ACs) by detecting the number of people in a room and adjusting the temperature accordingly. This approach helps in reducing electricity consumption, minimizing the carbon footprint, and extending the lifespan of AC units.

## Table of Contents
1. [Introduction](#introduction)
2. [Aim](#aim)
3. [Objective](#objective)
4. [Benefits](#benefits)
5. [Sensors and Actuators](#sensors-and-actuators)
6. [Working Model of All Sensors](#working-model-of-all-sensors)
7. [Proposed Architecture](#proposed-architecture)
8. [Hardware/Software Implementation](#hardware-and-software-implementation)
9. [Results and Discussion](#results-and-discussion)
10. [Conclusion](#conclusion)

## Introduction
Air conditioners are essential for maintaining thermal comfort in indoor environments, particularly in regions with extreme temperatures. However, traditional methods of controlling ACs often result in excessive energy consumption and increased electricity bills. This project proposes a smart temperature regulation system that uses image processing and IoT to optimize AC usage based on the number of people present in a room.

## Aim
The aim of this project is to develop an automated temperature regulation system that leverages image processing and a deep learning model to control the AC, ensuring optimal temperature based on room occupancy. This approach aims to reduce electricity consumption and the associated carbon footprint while maintaining user comfort.

## Objective
The primary objective is to use a deep learning model to interpret the number of people in a room and communicate this information to an Arduino. The Arduino then adjusts the AC settings based on the detected occupancy. This system ensures efficient temperature regulation and AC usage.

## Benefits
- **Automated Temperature Control:** Automatically adjusts temperature settings based on room occupancy, eliminating the need for manual adjustments.
- **Energy Savings:** Reduces energy consumption by optimizing AC usage, leading to lower electricity bills.
- **Minimized Hardware Use:** Utilizes existing CCTV infrastructure for image processing, reducing the need for additional hardware.
- **Extended AC Lifespan:** Prevents continuous operation at fixed temperatures, reducing wear and tear on AC components.

## Sensors and Actuators
- **Arduino Uno:** An open-source microcontroller board used for interfacing with various sensors and actuators.
- **CMOS Sensor:** Converts photons to electrons for digital processing, commonly used in digital cameras and CCTV cameras.
- **Transistor NPN:** Used as an amplifier to enhance signal strength for the AC receiver.
- **IR Transmitter (Actuator):** Emits infrared radiation to communicate with the AC unit.
- **IR Receiver (SM0038):** Receives infrared signals and operates at a frequency of 37.9 KHz.

## Working Model of All Sensors
- **IR Sensors:** Consist of an IR LED (emitter) and an IR photodiode (detector). The photodiode's resistance and output voltage change based on the received IR light.
- **Transistor:** Amplifies weak signals to ensure reliable communication with the AC receiver.

## Proposed Architecture
The system captures IR codes from the AC remote using IR sensors. These codes are then used by the IR transmitter to mimic the remote control. A Yolo V3 object detection model processes CCTV footage to detect and count the number of people in a room. This information is sent to the Arduino, which adjusts the AC settings accordingly.

## Hardware and Software Implementation
The YOLO (You Only Look Once) algorithm uses convolutional neural networks (CNN) for real-time object detection. The algorithm processes images in real-time and predicts bounding boxes and class probabilities. For this project, the YOLO model detects people in CCTV footage and communicates occupancy information to the Arduino for AC control.

## Results and Discussion
The system effectively regulates room temperature based on occupancy, demonstrating significant energy savings and improved user comfort. Detailed results and discussions are presented in the report.

## Conclusion
The smart temperature regulation system successfully integrates IoT and image processing to optimize AC usage. It offers a cost-effective and energy-efficient solution for maintaining thermal comfort in indoor environments.
