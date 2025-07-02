#include <Servo.h>

// Define servo objects for 5 fingers
Servo thumbServo;
Servo indexServo;
Servo middleServo;
Servo ringServo;
Servo pinkyServo;

// Define analog input pins for 5 flex sensors
const int thumbSensorPin  = A0;
const int indexSensorPin  = A1;
const int middleSensorPin = A2;
const int ringSensorPin   = A3;
const int pinkySensorPin  = A4;

// Define sensor min and max values (adjust by testing)
int sensorMin = 300;  // Flexed
int sensorMax = 700;  // Straight

void setup() {
  // Attach servos to PWM pins
  thumbServo.attach(3);
  indexServo.attach(5);
  middleServo.attach(6);
  ringServo.attach(9);
  pinkyServo.attach(10);

  Serial.begin(9600);
}

void loop() {
  // Read and map each sensor to angle
  int thumbVal  = analogRead(thumbSensorPin);
  int indexVal  = analogRead(indexSensorPin);
  int middleVal = analogRead(middleSensorPin);
  int ringVal   = analogRead(ringSensorPin);
  int pinkyVal  = analogRead(pinkySensorPin);

  int thumbAngle  = map(thumbVal, sensorMin, sensorMax, 0, 180);
  int indexAngle  = map(indexVal, sensorMin, sensorMax, 0, 180);
  int middleAngle = map(middleVal, sensorMin, sensorMax, 0, 180);
  int ringAngle   = map(ringVal, sensorMin, sensorMax, 0, 180);
  int pinkyAngle  = map(pinkyVal, sensorMin, sensorMax, 0, 180);

  // Limit angles to servo range
  thumbAngle  = constrain(thumbAngle, 0, 180);
  indexAngle  = constrain(indexAngle, 0, 180);
  middleAngle = constrain(middleAngle, 0, 180);
  ringAngle   = constrain(ringAngle, 0, 180);
  pinkyAngle  = constrain(pinkyAngle, 0, 180);

  // Move servos
  thumbServo.write(thumbAngle);
  indexServo.write(indexAngle);
  middleServo.write(middleAngle);
  ringServo.write(ringAngle);
  pinkyServo.write(pinkyAngle);

  // Optional: Serial output for debugging
  Serial.print("Thumb: "); Serial.print(thumbAngle);
  Serial.print(" | Index: "); Serial.print(indexAngle);
  Serial.print(" | Middle: "); Serial.print(middleAngle);
  Serial.print(" | Ring: "); Serial.print(ringAngle);
  Serial.print(" | Pinky: "); Serial.println(pinkyAngle);

  delay(50); // Adjust speed/smoothness
}
