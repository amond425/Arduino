#define pinY A10
#define pinX A8

#include <LedControl.h>

int DIN = 8;
int CS = 6;
int CLK = 5;
int currentRow = 4;
int currentCol = 4;
  
LedControl lc=LedControl(DIN,CLK,CS,0);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 15);
  Serial.begin(9600);
}

void loop() {
  int yValue = analogRead(pinY);
  int xValue = analogRead(pinX);

  if(xValue > 800) {
    if(currentCol < 7) {
      currentCol++;
    }
    else {
      showAlarm();
    }
  }
  if(xValue < 300) {
    if(currentCol > 0) {
      currentCol--;
    }
    else {
      showAlarm();
    }
  }

  if(yValue > 800) {
    if(currentRow < 7) { 
      currentRow++;
    }
    else {
      showAlarm();
    }
  }

  if(yValue < 300) {
    if(currentRow > 0) {
      currentRow--;  
    }
    else {
      showAlarm();
    }
  }
  
  Serial.print("X = ");
  Serial.print(currentCol);
  Serial.print("; Y = ");
  Serial.print(currentRow);
  Serial.println(" ");
  lc.clearDisplay(0);
  lc.setLed(0, currentRow, currentCol, HIGH);
 
  delay(75);
}

void showAlarm() {
  for(int alarm = 0; alarm < 3; alarm++) {
    lc.clearDisplay(0);
    delay(200);
    lc.setLed(0, currentRow, currentCol, HIGH);
    delay(200);
  }
}
