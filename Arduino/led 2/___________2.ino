#include <LiquidCrystal.h>

// RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int num = 1;

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Auto Counter");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print("Number: ");
  lcd.print(num);
  lcd.print("   ");
  
  num++;
  if (num > 9) num = 1;
  delay(1000);
}
