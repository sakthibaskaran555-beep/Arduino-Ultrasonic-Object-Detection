# Arduino Ultrasonic Object Detection System

## 📌 Project Overview

This project demonstrates an **Arduino UNO based ultrasonic object detection system** using an **HC-SR04 ultrasonic distance sensor**.

The system detects objects by measuring the distance between the ultrasonic sensor and an object. An LED and buzzer are used to provide visual and audible indications when an object is detected within a specified distance.

---

## 🎯 Project Objective

The main objective of this project is to design and demonstrate a simple object detection system using an Arduino UNO and an HC-SR04 ultrasonic sensor.

The system can:

* Measure the distance of an object
* Detect whether an object is present
* Provide LED indication
* Provide buzzer indication
* Demonstrate real-time ultrasonic object detection

---

## 🛠️ Components Used

* Arduino UNO
* HC-SR04 Ultrasonic Distance Sensor
* LED
* 220 Ω resistor
* Buzzer
* Jumper wires
* USB cable

---

## 🔌 Pin Connections

| Component | Pin          | Arduino UNO                |
| --------- | ------------ | -------------------------- |
| HC-SR04   | VCC          | 5V                         |
| HC-SR04   | TRIG         | D9                         |
| HC-SR04   | ECHO         | D10                        |
| HC-SR04   | GND          | GND                        |
| LED       | Anode (+)    | D13                        |
| LED       | Cathode (-)  | GND through 220 Ω resistor |
| Buzzer    | Positive (+) | D12                        |
| Buzzer    | Negative (-) | GND                        |

---

## ⚙️ Working Principle

The HC-SR04 ultrasonic sensor works by transmitting an ultrasonic pulse through the **TRIG** pin.

The ultrasonic wave travels toward an object and is reflected back to the sensor.

The **ECHO** pin measures the time taken for the ultrasonic wave to return.

The Arduino uses this time to calculate the distance.

### Distance Calculation

```text
Distance = (Time × Speed of Sound) / 2
```

The division by 2 is required because the ultrasonic signal travels from the sensor to the object and back to the sensor.

---

## 🔄 System Operation

1. Arduino sends a trigger signal to the HC-SR04 sensor.
2. HC-SR04 transmits an ultrasonic pulse.
3. The ultrasonic pulse travels toward the object.
4. The pulse is reflected back from the object.
5. The ECHO pin receives the reflected signal.
6. Arduino measures the echo time.
7. The distance is calculated.
8. Arduino determines whether an object is within the detection range.
9. LED and buzzer provide the required indication.

---

## 📊 Detection Logic

| Object Condition   | LED | Buzzer |
| ------------------ | --- | ------ |
| No object detected | OFF | OFF    |
| Object detected    | ON  | ON     |

The detection distance can be modified in the Arduino program according to the required application.

---

## 💻 Software

The project can be programmed using:

* Arduino IDE
* Arduino C/C++

---

## 🚀 Applications

This project can be used for:

* Obstacle detection
* Object detection
* Parking assistance
* Robot obstacle avoidance
* Distance measurement
* Automatic warning systems
* Arduino-based automation
* Industrial object detection

---

## 🔮 Future Improvements

The project can be further improved by adding:

* LCD or OLED display
* Servo motor for sensor scanning
* Multiple ultrasonic sensors
* Automatic obstacle avoidance
* IoT monitoring
* Wireless communication
* Mobile application monitoring
* Industrial automation integration

---

## 📁 Project Files

The project images and demonstration video are available in the following folders:

* **`images/`** – Wiring diagram and hardware photographs
* **`video/`** – Working demonstration video

---

## 👨‍💻 Author

**Sakthipriyan B**

---

## 📄 License

This project is created for educational and academic purposes.
