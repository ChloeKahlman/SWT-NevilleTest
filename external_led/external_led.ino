void setup() {
  digitalOut(19, OUTPUT);
  digitalOut(20, OUTPUT);
}

void loop() {
  digitalWrite(19, HIGH);
  digitalWrite(20, HIGH);
  delay(1000);
  digitalWrite(19, LOW);
  digitalWrite(20, LOW);
  delay(1000);
}
