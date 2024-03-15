#include <LiquidCrystal.h>
/* Create object named lcd of the class LiquidCrystal */
                
//LiquidCrystal lcd(12, 11, 13, 0, 1, 2, 3, 4, 5, 6, 7);  /* For 8-bit mode */
               //(rs, rw, e, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 13, 4, 5, 6, 7);  /* For 4-bit mode */

unsigned char Heart1[8] = { 0x04, 0x0E, 0x1F, 0x1F, 0x0F, 0x07, 0x03, 0x01 }; /* Custom Character 1 */
unsigned char Heart2[8] = { 0x08, 0x1C, 0x1E, 0x1E, 0x1C, 0x1C8, 0x10, 0x00 }; /* Custom Character 2 */

void setup() {
  lcd.begin(16,2);  /* Initialize 16x2 LCD */
  lcd.clear();  /* Clear the LCD */
  //lcd.createChar(0, Heart1);  /* Generate custom character */
  //lcd.createChar(1, Heart2);
}

void loop() {
  lcd.setCursor(0,0); /* Set cursor to column 0 row 0 */
  lcd.print("Hello DHTN'22"); /* Print data on display */
  lcd.setCursor(0,1);//* Set cursor to column 0 row 1 */
  //lcd.write(byte(0)); /* Write a character to display */
  //lcd.write(1);
}
