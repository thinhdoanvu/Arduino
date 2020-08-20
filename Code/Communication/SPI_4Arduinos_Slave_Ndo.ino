#include<SPI.h>
#define LcdDataBus PORTD

//khai bao bien
String buf="";
volatile int pos;
volatile bool active;

int LCD_RS = A3;//A3 pin
int LCD_RW = A4;//A4 pin
int LCD_EN = A5;//A5 pin

int i;
int analogPin = A0; //Doc du lieu cho ADC
int val = 0;  
float temp;

byte nguyen;
byte le;
String x;

void setup()
{
  // Truyen du lieu den Master
  pinMode(MISO, OUTPUT);

  // Bat che do Slave
  SPCR |= bit(SPE);

  // Cho phep ngat
  SPCR |= bit(SPIE);

  //Setup cho LCD
  pinMode(LCD_RS,OUTPUT); 
  pinMode(LCD_RW,OUTPUT);
  pinMode(LCD_EN,OUTPUT);
}

/* Gui ma lenh ra LCD 
   Trong che do 4bit, a byte lenh duoc gui toi ca 2 thanh phan thap va cao (4-bit nibbles) */
void Lcd_CmdWrite(char cmd)
{
  LcdDataBus = (cmd & 0xF0);//che 4 bit thap chi giu 4 bit cao
  digitalWrite(LCD_RS,0);                  // RS=0 gui ma lenh
  digitalWrite(LCD_RW,0);                 // RW=0 ghi lenh
  digitalWrite(LCD_EN,1);                // EN=1
  delay(10);                            // Doi!!!
  digitalWrite(LCD_EN,0);              // EN=0, tin hieu 1-0 cho phep ghi/doc
  delay(10);

  LcdDataBus = ((cmd<<4) & 0xF0); //Dich trai 4 bit de chuyen sang 4 bit thap
  digitalWrite(LCD_RS,0);                   // RS=0 gui ma lenh
  digitalWrite(LCD_RW,0);                  // RW=0 ghi lenh
  digitalWrite(LCD_EN,1);                 // EN=1
  delay(10);                             // Doi!!!
  digitalWrite(LCD_EN,0);               // EN=0, tin hieu 1-0 cho phep ghi/doc
  delay(10);
}
/* Gui du lieu ra LCD 
   Trong che do 4bit, a byte du lieu duoc gui toi ca 2 thanh phan thap va cao (4-bit nibbles) */
void Lcd_DataWrite(char dat)
{
    LcdDataBus = (dat & 0xF0);//che 4 bit thap chi giu 4 bit cao
    digitalWrite(LCD_RS,1);                 // RS=1 gui du lieu
    digitalWrite(LCD_RW,0);                // RW=0 ghi du lieu
    digitalWrite(LCD_EN,1);               // EN=1
    delay(10);                           // Doi!!!
    digitalWrite(LCD_EN,0);             // EN=0, tin hieu 1-0 cho phep ghi/doc

    delay(10);

    LcdDataBus = ((dat<<4) & 0xF0);  //Dich trai 4 bit de chuyen sang 4 bit thap
    digitalWrite(LCD_RS,1);             // RS=1 gui du lieu
    digitalWrite(LCD_RW,0);            // RW=0 ghi du lieu
    digitalWrite(LCD_EN,1);           // EN=1
    delay(10);                       // Doi!!!
    digitalWrite(LCD_EN,0);                     // EN=0, tin hieu 1-0 cho phep ghi/doc

    delay(10);
}

void LCD_Init()    //Function to prepare the LCD  and get it ready
{
    Lcd_CmdWrite(0x02);        // Initialize Lcd in 4-bit mode
    Lcd_CmdWrite(0x28);        // enable 5x7 mode for chars 
    Lcd_CmdWrite(0x0E);        // Display OFF, Cursor ON
    Lcd_CmdWrite(0x01);        // Clear Display
    Lcd_CmdWrite(0x80);        // Move the cursor to beginning of first line
}

void LCD_SecondRow()
{
  Lcd_CmdWrite(0xC0);// Sencond Row begining
  delay(10);
}

// SPI interrupt routine
ISR (SPI_STC_vect)
{
  byte c = SPDR;

  if (c == 1)  //nhan duoc tin hieu tu Master de yeu cau truyen data
    {
      active = true;
      pos = 0;
      SPDR = buf [pos++];   // send first byte
      return;
    }
  if (!active)
    {
      SPDR = 0;
      return;
    }

  //Thanh ghi de truyen
  SPDR = buf [pos];
  if (buf [pos] == 0 || ++pos >= sizeof (buf)) //khong co du lieu hoac het bo dem
    active = false;
}

void Display()
{
    String S_character="N.do: ";
    S_character = S_character + x + char(223) + "C";
    int j=0;

    while(S_character[j] != '\0') // searching the null terminator in the sentence
    {
        Lcd_DataWrite(S_character[j]);
        j++;
     }
}

void loop ()
{
  val = analogRead(analogPin);  // read the input pin
  float voltage = (float)val * 5.0 / 1024.0;
  temp = voltage * 100.0;
  //nguyen
  nguyen = temp/1.0;
  //thap phan
  le = (temp - nguyen)*100;
  x = String (nguyen) + "." + String (le);
  buf=x;
//  LCD_Init();
//  Display();
}
