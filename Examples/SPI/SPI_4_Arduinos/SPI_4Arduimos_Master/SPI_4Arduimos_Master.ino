#include <SPI.h>

//khai bao chan thiet bi
#define LcdDataBus PORTD
int LCD_RS = A3;//A3 pin
int LCD_RW = A4;//A4 pin
int LCD_EN = A5;//A5 pin

//khai bao bien
String nhietdo;
String doam;
String pH;
String S_character;
char buf[20];
int j;

void setup()
{
  Serial.begin (9600);
  Serial.println ("Starting");

  digitalWrite(SS, HIGH);  // Ngat ket noi den cac Slave
  SPI.begin ();

  // Chia tan so truyen
  SPI.setClockDivider(SPI_CLOCK_DIV8);

  //Khai bao cho LCD
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

void Display()
{
  //Hien thi gia tri cua nhiet do
   j=0;
   S_character="Receive... ";
   while(S_character[j] != '\0') // searching the null terminator in the sentence
    {
        Lcd_DataWrite(S_character[j]);
        j++;
     }
   //Nhay den dong so 2 va hien thi gia tri nhiet do
   LCD_SecondRow();
   j=0;
   S_character="N.do: " + nhietdo + char(223) + "C";

    while(S_character[j] != '\0') // searching the null terminator in the sentence
    {
        Lcd_DataWrite(S_character[j]);
        j++;
     }

     //Hien thi gia tri cua do am
     LCD_Init();
   j=0;
   S_character="Receive... ";
   while(S_character[j] != '\0') // searching the null terminator in the sentence
    {
        Lcd_DataWrite(S_character[j]);
        j++;
     }
   //Nhay den dong so 2 va hien thi gia tri do am
   LCD_SecondRow();
   j=0;
   S_character="D.am: " + doam + "%";

    while(S_character[j] != '\0') // searching the null terminator in the sentence
    {
        Lcd_DataWrite(S_character[j]);
        j++;
     }

     //Hien thi gia tri cua pH
   LCD_Init();
   j=0;
   S_character="Receive... ";
   while(S_character[j] != '\0') // searching the null terminator in the sentence
    {
        Lcd_DataWrite(S_character[j]);
        j++;
     }
   //Nhay den dong so 2 va hien thi gia tri pH
   LCD_SecondRow();
   j=0;
   S_character="pH: " + pH;

    while(S_character[j] != '\0') // searching the null terminator in the sentence
    {
        Lcd_DataWrite(S_character[j]);
        j++;
     }
}

void NhietDo()
{
  delay (100);  // Cho trong giay lat de ben Slave hoan tat xu ly roi moi yeu cau gui 

  //Gui du lieu den Slave, doc gia tri do nhiet do
  digitalWrite(SS, LOW);    
  SPI.transfer (1); //Truyen byte co gia tri la 1 de Slave biet va bat dau truyen
  
  for (int pos = 0; pos < sizeof (buf) - 1; pos++)
    {
      delayMicroseconds (15);
      buf [pos] = SPI.transfer (0);
      if (buf [pos] == 0)
      {
        break;
      }
    }

  //buf [sizeof (buf) - 1] = 0;  // ensure terminating null

  // Ngat ket noi
  digitalWrite(SS, HIGH); //dung truyen va doi xu ly de hien thi da

  Serial.print ("Nhiet do: ");
  Serial.println (buf);
  
  nhietdo=buf; //ghi du lieu ra LCD
}

void DoAm()
{
  delay (100);  // Cho trong giay lat de ben Slave hoan tat xu ly roi moi yeu cau gui 

  //Gui du lieu den Slave, doc gia tri do nhiet do
  digitalWrite(SS, LOW);    
  SPI.transfer (2); //Truyen byte co gia tri la 2 de Slave biet va bat dau truyen
  
  for (int pos = 0; pos < sizeof (buf) - 1; pos++)
    {
      delayMicroseconds (15);
      buf [pos] = SPI.transfer (0);
      if (buf [pos] == 0)
      {
        break;
      }
    }

  //buf [sizeof (buf) - 1] = 0;  // ensure terminating null

  // Ngat ket noi
  digitalWrite(SS, HIGH); //dung truyen va doi xu ly de hien thi da

  Serial.print ("Do am: ");
  Serial.println (buf);
  
  doam=buf; //ghi du lieu ra LCD
}

void PH()
{
  delay (100);  // Cho trong giay lat de ben Slave hoan tat xu ly roi moi yeu cau gui 

  //Gui du lieu den Slave, doc gia tri do nhiet do
  digitalWrite(SS, LOW);    
  SPI.transfer (3); //Truyen byte co gia tri la 1 de Slave biet va bat dau truyen
  
  for (int pos = 0; pos < sizeof (buf) - 1; pos++)
    {
      delayMicroseconds (15);
      buf [pos] = SPI.transfer (0);
      if (buf [pos] == 0)
      {
        break;
      }
    }

  //buf [sizeof (buf) - 1] = 0;  // ensure terminating null

  // Ngat ket noi
  digitalWrite(SS, HIGH); //dung truyen va doi xu ly de hien thi da

  Serial.print ("pH: ");
  Serial.println (buf);
  
  pH=buf; //ghi du lieu ra LCD
}

void loop ()
{
  NhietDo();
  DoAm();
  PH();
  
  LCD_Init();
  Display();
  delay (100);  // 1 second delay 
}
