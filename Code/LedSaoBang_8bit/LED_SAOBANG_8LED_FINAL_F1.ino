//khai bao bien
int LED0 = 0;
int LED1 = 1;
int LED2 = 2;
int LED3 = 3;
int LED4 = 4;
int LED5 = 5;
int LED6 = 6;
int LED7 = 7;

int gt1;
int gt2;
int gt3;
int gt4;
int gt5;
int gt6;
int gt7;
int gt8;

 // khai báo mảng cố định để tạo sao băng
 int SB[8][24]={
 {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0}
};

void setup() 
{
  // put your setup code here, to run once:
  pinMode(LED0,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT); 
}

void saobang8() // LED sao bang voi 8 LED
{ 
  int dem,cot,hang;
  for(cot=0;cot<17;cot++) // dich chuyen 1 lan theo cot
  {
    for(dem=1;dem<15;dem++) // lap lai 15 lan de hien thi theo tan so hien thi nhu pwm
    {
      for(hang=0;hang<8;hang++) 
      { 
        gt1=SB[hang][cot]; 
        gt2=SB[hang][cot+1];
        gt3=SB[hang][cot+2];
        gt4=SB[hang][cot+3];
        gt5=SB[hang][cot+4];
        gt6=SB[hang][cot+5];
        gt7=SB[hang][cot+6];
        gt8=SB[hang][cot+7];
        
        digitalWrite(LED0,gt1);
        digitalWrite(LED1,gt2);
        digitalWrite(LED2,gt3);
        digitalWrite(LED3,gt4);
        digitalWrite(LED4,gt5);
        digitalWrite(LED5,gt6);
        digitalWrite(LED6,gt7);
        digitalWrite(LED7,gt8);
        delay(1);
      }
    }
  }
 }

//--------------------------()--------------------------//
void loop() {
  // put your main code here, to run repeatedly:
  saobang8(); // gọi chương trình tạo sao băng ra dùng 
}
