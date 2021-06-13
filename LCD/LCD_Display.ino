#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 2, 3, 4, 5);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Subscribe today");
  delay(1000);

  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("or eat hay!");
  delay(1000);
}
