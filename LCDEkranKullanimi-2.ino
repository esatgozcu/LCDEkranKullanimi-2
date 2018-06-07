#include <LiquidCrystal.h>

// lcd (rs,e,d4,d5,d6,d7)

LiquidCrystal lcd(8,7,6,5,4,3);

void setup() {

  lcd.begin(16,2);
}

void loop() {

  lcd.setCursor(5,0);
  lcd.print("LCD");
  lcd.setCursor(2,1);
  lcd.print("Kullanimi");

  delay(5000);

  lcd.clear();
  lcd.home();
  lcd.print("LCD");

  delay(5000);

  lcd.cursor();

  delay(5000);

  lcd.blink();

  delay(5000);

  lcd.noBlink();
  
  delay(5000);

  lcd.noCursor();

  delay(5000);

  lcd.noDisplay();

  delay(5000);

  lcd.display();

  delay(5000);

  lcd.scrollDisplayRight();
  delay(1000);
  lcd.scrollDisplayRight();
  delay(1000);
  lcd.scrollDisplayRight();
  delay(1000);

  lcd.scrollDisplayLeft();
  delay(1000);
  lcd.scrollDisplayLeft();
  delay(1000);
  lcd.scrollDisplayLeft();
  delay(1000);

  lcd.clear();
}



