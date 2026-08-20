```cpp
/*
  Arduino Ultrasonic Distance Measurement System

  Hardware:
  Arduino UNO
  HC-SR04 Ultrasonic Sensor
  LED
  Buzzer

  Connections:
  HC-SR04 TRIG -> D9
  HC-SR04 ECHO -> D10
  LED          -> D13
  Buzzer       -> D12
*/

const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 13;
const int buzzerPin = 12;

long duration;
float distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);

  digitalWrite(trigPin, LOW);
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);

  delay(500);
}

void loop()
{
  // Generate ultrasonic trigger pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Measure echo pulse duration
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in centimeters
  distance = duration * 0.0343 / 2.0;

  // Display distance on Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Distance-based indication
  if (distance < 20)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }
  else if (distance < 50)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  }
  else
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  delay(200);
}
```
