#include <Ultrasonic.h>

Ultrasonic ultrasonic(11);
int distance;

void setup() {
  initialize();
}

void loop() {
  distance = ultrasonic.read();
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(2000);
}