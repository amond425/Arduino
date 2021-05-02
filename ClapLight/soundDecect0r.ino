void setup() {
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}
int ledState = LOW;

void loop() {
  int soundLevel = analogRead(A0);
  Serial.println(soundLevel);
  if (soundLevel > 85){
    // clap detected
    // checking if LED is currently off
    if(ledState == LOW){ 
      // since it is off, turn on
      ledState = HIGH;
    }
    else {
      ledState = LOW;
    }
    digitalWrite(8, ledState);
    delay(1000); 
  }
   
    
  delay(50);
  
}
//#CHOW CHOW ARE CUTE
