//khai bao bien
int i;
int j;
int k;

int D7 = 7;//D7=Pin7
int D6 = 6;//D6=Pin6
int D5 = 5;//D7=Pin7
int D4 = 4;//D6=Pin6
int D3 = 3;//D7=Pin7
int D2 = 2;//D6=Pin6
int D1 = 1;//D7=Pin7
int D0 = 0;//D6=Pin6

int time_led[] = {16,17,18,19};

//set PIN up out
void setup() {
  // set up all the LEDs as OUTPUT
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D0, OUTPUT);

  i=0;
}

//chuong trinh con tạo ra xung vuong co do rong 255
void delay_thinh(long int a)
{
  delay(a);
}

void PWM_ON1()
{
  if(i==0)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

   //LED1
    j=0;
    while(j<5)
    {
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }
    
   //LED2
    j=0;
    while(j<5)
    {
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
       j++;
    }

   //LED3
    j=0;
    while(j<5)
    {
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==1)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }
    
    //LED1
    j=0;
    while(j<5)
    {
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }
    
    //LED2
    j=0;
    while(j<5)
    {
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }
    
    //LED3    
    j=0;
    while(j<5)
    {
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==2)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }
    
    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }
    
    //LED2
    j=0;
    while(j<5)
    {
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==3)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }
    
    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==4)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }
    
    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }

  if(i==5)
  {
     //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }
    
    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==6)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }
    
    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }

  if(i==7)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==8)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }
    
    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==9)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==10)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    j=0;
    //LED1
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==11)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==12)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==13)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }

  if(i==14)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }
    
    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }
  
  if(i==15)
  {
     //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
    }
  }

  if(i==16)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay_thinh(i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay(time_led[0]-i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay_thinh(i-1);
      //Tat LED 1
      digitalWrite(1, 0);
      delay(time_led[1]-i);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay_thinh(i-2);
      //Tat LED 2
      digitalWrite(2, 0);
      delay(time_led[2]-i);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay_thinh(i-3);
      //Tat LED 3
      digitalWrite(3, 0);
      delay(time_led[3]-i);
      j++;
    }
  }

   if(i==17)
  {
    //LED0
    j=0;
    while(j<5)
    {
      j++;
    }
  }
}

void PWM_ON2()
{
   for(i=0;i<17;i++)//16 mili seconds
   {
    j=0;
    while(j<5)
    {
      //Bat LED
      digitalWrite(7, 1); 
      delay_thinh(16-i);
      //Tat LED
      digitalWrite(7, 0);
      delay(i);
      j++;
    }
   }
}

void display()
{
  PWM_ON1();
  //PWM_ON2();
}

//chuong trinh chinh
void loop()
{
  for(i=0;i<15;i++)
  {
    display();
  }
}

//Thoi gian = 16ms ung voi f=60Hz
