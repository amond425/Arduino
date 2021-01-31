#include <LedControl.h>

int DIN = 8;
int CS = 6;
int CLK = 5;

LedControl lc=LedControl(DIN,CLK,CS,0);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 15);
}

// lc.setLed(0, row, column, HIGH/LOW)
void loop() {
  lc.clearDisplay(0);
   
  for(int row = 0; row <= 7; row++){
    lc.clearDisplay(0);
    if(row%2 == 0){
      // row is even
      for(int column = 0; column <= 7; column++){
        lc.setLed(0, row, column, HIGH);
        delay(500);
      }
    }
    else {
      // row is odd
      for(int column = 7; column >= 0; column--) {
        lc.setLed(0, row, column, HIGH);
        delay(500);
      }
    }
  }
}
