#define pinY A10
#define pinX A8

#include <LedControl.h>

int DIN = 8;
int CS = 6;
int CLK = 5;

LedControl lc=LedControl(DIN,CLK,CS,0);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 15);
  Serial.begin(9600);
}

void loop() {
  // Defining X and Y
  int yValue = analogRead(pinY);
  int xValue = analogRead(pinX);

  //Print X Value
  Serial.print("X = ");
  Serial.print(xValue);

  //Print Y Value
  Serial.print("; Y = ");
  Serial.print(yValue);
  Serial.println(" ");

  lc.clearDisplay(0);
  
  if (yValue <= 300) {
    //Light up top row
    for (int column = 0; column <= 7; column++) {
      lc.setLed(0, 0, column, HIGH);
    }
  }
  if (yValue >= 800) {
    //Light up bottom row
    for (int column = 0; column <= 7; column++) {
      lc.setLed(0, 7, column, HIGH);
    }
  }
  if(xValue >= 800) {
    //Light up right row
    for(int row = 0; row <= 7; row++){
      lc.setLed(0, row, 7, HIGH);
    }
  }
  if (xValue <= 300) {
    for(int row = 0; row <= 7; row++){
      lc.setLed(0, row, 0, HIGH);
    }
  }
  delay(500);
}
