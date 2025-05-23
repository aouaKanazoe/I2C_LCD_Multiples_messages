#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.begin();

	// Turn on the blacklight and print a message.
	lcd.backlight();
	//lcd.print("Hello, world!");
}

void loop()
{

  lcd.clear();
  lcd.print("Hello, World!");
  delay(1000);
  lcd.clear();



  lcd.print("I am powered by");
  lcd.setCursor(3 , 1);
  lcd.print("Arduino!");
  delay(1000);
  lcd.clear();

  lcd.print("It's fine!");
  delay(1000);
  lcd.clear();
  lcd.print("Thank you!");
  delay(1000);
  lcd.clear();
 
}
