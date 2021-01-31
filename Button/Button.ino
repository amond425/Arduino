void setup() {
  Serial.begin(9600);
  pinMode(11, INPUT);
}

void loop() {
  Serial.println(digitalRead(11));
  delay(1000);
}
