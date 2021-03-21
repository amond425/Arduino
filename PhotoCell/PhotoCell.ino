void setup() {
  pinMode(2, OUTPUT); //Green LED
  pinMode(3, OUTPUT); //Red LED
  pinMode(4, INPUT);
  Serial.begin(9600);
}

void loop() {
  int lightInput = digitalRead(4);
  if (lightInput == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    Serial.println(lightInput);
  }
  else {
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    Serial.println(lightInput);
  }
  delay(100);
}
