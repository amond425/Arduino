#include <LiquidCrystal.h>

LiquidCrystal lcd (2, 3, 4, 5, 6, 7);

void setup() {
 lcd.begin(16, 2);
 lcd.clear();
}

int seconds = 00;
int minutes = 40;
int hours = 10;

void loop() {
  delay(1000);
  seconds = seconds + 1;
  if (seconds == 60){
    seconds = 00;
    minutes = minutes + 1;
  }
  if (minutes == 60){
    minutes = 00;
    hours = hours + 1;
  }
  if (hours == 24){
    seconds = 00;
    minutes = 00;
    hours = 00;
  }
  clock_format();
}

void clock_format() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(hours);
  lcd.print(":");
  lcd.print(minutes);
  lcd.print(":");
  lcd.print(seconds);
}
