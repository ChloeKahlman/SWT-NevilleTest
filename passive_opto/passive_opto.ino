
void setup() {
  pinMode(A4, INPUT);
}

void loop() {
  float output = analogRead(A4);
  int lightpercent = (1023-output)/1023 * 100;

  Serial.print("Light level: ");
  Serial.print(lightpercent);
  Serial.println("%");
}
