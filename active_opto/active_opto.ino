
void setup() {
  sensorAutoCalibrate();
}

void loop() {
  int sensors[5];
  char buffer[50];
  calibratedSensors(sensors);
  sprintf(buffer, "Active Optosensors: %d; %d; %d; %d; %d\n", sensors[0], sensors[1], sensors[2],
  sensors[3], sensors[4]);
  Serial.println(buffer);
  delay(500);
}
