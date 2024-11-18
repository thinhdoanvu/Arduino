/*Lib to control a 16x2 LCD via an I2C adapter based on PCF8574.
The library uses the Wire.h library for I2C comunications.
A4=SDA <-> SDA=RTC
A5=SCL <-> SCL=RTC
I2C address 0x20, 16 column and 2 rows
install: Arduino IDE - Sketch - Include Library - Add .Zip file = LCD_I2C.zip
*/

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup()
{
  // khoi tao lcd
  lcd.begin(16, 2);
  lcd.init();                    
  lcd.backlight();
  //khoi tao Ananlog
  pinMode(A0, INPUT);
}

void display(){
  lcd.setCursor(0,0);
  String S="Temp: ";
  S = S + read_temp() + char(176) + "C";
  lcd.print(S);
}

float read_temp(){
  float volt = analogRead(A0);
  float temp = (float)volt * 5.0 / 1024.0;
  temp = (temp - 0.5) * 100.0;
  return temp;
}

void loop()
{
  display();
  
}
