void setup() {

}

void loop() {
  activateMotor(0, 0.3);
  activateMotor(1, 0.3);
  delay(5000);
  activateMotor(0, 0);
  activateMotor(1, 0);
  delay(2000);
}
