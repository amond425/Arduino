void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int Value = digitalRead(2);
  if (Value == 0){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }
  Serial.println(Value);
  delay(50);
}
