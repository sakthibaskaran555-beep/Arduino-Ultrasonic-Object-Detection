# Arduino Ultrasonic Object Detection System

## 📌 Project Overview

This project is an **Arduino UNO based ultrasonic object detection system** using an **HC-SR04 ultrasonic distance sensor**.

The system detects objects by measuring the distance between the ultrasonic sensor and an object. An LED and buzzer provide an indication when an object is detected within the specified detection range.

This project demonstrates the complete process from circuit design and hardware setup to real-time object detection.

---

## 🎯 Project Objective

The main objective of this project is to design and demonstrate a simple object detection system using an Arduino UNO and an HC-SR04 ultrasonic sensor.

### The system is designed to:

* Detect objects using ultrasonic waves
* Measure the distance to an object
* Provide LED indication
* Provide buzzer indication
* Demonstrate real-time object detection

---

## 🛠️ Components Used

* Arduino UNO
* HC-SR04 Ultrasonic Distance Sensor
* LED
* 220 Ω resistor
* Buzzer
* Jumper wires
* USB cable
* Computer/Laptop

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

The **HC-SR04 ultrasonic sensor** is used to detect the presence of an object and measure its distance.

The Arduino sends a short trigger pulse to the **TRIG** pin of the HC-SR04 sensor.

The sensor then transmits an ultrasonic wave. When the wave reaches an object, it is reflected back toward the sensor.

The **ECHO** pin measures the time taken for the ultrasonic wave to travel to the object and return.

The Arduino uses this time to calculate the distance.

### Distance Calculation

```text
Distance = (Time × Speed of Sound) / 2
```

The division by 2 is required because the ultrasonic wave travels from the sensor to the object and then returns to the sensor.

---

## 🔄 System Operation

The system operates as follows:

1. Arduino sends a trigger signal to the HC-SR04.
2. HC-SR04 transmits an ultrasonic pulse.
3. The ultrasonic pulse travels toward the object.
4. The pulse is reflected from the object.
5. The reflected pulse is received by the HC-SR04.
6. The ECHO signal is sent to the Arduino.
7. Arduino measures the echo time.
8. The distance is calculated.
9. Arduino determines whether an object is within the detection range.
10. The LED and buzzer provide the required indication.

---

## 📊 Detection Logic

| Object Condition   | LED | Buzzer |
| ------------------ | --- | ------ |
| No object detected | OFF | OFF    |
| Object detected    | ON  | ON     |

The detection distance can be modified in the Arduino program according to the required application.

---

## 💻 Software

The project uses:

* Arduino IDE
* Arduino C/C++
* Arduino UNO

The complete Arduino program is available in:

```text
Arduino_Ultrasonic_Distance.ino
```

---

## 📁 Project Structure

```text
Arduino-Ultrasonic-Object-Detection/
│
├── images/
│   ├── wiring-diagram.png
│   ├── hardware-setup.jpg
│   ├── no-object-detected.jpg
│   └── object-detected.jpg
│
├── video/
│   └── working-video.mp4
│
├── Arduino_Ultrasonic_Distance.ino
├── LICENSE
└── README.md
```

---

## 📷 Project Images

The project images are available in the `images` folder.

The folder contains:

* `wiring-diagram.png` — Circuit wiring diagram
* `hardware-setup.jpg` — Complete hardware setup
* `no-object-detected.jpg` — Hardware when no object is detected
* `object-detected.jpg` — Hardware when an object is detected

---

## 🎥 Working Demonstration

The complete working demonstration video is available in the `video` folder.

```text
video/working-video.mp4
```

The video demonstrates the ultrasonic sensor detecting an object and the corresponding LED/buzzer indication.

---

## 🚀 Applications

This ultrasonic object detection system can be used as a basic building block for:

* Obstacle detection
* Object detection
* Distance measurement
* Parking assistance systems
* Robot obstacle avoidance
* Automatic warning systems
* Arduino-based automation
* Industrial object detection

---

## 🔮 Future Improvements

The project can be further improved by adding:

* LCD or OLED display for distance measurement
* Servo motor for ultrasonic sensor scanning
* Multiple ultrasonic sensors
* Automatic obstacle avoidance
* IoT connectivity
* Wireless monitoring
* Mobile application monitoring
* Integration with industrial automation systems

---

## 👨‍💻 Author

**Sakthipriyan B**

---

## 📄 License

This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for details.
