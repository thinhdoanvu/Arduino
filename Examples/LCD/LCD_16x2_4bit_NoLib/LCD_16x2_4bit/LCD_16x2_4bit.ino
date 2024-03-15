//LCD Pin name: 4=RS
//LCD Pin name: 5=RW
//LCD Pin name: 6=EN

#define LcdDataBus  PORTD
int LCD_RS = 11;//D0
int LCD_RW = 12;//D1
int LCD_EN = 13;//D2
 
//khai bao bien
int i;

//khai bao thu vien chan LCD
void setup() 
{
 DDRD=0xFF;
 pinMode(LCD_RS,OUTPUT); 
 pinMode(LCD_RW,OUTPUT);
 pinMode(LCD_EN,OUTPUT);
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

void Display()
{
  char i,a[]={"Good morning!"};
  
    Lcd_DataWrite('H');
    Lcd_DataWrite('e');
    Lcd_DataWrite('l');
    Lcd_DataWrite('l');
    Lcd_DataWrite('o');
    Lcd_DataWrite(' ');
    Lcd_DataWrite('w');
    Lcd_DataWrite('o');
    Lcd_DataWrite('r');
    Lcd_DataWrite('l');
    Lcd_DataWrite('d');
    Lcd_DataWrite(char(223));
    
    Lcd_CmdWrite(0xc0);        //Go to Next line and display Good Morning
    for(i=0;a[i]!=0;i++)
    {
        Lcd_DataWrite(a[i]);
    }

    while(1);

    //11011111 ky hieu nhiet do
}


void loop() 
{
  LCD_Init();
  Display();
}
