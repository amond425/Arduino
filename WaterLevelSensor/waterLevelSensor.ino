int waterLevel;
#include <Servo.h>
Servo servo;

void setup() {
  pinMode(A4, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (waterLevel >=200){
  waterLevel = analogRead(A4);
  Serial.println(waterLevel);
  servo.write(180);
  delay(5000);
  servo.write(75);
  }
 delay(50);
}
