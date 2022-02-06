#include <Servo.h>

Servo myservo;

int pos = 0;

void setup() {
  myservo.attach(9);
}

void loop() {
  for (pos = 0; pos <= 45; pos += 1) {
    myservo.write(pos);
    delay(10);
  }
  delay(1000);
  for (pos = 45; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(10);
  }
  delay(1000);
  for (pos = 0; pos <= 90; pos += 1) {
    myservo.write(pos);
    delay(10);
  }
  delay(1000);
  for (pos = 90; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(10);
  }
  delay(1000);
  for (pos = 360; pos >= 135; pos -= 1) {
    myservo.write(pos);
    delay(10);
  }
  delay(1000);
  for (pos = 135; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(10);
  }
  delay(1000);
  for (pos = 180; pos <= 90; pos += 1) {
    myservo.write(pos);
    delay(10);
  }
}
