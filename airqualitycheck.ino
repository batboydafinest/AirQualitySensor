
#include <LiquidCrystal.h>


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Air Quality = ");
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);

  lcd.print("Air Quality = ");
  
  lcd.setCursor(0, 1);

  lcd.print(sensorValue);
  lcd.print(" PPM");

  Serial.print(sensorValue);

  delay(1000);

  lcd.clear();
}

