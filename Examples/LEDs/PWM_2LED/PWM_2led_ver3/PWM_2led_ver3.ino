//khai bao bien
int i;
int j;
int k;

int D13 = 13;//D7=Pin13
int D12 = 12;//D6=Pin12
int D11 = 11;//D7=Pin11
int D10 = 10;//D6=Pin10
int D9 = 9;//D7=Pin9
int D8 = 8;//D6=Pin8
int D7 = 7;//D7=Pin7
int D6 = 6;//D6=Pin6
int D5 = 5;//D7=Pin5
int D4 = 4;//D6=Pin4
int D3 = 3;//D7=Pin3
int D2 = 2;//D6=Pin2
int D1 = 1;//D7=Pin1
int D0 = 0;//D6=Pin0

int time_led[] = {8,8,9,9,10,10,11,16};

//set PIN up out
void setup() {
  // set up all the LEDs as OUTPUT
  pinMode(D13, OUTPUT);
  pinMode(D12, OUTPUT);
  pinMode(D11, OUTPUT);
  pinMode(D10, OUTPUT);
  pinMode(D9, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D0, OUTPUT);

  i=8;
}

//chuong trinh con tạo ra xung vuong co do rong 255
void PWM_ON1()
{
  for(k=0;k<8;k++)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(k, 1); 
      delay(time_led[k]-i);
      
      //Tat LED 0
      digitalWrite(k, 0);
      delay(time_led[k]);
      j++;
    }
    delay(5);
  }
}

void PWM_ON2()
{
  for(k=7;k>0;k--)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(k, 1); 
      delay(time_led[k]-i);
      
      //Tat LED 0
      digitalWrite(k, 0);
      delay(time_led[k]);
      j++;
    }
    delay(5);
  }
}

//chuong trinh chinh
void loop()
{
  PWM_ON1();
  //PWM_ON2();
  delay(100);
}

//Thoi gian = 16ms ung voi f=60Hz
