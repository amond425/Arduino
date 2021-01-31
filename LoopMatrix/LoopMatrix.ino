#include <LedControl.h>

int DIN = 7;
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
  for(int row = 0; row <= 7; row++)
  {
    // begin inner code block
    for(int column = 0; column <= 7; column++)
    {
     lc.setLed(0, row, column, HIGH);
     delay(50);
    }
    // end inner code block
  }
}
