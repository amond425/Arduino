#include <LedControl.h>

int DIN = 7;
int CS = 6;
int CLK = 5;

LedControl lc = LedControl(DIN,CLK,CS,0);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 15);
}

// lc.setLed(0, row, column, HIGH/LOW)

void loop() {
  lc.clearDisplay(0);
  lc.setLed(0, 0, 0, HIGH);
  delay(50);
  lc.setLed(0, 0, 1, HIGH);
  delay(50);
  lc.setLed(0, 1, 0, HIGH);
  delay(50);
  lc.setLed(0, 0, 2, HIGH);
  delay(50);
  lc.setLed(0, 2, 0, HIGH);
  delay(50);
  lc.setLed(0, 1, 1, HIGH);
  delay(50);
  lc.setLed(0, 0, 0, HIGH);
  delay(50);
  lc.setLed(0, 3, 0, HIGH);
  delay(50);
  lc.setLed(0, 2, 1, HIGH);
  delay(50);
  lc.setLed(0, 1, 2, HIGH);
  delay(50);
  lc.setLed(0, 0, 3, HIGH);
  delay(50);
  lc.setLed(0, 0, 4, HIGH);
  delay(50);
  lc.setLed(0, 1, 3, HIGH);
  delay(50);
  lc.setLed(0, 2, 2, HIGH);
  delay(50);
  lc.setLed(0, 3, 1, HIGH);
  delay(50);
  lc.setLed(0, 4, 0, HIGH);
  delay(50);
  lc.setLed(0, 5, 0, HIGH);
  delay(50);
  lc.setLed(0, 4, 1, HIGH);
  delay(50);
  lc.setLed(0, 3, 2, HIGH);
  delay(50);
  lc.setLed(0, 2, 3, HIGH);
  delay(50);
  lc.setLed(0, 1, 4, HIGH);
  delay(50);
  lc.setLed(0, 0, 5, HIGH);
  delay(50);
  lc.setLed(0, 0, 6, HIGH);
  delay(50);
  lc.setLed(0, 1, 5, HIGH);
  delay(50);
  lc.setLed(0, 2, 4, HIGH);
  delay(50);
  lc.setLed(0, 3, 3, HIGH);
  delay(50);
  lc.setLed(0, 4, 2, HIGH);
  delay(50);
  lc.setLed(0, 5, 1, HIGH);
  delay(50);
  lc.setLed(0, 6, 0, HIGH);
  delay(50);
  lc.setLed(0, 7, 0, HIGH);
  delay(50);
  lc.setLed(0, 6, 1, HIGH);
  delay(50);
  lc.setLed(0, 5, 2, HIGH);
  delay(50);
  lc.setLed(0, 4, 3, HIGH);
  delay(50);
  lc.setLed(0, 3, 4, HIGH);
  delay(50);
  lc.setLed(0, 2, 5, HIGH);
  delay(50);
  lc.setLed(0, 1, 6, HIGH);
  delay(50);
  lc.setLed(0, 0, 7, HIGH);
  delay(50);
  lc.setLed(0, 7, 7, HIGH);
  delay(50);
  lc.setLed(0, 6, 6, HIGH);
  delay(50);
  lc.setLed(0, 5, 5, HIGH);
  delay(50);
  lc.setLed(0, 4, 4, HIGH);
  delay(2000);
  lc.clearDisplay(0);
  
  
  
  
  
  
}
