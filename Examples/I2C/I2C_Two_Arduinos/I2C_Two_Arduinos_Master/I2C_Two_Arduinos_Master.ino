//I2C MASTER CODE 
//I2C Communication between Two Arduino
//Circuit Digest
//Pramoth.T

#include<Wire.h>                             //Library for I2C Communication functions
#include<LiquidCrystal.h>                    //Library for LCD display function
LiquidCrystal lcd(2, 7, 8, 9, 10, 11);       //Define LCD Module Pins (RS,EN,D4,D5,D6,D7)

 void setup() 

{ 
  lcd.begin(16,2);                           //Initilize LCD display
  lcd.setCursor(0,0);                        //Sets Cursor at first line of Display 
  lcd.print("Circuit Digest");               //Prints CIRCUIT DIGEST in LCD 
  lcd.setCursor(0,1);                        //Sets Cursor at second line of Display
  lcd.print("I2C 2 ARDUINO");                //Prints I2C ARDUINO in LCD
  delay(200);                               //Delay for 5 seconds
  lcd.clear();                               //Clears LCD display
  Serial.begin(9600);                        //Begins Serial Communication at 9600 baud rate
  Wire.begin();                              //Begins I2C communication at pin (A4,A5)
}

void loop()

{
    Wire.requestFrom(8,1);                           // request 1 byte from slave arduino (8)
    byte MasterReceive = Wire.read();                // receive a byte from the slave arduino and store in MasterReceive
    int potvalue = analogRead(A0);                   // Reads analog value from POT (0-5V)
    byte MasterSend = map(potvalue,0,1023,0,127);    //Convert digital value (0 to 1023) to (0 to 127)

    Wire.beginTransmission(8);                       // start transmit to slave arduino (8)
    Wire.write(MasterSend);                          // sends one byte converted POT value to slave
    Wire.endTransmission();                          // stop transmitting
    lcd.setCursor(0,0);                              //Sets Currsor at line one of LCD
    lcd.print(">>  Master  <<");                     //Prints >> Master << at LCD
    lcd.setCursor(0,1);                              //Sets Cursor at line two of LCD
    lcd.print("SlaveVal:");                          //Prints SlaveVal: in LCD
    lcd.print(MasterReceive);                        //Prints MasterReceive in LCD received from Slave
    Serial.println("Master Received From Slave");    //Prints in Serial Monitor 
    Serial.println(MasterReceive);
    delay(100);                                     
    lcd.clear();
  
}     
