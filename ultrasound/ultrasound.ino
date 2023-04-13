#include <Ultrasonic.h>

int distance;

void setup() {
  initialize();
}

void loop() {
  //for(int i=1;i<=20; i++){
    Ultrasonic ultrasonic(10);

    
  distance = ultrasonic.read();
  //Serial.println(i);
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(500);
  //}

}