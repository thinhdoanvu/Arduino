//LCD Pin name: 4=RS
//LCD Pin name: 5=RW
//LCD Pin name: 6=E

//String stringOne =  String(13);                           // using a constant integer
//String stringOne =  String(analogRead(0), DEC);           // using an int and a base
//String stringOne =  String(45, HEX);                      // using an int and a base (hexadecimal)
//String stringOne =  String(255, BIN);                     // using an int and a base (binary)
//String stringOne =  String(millis(), DEC);                // using a long and a base
//String stringOne =  String(5.698, 3);                     // using a float and the decimal places

int RS = 12;
int RW = 11;
int E = 13;
 
//khai bao bien
int i;
int analogPin = A3; //Doc du lieu cho ADC
int val = 0;  
float temp;

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
    digitalWrite(RS,1);//RS=1, ghi du lieu
    digitalWrite(RW,0);
    digitalWrite(E,1);
    delay(100);
    digitalWrite(E,0);
}

void LCD_Init()    //Function to prepare the LCD  and get it ready
{
    LCD_Command(0x38);  // for using 2 lines and 5X7 matrix of LCD
    delay(10);
    LCD_Command(0x0C);  // turn display ON, cursor blinking
    delay(10);
    LCD_Command(0x01);  //clear screen
    delay(10);
    LCD_Command(0x80);  // bring cursor to position 0 of line 1
    delay(10);
}

void LCD_ShiftLeft()
{
  LCD_Command(0x18);// Shift display entire to left
  delay(10);
}

void LCD_SecondRow()
{
  LCD_Command(0xC0);// Sencond Row begining
  //delay(10);
}

void Display()
{
    String S_character="ADC: ";
    String value =  String(temp, 3); //lam tron 3 chu so thap phan 
    S_character = S_character + value;
    int j=0;

    while(S_character[j] != '\0') // searching the null terminator in the sentence
    {
        LCD_Data(S_character[j]);
        j++;
     }
}


void loop() 
{
  val = analogRead(analogPin);  // read the input pin - digital: 0 - 1023
  float voltage = (float)val * 5.0 / 1024.0; // so thuc
  temp = voltage * 100.0;//gia su 100 độ C = 5V (LM35)
  LCD_Init();
  Display();
}
