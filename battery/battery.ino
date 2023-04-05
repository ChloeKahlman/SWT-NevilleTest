void setup() {
  initialize();
}

void loop() {
  Serial.print("Battery: ");
  Serial.println(battery());
  delay(5000);
}
