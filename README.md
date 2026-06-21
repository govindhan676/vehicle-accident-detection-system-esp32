# Vehicle Accident Detection System using ESP32

## Overview

This project detects vehicle accidents using the MPU6050 Accelerometer Sensor and ESP32 Microcontroller.

The system continuously monitors acceleration values and detects sudden impacts. When the acceleration exceeds the predefined threshold value, the system identifies an accident and activates alert devices.

---

## Components Used

- ESP32 Development Board
- MPU6050 Accelerometer Sensor
- OLED SSD1306 Display
- LED
- Buzzer

---

## Features

- Real-Time Acceleration Monitoring
- Accident Detection
- OLED Status Display
- LED Alert Indication
- Buzzer Alert System
- Wokwi Simulation

---

## Communication Protocol

### I2C Protocol

The MPU6050 sensor and OLED display communicate with ESP32 using I2C communication.

Pins Used:

- SDA -> GPIO21
- SCL -> GPIO22

---

## Block Diagram

See Block_Diagram.png
<img width="940" height="536" alt="image" src="https://github.com/user-attachments/assets/d892fdd8-ac56-44ac-b241-c09b62cf64ac" />

``
## Working Principle

1. MPU6050 continuously measures acceleration values.
2. ESP32 reads X, Y and Z axis acceleration.
3. Total acceleration is calculated.
4. If acceleration exceeds threshold value:
   - OLED displays ACCIDENT
   - LED turns ON
   - Buzzer activates
5. Otherwise SAFE status is displayed.

---

## Simulation Platform

<img width="459" height="459" alt="image" src="https://github.com/user-attachments/assets/d9b2a61a-59e6-4dd3-aad4-b6221b204d3a" />


---

## Results

### Safe Condition

<img width="460" height="440" alt="image" src="https://github.com/user-attachments/assets/637451ed-5804-43a9-94ee-8bf3a9a03d7f" />

- OLED displays SAFE
- LED OFF
- Buzzer OFF

### Accident Condition

<img width="403" height="408" alt="image" src="https://github.com/user-attachments/assets/7cccc8dc-ea3c-4ea9-bcbc-396ba0ad5631" />

- OLED displays ACCIDENT
- LED ON
- Buzzer ON

---

## Future Enhancements

- GPS Tracking
- GSM Emergency Alert
- ThingSpeak Cloud Monitoring
- Mobile Application Integration

---

## Author

Govindhan S

Department of Electronics and Communication Engineering

Suguna College of Engineering
