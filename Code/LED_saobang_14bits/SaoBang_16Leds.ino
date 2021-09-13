//khai bao bien
int LED0 = 0;
int LED1 = 1;
int LED2 = 2;
int LED3 = 3;
int LED4 = 4;
int LED5 = 5;
int LED6 = 6;
int LED7 = 7;
int LED8 = 8;
int LED9 = 9;
int LED10 = 10;
int LED11 = 11;
int LED12 = 12;
int LED13 = 13;

int gt1;
int gt2;
int gt3;
int gt4;
int gt5;
int gt6;
int gt7;
int gt8;
int gt9;
int gt10;
int gt11;
int gt12;
int gt13;
int gt14;

 // khai báo mảng cố định để tạo sao băng
 int SB[15][42]={
 {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},//1
 {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},//2
 {0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},//3
 {0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},//4
 {0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1},//5
 {0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1},//6
 {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1},//7
 {0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1},//8
 {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1},//9
 {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1},//10
 {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1},//11
 {0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},//12
 {0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},//13
 {0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1},//14
 {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},//15
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
  pinMode(LED8,OUTPUT);
  pinMode(LED9,OUTPUT);
  pinMode(LED10,OUTPUT);
  pinMode(LED11,OUTPUT);
  pinMode(LED12,OUTPUT);
  pinMode(LED13,OUTPUT);
}

void saobang14_1() // LED sao bang voi 8 LED
{ 
  int dem,cot,hang;
  for(cot=0;cot<28;cot++) // dich chuyen 1 lan theo cot
  {
    for(dem=1;dem<5;dem++) // lap lai 5 lan de hien thi theo tan so hien thi nhu pwm
    {
      for(hang=0;hang<15;hang++)
      { 
        gt1=SB[hang][cot]; 
        gt2=SB[hang][cot+1];
        gt3=SB[hang][cot+2];
        gt4=SB[hang][cot+3];
        gt5=SB[hang][cot+4];
        gt6=SB[hang][cot+5];
        gt7=SB[hang][cot+6];
        gt8=SB[hang][cot+7];
        gt9=SB[hang][cot+8]; 
        gt10=SB[hang][cot+9];
        gt11=SB[hang][cot+10];
        gt12=SB[hang][cot+11];
        gt13=SB[hang][cot+12];
        gt14=SB[hang][cot+13];
        
        digitalWrite(LED0,gt1);
        digitalWrite(LED1,gt2);
        digitalWrite(LED2,gt3);
        digitalWrite(LED3,gt4);
        digitalWrite(LED4,gt5);
        digitalWrite(LED5,gt6);
        digitalWrite(LED6,gt7);
        digitalWrite(LED7,gt8);
        digitalWrite(LED8,gt9);
        digitalWrite(LED9,gt10);
        digitalWrite(LED10,gt11);
        digitalWrite(LED11,gt12);
        digitalWrite(LED12,gt13);
        digitalWrite(LED13,gt14);
        delay(1);
      }
    }
  }
 }
//--------------------------()--------------------------//
void loop() {
  // put your main code here, to run repeatedly:
  saobang14_1(); // gọi chương trình tạo sao băng ra dùng 
}
