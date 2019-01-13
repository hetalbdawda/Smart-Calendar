  /*
SparkFun Inventor's Kit 
Example sketch 17

LIQUID CRYSTAL DISPLAY (LCD)

  This sketch will show you how to connect an LCD to your Arduino
  and display any data you wish.

This sketch was written by SparkFun Electronics,
with lots of help from the Arduino community.
This code is completely free for any use.
Visit https://www.sparkfun.com/products/12060 for SIK information.
Visit http://www.arduino.cc to learn more about Arduino.
*/

// Load the LiquidCrystal library, which will give us
// commands to interface to the LCD:

#include <LiquidCrystal.h>

// Initialize the library with the pins we're using.
// (Note that you can use different pins if needed.)
// See http://arduino.cc/en/Reference/LiquidCrystal
// for more information:

LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  // The LiquidCrystal library can be used with many different
  // LCD sizes. We're using one that's 2 lines of 16 characters,
  // so we'll inform the library of that:

  lcd.begin(16, 2);
  

  lcd.clear();
  
}


void loop()
{
  lcd.setCursor(1,0);
  lcd.print("Brush teeth");
  delay(5000);
  lcd.clear();
  lcd.print("Pack Lunch");
  delay(5000);
  lcd.clear();
}
