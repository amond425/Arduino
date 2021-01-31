#include <Servo.h>
Servo servo;

void setup() {
   pinMode(A0, INPUT);
   pinMode(8, OUTPUT);
   servo.attach(2);
   Serial.begin(9600);  
}

void loop() {
  int Sound = analogRead(A0);
  Serial.println(Sound);
 
  if (Sound >=200){
    servo.write(180);
    delay(5000);
    servo.write(75);
    
    //digitalWrite(8, HIGH);
    //delay(1000);
    //digitalWrite(8, LOW);
  }
  delay(10);

}
