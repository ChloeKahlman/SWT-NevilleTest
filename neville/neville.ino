#define LEFT 0
#define RIGHT 1
#define LINE_LINE_THRESHOLD 800

#include <Ultrasonic.h>
Ultrasonic ultrasonic(11);

void setup() {
  initialize();
  sensorAutoCalibrate();
  pinMode(A4, INPUT);
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  if(battery()<0.1){
    Serial.println("Battery low!");
    while(1){

    }
  }
}

void loop() {
  float lightpercent = (1023-analogRead(A4))/1023;
  if(lightpercent < 0.5){
    digitalWrite(19, HIGH);
    digitalWrite(20, HIGH);
  } else {
    digitalWrite(19, LOW);
    digitalWrite(20, LOW);
  }

  if(ultrasonic.read()<8){
    activateMotor(LEFT,0);
    activateMotor(RIGHT,0);
    break;
  }

  int sensors[5];
  calibratedSensors(sensors);

  if(sensor[1]+sensor[2]+sensor[3]){
    activateMotor(LEFT,0);
    activateMotor(RIGHT,0);
    break;
  } 

  if(sensor[0]>LINE_THRESHOLD){
    activateMotor(LEFT,-0.3);
    activateMotor(RIGHT,0.6);
  } else if(sensor[4]>LINE_THRESHOLD){
    activateMotor(LEFT,0.6);
    activateMotor(RIGHT,-0.3);
  } else if(sensor[1]>LINE_THRESHOLD){
    activateMotor(LEFT,-0.15);
    activateMotor(RIGHT,0.3);
  } else if(sensor[3]>LINE_THRESHOLD){
    activateMotor(LEFT,0.3);
    activateMotor(RIGHT,-0.15);
  } else if(sensor[2]>LINE_THRESHOLD){
    activateMotor(LEFT,0.8);
    activateMotor(RIGHT,0.8);
  } else {
    activateMotor(LEFT,0.4);
    activateMotor(RIGHT,0.4);
  }

  delay(50);
}

