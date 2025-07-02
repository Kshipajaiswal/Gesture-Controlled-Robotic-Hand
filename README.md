# Gesture-Controlled-Robotic-Hand
This project presents a low-cost, Arduino-based robotic hand that replicates human hand movements using flex sensors. The hand mimics finger gestures in real-time using servo motors and serves as a basis for prosthetic applications, remote control systems, and educational robotics.

## Table of Contents

1. [Introduction](#introduction)  
2. [Objectives](#objectives)  
3. [Tools & Technologies](#tools-&-technologies)  
4. [System Overview](#system-overview)  
5. [Methodology](#methodology)  
6. [Results & Observations](#results-&-observations)  
7. [Future Scope](#future-scope)  
8. [References](#references)  
9. [Author](#author)


## Introduction

This project explores the development of a robotic hand that replicates human finger movement using flex sensors and servo motors, controlled via an Arduino UNO. It is designed to help in applications where human intervention is difficult, such as hazardous environments, prosthetics, and industrial robotics.

The robotic hand is mounted with servo motors—one for each finger—and is controlled by bending the fingers on a glove fitted with flex sensors. The system reads flex values, converts them to angles, and actuates the corresponding servos to match human hand motion.


## Objectives

- Design a glove with integrated flex sensors to detect human finger motion.  
- Build a robotic hand using servo motors to mimic that motion.  
- Interface the system using Arduino UNO for real-time control.  
- Test accuracy and responsiveness in real-time conditions.  


## Tools & Technologies

- **Arduino UNO** – Microcontroller for controlling the robotic hand.  
- **Flex Sensors** – Detect finger bending on a glove.  
- **Servo Motors (x5)** – Drive each finger of the robotic hand.  
- **Jumper Wires & Breadboard** – For circuit setup.  
- **Glove** – Worn on hand to carry the sensors.  
- **PLA or Foamboard** – Used to fabricate the robotic hand frame.  


## System Overview

### Hardware Setup:
- Each finger has one flex sensor on the glove.  
- Arduino reads analog values from each sensor.  
- Servo motors are connected to digital PWM pins.  
- Each servo is assigned to a finger on the robotic hand.  

### Working Principle:
1. Flex sensor bends → resistance changes  
2. Arduino converts sensor reading to angle  
3. PWM signal sent to servo motor  
4. Servo rotates the corresponding robotic finger  


## Methodology

- Mounted 5 flex sensors on a wearable glove (1 per finger)  
- Connected each sensor to Arduino’s analog inputs using a voltage divider  
- Used Arduino code to read sensor data and generate PWM signals for each servo  
- Calibrated sensor values to specific angles for accurate finger movement replication  
- Mapped sensor bending to servo rotation (0°–180°)


## Results & Observations

- The robotic hand successfully mimics real-time finger movements with low latency.
- Can perform basic grip motions such as a fist and open hand gesture.
- Able to lift lightweight objects (~134g).
- High responsiveness and smooth operation with good sensor calibration.
- Minor limitations:
  - No wrist or palm articulation.
  - Limited grip types.
  - Requires careful glove fit for accuracy.


## Future Scope

- Add **wrist rotation** and **palm flexion** using extra servos.
- Integrate **wireless communication** (Bluetooth/Wi-Fi) to control remotely.
- Replace flex sensors with **EMG sensors** for muscle-based control.
- Add **haptic feedback** for two-way interaction.
- Improve **grip strength** and design with more robust materials.
- Use **AI/ML** to classify hand gestures and improve adaptability.


## References

- IEEE Xplore papers on robotic prosthetics and servo actuation.
- "Design and Control of Myoelectric Hands" – Journal of NeuroEngineering.
- Adafruit documentation for flex sensors and servo interfacing.
- Arduino reference documentation (https://www.arduino.cc/en/Reference/HomePage).
- Various open-source DIY robotic hand designs on Hackster and Instructables.


## Author

**Kshipa Jaiswal**  
- B.Tech Mechatronics Engineering  
- Manipal University Jaipur  
- [kshipajaiswal@gmail.com](mailto:kshipajaiswal@gmail.com)  
- [LinkedIn](https://www.linkedin.com/in/kshipa-jaiswal-ab7055220)  
- [GitHub](https://github.com/Kshipajaiswal)
