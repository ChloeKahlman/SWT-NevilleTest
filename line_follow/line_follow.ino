#define LEFT 0
#define RIGHT 1
#define LINE_THRESHOLD 800

void setup() {
  sensorAutoCalibrate();
}

void loop() {
  int sensors[5];
  char buffer[50];
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

