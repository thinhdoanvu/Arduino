//khai bao bien
int i;
int j;

int D7 = 13;//D7=Pin13

//set PIN up out
void setup() {
  // set up all the LEDs as OUTPUT
  pinMode(D7, OUTPUT);
}

//chuong trinh con tạo ra xung vuong co do rong 255
void delay_thinh(long int a)
{
  delay(a);
}

void PWM_ON1(long int a)
{
   for(i=0;i<a;i++)
   {
    j=0;
    while(j<5)
    {
      //Bat LED
      digitalWrite(D7, 1); 
      delay_thinh(i);
      //Tat LED
      digitalWrite(D7, 0);
      delay(a-i);
      j++;
    }
   }
}

void PWM_ON2(long int a)
{
   for(i=0;i<a;i++)
   {
    j=0;
    while(j<5)
    {
      //Bat LED
      digitalWrite(D7, 1); 
      delay_thinh(a-i);
      //Tat LED
      digitalWrite(D7, 0);
      delay(i);
      j++;
    }
   }
}

//chuong trinh chinh
void loop()
{
  PWM_ON1(16);
  PWM_ON2(16);
}

//Thoi gian = 16ms ung voi f=60Hz
