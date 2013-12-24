#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define BACKLIGHT_PIN 13

//LiquidCrystal_I2C lcd(0x27, BACKLIGHT_PIN, POSITIVE);  // Set the LCD I2C address
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address
int interval = 0;

void setup()
{
  //Switch on the backlight
  //pinMode(BACKLIGHT_PIN, OUTPUT );
  //digitalWrite(BACKLIGHT_PIN, HIGH );

  lcd.begin(16,2);
  lcd.home();
  //lcd.clear(); 
  lcd.setCursor(0, 0);
  lcd.print("Serial LCD");
  lcd.setCursor(1, 1);
  lcd.print("count:");
  lcd.setCursor(8, 1);
  lcd.print(interval);
}

void loop()
{
  delay(500);
  interval++;
  lcd.setCursor(8, 1);
  lcd.print(interval);
}
