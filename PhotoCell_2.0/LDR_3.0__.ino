void setup() {
  //Analog
  pinMode(A0, INPUT);
  
  //Digital
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(A0);
  Serial.println(analogValue);
  if(analogValue > 790){
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(analogValue);
    digitalWrite(3, LOW);
    delay(analogValue);
  }
  else if(analogValue <= 790){
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(analogValue);
    digitalWrite(4, LOW);
    delay(analogValue);
  }
}
