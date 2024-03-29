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
float val;
int analogPin = A0; //Doc du lieu cho ADC
float Volts; //voltage read by arduino
float tempC; //final temperature in degree celsius after calibration
float tempF; //final temperature in degree fahrenhiet after calibration
float temp1; //temperatuere before calibration
float calibration; //calibration 
float Rx; //Resistance of PT100
 
// variables that required to convert voltage into resistance
float C = 95; //Constant of straight line (Y = mx + C)
float slope = 8.7; // Slope of straight line (Y = mx + C)
 
 
// variables that required to convert resistance into temperatures
float R0 = 100.0; //Resistance of minimum temperature to be measured (at 0 degree)
float alpha = 0.00375; // value of alpha from datasheet

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
  delay(10);
  digitalWrite(E,0);
}

void LCD_Data(unsigned char dulieu)  //Function to send display data to LCD
{
    PORTD = dulieu;
    digitalWrite(RS,1);//RS=1, ghi du lieu
    digitalWrite(RW,0);
    digitalWrite(E,1);
    delay(10);
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
    String S1="Ndo: ";
    S1 = S1 + String(tempC, 2)+ char(223)+ "C"; //lam tron 2 chu so thap phan 
    int j=0;

    while(S1[j] != '\0') // searching the null terminator in the sentence
    {
        LCD_Data(S1[j]);
        j++;
     }

   
}


void loop() 
{
  val = analogRead(analogPin);  // read the input pin
  //Hien thi gia tri dien ap
  // Bits to Voltage
  Volts  = (val/1024.0)*5;
   // Converting voltage to resistance
  Rx = Volts*slope+C; //y=mx+c
  // Converting resistnace to temperature
  temp1= (Rx/R0-1.0)/alpha; // from Rx = R0(1+alpha*X)
  calibration=0.3+(0.005*temp1); //tolerance for class B PT100
  tempC=temp1-calibration; // Final temperature in celsius
  // conversion of celsius to fehrenheit
   tempF = tempC*1.8+32; //Final temperature in fehrenheit 
  
  //temp = voltage * 100.0;
  
  LCD_Init();
  Display();
}
