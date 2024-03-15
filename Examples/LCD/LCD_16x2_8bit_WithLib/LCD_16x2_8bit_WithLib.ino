#include <LiquidCrystal.h>
/* Create object named lcd of the class LiquidCrystal */
                
LiquidCrystal lcd(12, 11, 13, 0, 1, 2, 3, 4, 5, 6, 7);  /* For 8-bit mode */
                 //(rs, rw, e, d4, d5, d6, d7)
//LiquidCrystal lcd(13, 12, 11, 6, 5, 4, 3);  /* For 4-bit mode */

unsigned char Character1[8] = { 0x00, 0x0A, 0x1F, 0x1F, 0x0E, 0x04, 0x00, 0x00 }; /* Custom Character 1 */
unsigned char Character2[8] = { 0x04, 0x0E, 0x0E, 0x1F, 0x00, 0x04, 0x00, 0x01 }; /* Custom Character 2 */

void setup() {
  lcd.begin(16,2);  /* Initialize 16x2 LCD */
  lcd.clear();  /* Clear the LCD */
  lcd.createChar(0, Character1);  /* Generate custom character */
  lcd.createChar(1, Character2);
}

void loop() {
  lcd.setCursor(0,0); /* Set cursor to column 0 row 0 */
  lcd.print("Hello Arduino 2021"); /* Print data on display */
  lcd.setCursor(0,1);//* Set cursor to column 0 row 1 */
  lcd.write(byte(0)); /* Write a character to display */
  lcd.write(1);
}
