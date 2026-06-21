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

MPU6050 Accelerometer
        |
        | I2C
        v
      ESP32
        |
  ------------------
  |       |       |
  v       v       v
 OLED    LED   BUZZER

---

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

Wokwi Simulator

---

## Results

### Safe Condition

- OLED displays SAFE
- LED OFF
- Buzzer OFF

### Accident Condition

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

Govindhan G

Department of Electronics and Communication Engineering

Suguna College of Engineering
