#include <Wire.h>                                   //Thư viện Wire giao tiếp I2C
#define LcdDataBus  PORTD
int LCD_RS = 11;//D0
int LCD_RW = 12;//D1
int LCD_EN = 13;//D2

//khai bao bien

const byte DS1307 = 0x68;                           //Địa chỉ DS1307
const byte NumberOfFields = 7;                      //Số byte cần đọc
int second, minute, hour, day, wday, month, year;   //Biến lưu giá trị 
String Times;
String Dates;

void setup()
{
  DDRD=0xFF;
  pinMode(LCD_RS,OUTPUT); 
  pinMode(LCD_RW,OUTPUT);
  pinMode(LCD_EN,OUTPUT);
}

void loop()
{
  //Nap thoi gian cho DS1307
    //ReadSerial();
    ReadDS1307();                                    //Đọc từ RTC
    LCD_Init();
    DisplayDS1307();                                 //Hiển thị lên LCD
    delay(1000);                                     //Dừng 10ms cho LCD đỡ nháy
}

void ReadSerial()
{
    byte hr; byte mins; byte sec; byte wd; byte d; byte mth; byte yr;    //Biến lưu
    String buff = Serial.readStringUntil('\n');                         //Đọc đến khi hết dòng
    String tmp;                                                         //Biến tạm để tách  
    
    for (int i=0;i<7;i++)                                               //Đọc vào 7 thông tin theo thứ tự (Giờ-Phút-Giây-Thứ trong tuần-Ngày-Tháng-Năm)
    {
      int index=buff.indexOf(" ");                                      //Lấy vị trí đến dấu cách
      tmp=buff.substring(0,index);                                      //Tách biến tạm
      buff=buff.substring(index+1,buff.length());                       //Tính lại buff
      switch (i)                                                        //Đọc dữ liệu và gán vào
      {
        case 0:
          hr=tmp.toInt();
          break;
        case 1:
          mins=tmp.toInt();
          break;
        case 2:
          sec=tmp.toInt();
          break;
        case 3:
          wd=tmp.toInt();
          break;
        case 4:
          d=tmp.toInt();
          break;
        case 5:
          mth=tmp.toInt();
          break;
        case 6:
          yr=tmp.toInt();
          break;
      }
    }
    //SetTime(hr, mins, sec, wd, d, mth, yr);                    //Thiết lập lại thời gian
     //SetTime(15, 57, 45, 7, 26, 12, 20);    
}

void ReadDS1307()
{
  Wire.beginTransmission(DS1307); //Giao tiep I2C voi dia chi 0x68 cua DS1307
  Wire.write((byte)0x00);
  Wire.endTransmission();
  Wire.requestFrom(DS1307, NumberOfFields);

//  second = bcd2dec(Wire.read() & 0x7f);
//  minute = bcd2dec(Wire.read() );
//  hour   = bcd2dec(Wire.read() & 0x3f); // chế độ 24h.
//  wday   = bcd2dec(Wire.read() );
//  day    = bcd2dec(Wire.read() );
//  month  = bcd2dec(Wire.read() );
//  year   = bcd2dec(Wire.read() );
  //year   += 2000;

  second = (Wire.read() & 0x7f);
  minute = (Wire.read() );
  hour   = (Wire.read() & 0x3f); // chế độ 24h.
  wday   = (Wire.read() );
  day    = (Wire.read() );
  month  = (Wire.read() );
  year   = (Wire.read() );
  //year   += 2000;
  
  //Times = String(hour) + ":" + String (minute) + ":" + String (second);
  Times=String(second);
  //Dates = String (day) + "/" + String (month) + "/" + String (year);
}

int bcd2dec(byte num) { return ((num / 16 * 10) + (num % 16)); } // Chuyển từ format BCD (Binary-Coded Decimal) sang Decimal
int dec2bcd(byte num) { return ((num / 10 * 16) + (num % 10)); } // Chuyển từ Decimal sang BCD

void DisplayDS1307()
{
  //Xuất ra LCD
  int i;
  
    for(i=0;Times[i]!=0;i++)
    {
        Lcd_DataWrite(Times[i]);
    }
    /*

    Lcd_CmdWrite(0xc0);        //Dong 2 hien thi ngay thang nam
    for(i=0;Dates[i]!=0;i++)
    {
        Lcd_DataWrite(Dates[i]);
    }
    */
}

void SetTime(byte hr, byte mins, byte sec, byte wd, byte d, byte mth, byte yr)
{
  Wire.beginTransmission(DS1307); //Bắt đầu truyền đến địa chỉ DS1307
  Wire.write(byte(0x00));         //Đặt lại con trỏ
  Wire.write(dec2bcd(sec));
  Wire.write(dec2bcd(mins));
  Wire.write(dec2bcd(hr));
  Wire.write(dec2bcd(wd));        //Ngày trong tuần: 1 = Chủ nhật; 7 = Thứ bảy
  Wire.write(dec2bcd(d));
  Wire.write(dec2bcd(mth));
  Wire.write(dec2bcd(yr));
  Wire.endTransmission();         //Ngắt tín hiệu
}

/* Gui ma lenh ra LCD 
   Trong che do 4bit, a byte lenh duoc gui toi ca 2 thanh phan thap va cao (4-bit nibbles) */
void Lcd_CmdWrite(char cmd)
{
  LcdDataBus = (cmd & 0xF0);//che 4 bit thap chi giu 4 bit cao
  digitalWrite(LCD_RS,0);               // RS=0 gui ma lenh
  digitalWrite(LCD_RW,0);               // RW=0 ghi lenh
  digitalWrite(LCD_EN,1);               // EN=1
  delay(10);                           // Doi!!!
  digitalWrite(LCD_EN,0);               // EN=0, tin hieu 1-0 cho phep ghi/doc
  delay(10);

  LcdDataBus = ((cmd<<4) & 0xF0); //Dich trai 4 bit de chuyen sang 4 bit thap
  digitalWrite(LCD_RS,0);                   // RS=0 gui ma lenh
  digitalWrite(LCD_RW,0);                   // RW=0 ghi lenh
  digitalWrite(LCD_EN,1);                  // EN=1
  delay(10);                             // Doi!!!
  digitalWrite(LCD_EN,0);                 // EN=0, tin hieu 1-0 cho phep ghi/doc
  delay(10);
}

/* Gui du lieu ra LCD 
   Trong che do 4bit, a byte du lieu duoc gui toi ca 2 thanh phan thap va cao (4-bit nibbles) */
void Lcd_DataWrite(char dat)
{
    LcdDataBus = (dat & 0xF0);//che 4 bit thap chi giu 4 bit cao
    digitalWrite(LCD_RS,1);               // RS=1 gui du lieu
    digitalWrite(LCD_RW,0);               // EN=1
    digitalWrite(LCD_EN,1);               // EN=1
    delay(10);                           // Doi!!!
    digitalWrite(LCD_EN,0);               // EN=0, tin hieu 1-0 cho phep ghi/doc

    delay(10);

    LcdDataBus = ((dat<<4) & 0xF0);  //Dich trai 4 bit de chuyen sang 4 bit thap
    digitalWrite(LCD_RS,1);                     // Send HIGH pulse on RS pin for selecting data register
    digitalWrite(LCD_RW,0);                     // Send LOW pulse on RW pin for Write operation
    digitalWrite(LCD_EN,1);                     // EN=1
    delay(10);                      // Doi!!!
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
void LCD_ShiftLeft()
{
  Lcd_CmdWrite(0x18);// Shift display entire to left
  delay(10);
}
void LCD_SecondRow()
{
  Lcd_CmdWrite(0xC0);// Sencond Row begining
  delay(10);
}
