#include <IRremote.h>

IRrecv irrecv(7);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(6, OUTPUT);
  
}

void loop() {
  if (irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    if (results.value == 0x11BF40B)
    {
      Serial.println("Power Button Pressed!");
      digitalWrite(6, HIGH);
      delay(2000);
      digitalWrite(6, LOW);
    }

    irrecv.resume();
  }

}
