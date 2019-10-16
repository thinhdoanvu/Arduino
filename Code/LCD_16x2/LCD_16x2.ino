//LCD Pin name: 4=RS
//LCD Pin name: 5=RW
//LCD Pin name: 6=E

int RS = 12;
int RW = 11;
int E = 13;
 
//khai bao bien
int i;

//khai bao thu vien chan LCD
void setup() 
{
  DDRD=0xFF;
  pinMode(RS,OUTPUT); 
  pinMode(RW,OUTPUT);
  pinMode(E,OUTPUT);
}

void LCD_Command(unsigned char lenh)
{
  PORTD = lenh;
  digitalWrite(RS,0);//RS=0, ghi lệnh
  digitalWrite(RW,0);
  digitalWrite(E,1);
  delay(100);
  digitalWrite(E,0);
}

void LCD_Data(unsigned char dulieu)  //Function to send display data to LCD
{
    PORTD = dulieu;
    digitalWrite(12,1);//RS=1, ghi du lieu
    digitalWrite(11,0);
    digitalWrite(13,1);
    delay(100);
    digitalWrite(13,0);
}

void LCD_Init()    //Function to prepare the LCD  and get it ready
{
    LCD_Command(0x38);  // for using 2 lines and 5X7 matrix of LCD
    delay(10);
    LCD_Command(0x0F);  // turn display ON, cursor blinking
    delay(10);
    LCD_Command(0x01);  //clear screen
    delay(10);
    LCD_Command(0x81);  // bring cursor to position 1 of line 1
    delay(10);
}

void LCD_ShiftLeft()
{
  LCD_Command(0x18);// Shift display entire to left
  delay(10);
}

void Display()
{
    char S_character[]="Arduino Testing With LCD 16x2 ";
    int j=0;
    
    while(S_character[j] != '\0') // searching the null terminator in the sentence
    {
      if(j<16)
      {
        LCD_Data(S_character[j]);
        j++;
        delay(20);//Next character 
      }
      else
      {
        LCD_ShiftLeft();
        LCD_Data(S_character[j]);
        j++;
        delay(20);//Next character 
      }
    }
   
    //Het data, tien hanh dich cho den het
    for(j=0;j<16;j++)
    {
      LCD_ShiftLeft();
    }
}


void loop() 
{
  LCD_Init();
  Display();
}
