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

int time_led[] = {16,16,16,16,16,16,16,16,16,16,16,16,16,16};
int time_led_off[]={23,22,21,20,19,18,17,16};

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

    //LED4
    j=0;
    while(j<5)
    {
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Tat LED 3
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9
    j=0;
    while(j<5)
    {
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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
   
    //LED4 
    j=0;
    while(j<5)
    {
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }
    
    //LED5  
    j=0;
    while(j<5)
    {
      //Tat LED5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }
    
    //LED6
    j=0;
    while(j<5)
    {
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7   
    j=0;
    while(j<5)
    {
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9 
    j=0;
    while(j<5)
    {
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9 
    j=0;
    while(j<5)
    {
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }
    
    //LED5
    j=0;
    while(j<5)
    {
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }
    
    //LED6
    j=0;
    while(j<5)
    {
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }
    
    //LED7
    j=0;
    while(j<5)
    {
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9 
    j=0;
    while(j<5)
    {
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED4
    j=0;
    while(j<5)
    {
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9 
    j=0;
    while(j<5)
    {
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9 
    j=0;
    while(j<5)
    {
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9 
    j=0;
    while(j<5)
    {
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Bat LED 6
      digitalWrite(6, 1); 
      delay_thinh(i-6);
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9 
    j=0;
    while(j<5)
    {
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Bat LED 6
      digitalWrite(6, 1); 
      delay_thinh(i-6);
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Bat LED 7
      digitalWrite(7, 1); 
      delay_thinh(i-7);
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9 
    j=0;
    while(j<5)
    {
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Bat LED 6
      digitalWrite(6, 1); 
      delay_thinh(i-6);
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Bat LED 7
      digitalWrite(7, 1); 
      delay_thinh(i-7);
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Bat LED 8
      digitalWrite(8, 1); 
      delay_thinh(i-8);
      //Tat LED 7
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9 
    j=0;
    while(j<5)
    {
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Bat LED 6
      digitalWrite(6, 1); 
      delay_thinh(i-6);
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Bat LED 7
      digitalWrite(7, 1); 
      delay_thinh(i-7);
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Bat LED 8
      digitalWrite(8, 1); 
      delay_thinh(i-8);
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9
    j=0;
    while(j<5)
    {
      //Bat LED 9
      digitalWrite(9, 1); 
      delay_thinh(i-9);
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Bat LED 6
      digitalWrite(6, 1); 
      delay_thinh(i-6);
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Bat LED 7
      digitalWrite(7, 1); 
      delay_thinh(i-7);
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Bat LED 8
      digitalWrite(8, 1); 
      delay_thinh(i-8);
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9
    j=0;
    while(j<5)
    {
      //Bat LED 9
      digitalWrite(9, 1); 
      delay_thinh(i-9);
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Bat LED 10
      digitalWrite(10, 1); 
      delay_thinh(i-10);
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Bat LED 6
      digitalWrite(6, 1); 
      delay_thinh(i-6);
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Bat LED 7
      digitalWrite(7, 1); 
      delay_thinh(i-7);
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Bat LED 8
      digitalWrite(8, 1); 
      delay_thinh(i-8);
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9
    j=0;
    while(j<5)
    {
      //Bat LED 9
      digitalWrite(9, 1); 
      delay_thinh(i-9);
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Bat LED 10
      digitalWrite(10, 1); 
      delay_thinh(i-10);
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Bat LED 11
      digitalWrite(11, 1); 
      delay_thinh(i-11);
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Bat LED 6
      digitalWrite(6, 1); 
      delay_thinh(i-6);
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Bat LED 7
      digitalWrite(7, 1); 
      delay_thinh(i-7);
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Bat LED 8
      digitalWrite(8, 1); 
      delay_thinh(i-8);
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9
    j=0;
    while(j<5)
    {
      //Bat LED 9
      digitalWrite(9, 1); 
      delay_thinh(i-9);
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Bat LED 10
      digitalWrite(10, 1); 
      delay_thinh(i-10);
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Bat LED 11
      digitalWrite(11, 1); 
      delay_thinh(i-11);
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Bat LED 12
      digitalWrite(12, 1); 
      delay_thinh(i-12);
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Bat LED 6
      digitalWrite(6, 1); 
      delay_thinh(i-6);
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Bat LED 7
      digitalWrite(7, 1); 
      delay_thinh(i-7);
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Bat LED 8
      digitalWrite(8, 1); 
      delay_thinh(i-8);
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9
    j=0;
    while(j<5)
    {
      //Bat LED 9
      digitalWrite(9, 1); 
      delay_thinh(i-9);
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Bat LED 10
      digitalWrite(10, 1); 
      delay_thinh(i-10);
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Bat LED 11
      digitalWrite(11, 1); 
      delay_thinh(i-11);
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Bat LED 12
      digitalWrite(12, 1); 
      delay_thinh(i-12);
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Bat LED 13
      digitalWrite(13, 1); 
      delay_thinh(i-13);
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Bat LED 6
      digitalWrite(6, 1); 
      delay_thinh(i-6);
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Bat LED 7
      digitalWrite(7, 1); 
      delay_thinh(i-7);
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Bat LED 8
      digitalWrite(8, 1); 
      delay_thinh(i-8);
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9
    j=0;
    while(j<5)
    {
      //Bat LED 9
      digitalWrite(9, 1); 
      delay_thinh(i-9);
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Bat LED 10
      digitalWrite(10, 1); 
      delay_thinh(i-10);
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Bat LED 11
      digitalWrite(11, 1); 
      delay_thinh(i-11);
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Bat LED 12
      digitalWrite(12, 1); 
      delay_thinh(i-12);
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Bat LED 13
      digitalWrite(13, 1); 
      delay_thinh(i-13);
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
      j++;
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

    //LED4
    j=0;
    while(j<5)
    {
      //Bat LED 4
      digitalWrite(4, 1); 
      delay_thinh(i-4);
      //Tat LED 4
      digitalWrite(4, 0);
      delay(time_led[4]-i);
      j++;
    }

    //LED5
    j=0;
    while(j<5)
    {
      //Bat LED 5
      digitalWrite(5, 1); 
      delay_thinh(i-5);
      //Tat LED 5
      digitalWrite(5, 0);
      delay(time_led[5]-i);
      j++;
    }

    //LED6
    j=0;
    while(j<5)
    {
      //Bat LED 6
      digitalWrite(6, 1); 
      delay_thinh(i-6);
      //Tat LED 6
      digitalWrite(6, 0);
      delay(time_led[6]-i);
      j++;
    }

    //LED7
    j=0;
    while(j<5)
    {
      //Bat LED 7
      digitalWrite(7, 1); 
      delay_thinh(i-7);
      //Tat LED 7
      digitalWrite(7, 0);
      delay(time_led[7]-i);
      j++;
    }

    //LED8
    j=0;
    while(j<5)
    {
      //Bat LED 8
      digitalWrite(8, 1); 
      delay_thinh(i-8);
      //Tat LED 8
      digitalWrite(8, 0);
      delay(time_led[8]-i);
      j++;
    }

    //LED9
    j=0;
    while(j<5)
    {
      //Bat LED 9
      digitalWrite(9, 1); 
      delay_thinh(i-9);
      //Tat LED 9
      digitalWrite(9, 0);
      delay(time_led[9]-i);
      j++;
    }

    //LED10
    j=0;
    while(j<5)
    {
      //Bat LED 10
      digitalWrite(10, 1); 
      delay_thinh(i-10);
      //Tat LED 10
      digitalWrite(10, 0);
      delay(time_led[10]-i);
      j++;
    }

    //LED11
    j=0;
    while(j<5)
    {
      //Bat LED 11
      digitalWrite(11, 1); 
      delay_thinh(i-11);
      //Tat LED 11
      digitalWrite(11, 0);
      delay(time_led[11]-i);
      j++;
    }

    //LED12
    j=0;
    while(j<5)
    {
      //Bat LED 12
      digitalWrite(12, 1); 
      delay_thinh(i-12);
      //Tat LED 12
      digitalWrite(12, 0);
      delay(time_led[12]-i);
      j++;
    }

    //LED13
    j=0;
    while(j<5)
    {
      //Bat LED 13
      digitalWrite(13, 1); 
      delay_thinh(i-13);
      //Tat LED 13
      digitalWrite(13, 0);
      delay(time_led[13]-i);
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
  if(i==0)
  {
    //LED0
    j=0;
    while(j<5)
    {
      //Bat LED 0
      digitalWrite(0, 1); 
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

   //LED1
    j=0;
    while(j<5)
    {
      //Tat LED 1
      digitalWrite(1, 1);
      delay(time_led_off[0]-i);
      j++;
    }
    
   //LED2
    j=0;
    while(j<5)
    {
      //Tat LED 2
      digitalWrite(2, 1);
      delay(time_led_off[2]-i);
       j++;
    }

   //LED3
    j=0;
    while(j<5)
    {
      //Tat LED 3
      digitalWrite(3, 1);
      delay(time_led_off[3]-i);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }
    
    //LED1
    j=0;
    while(j<5)
    {
      //Tat LED 1
      digitalWrite(1, 1);
      delay_thinh(i);
      j++;
    }
    
    //LED2
    j=0;
    while(j<5)
    {
      //Tat LED 2
      digitalWrite(2, 1);
      delay_thinh(i);
      j++;
    }
    
    //LED3    
    j=0;
    while(j<5)
    {
      //Tat LED 3
      digitalWrite(3, 1);
      delay_thinh(i);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }
    
    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }
    
    //LED2
    j=0;
    while(j<5)
    {
      //Tat LED 2
      digitalWrite(2, 1);
      delay_thinh(i-1);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Tat LED 3
      digitalWrite(3, 1);
      delay_thinh(i-1);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }
    
    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Tat LED 3
      digitalWrite(3, 1);
      delay_thinh(i-2);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }
    
    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }
    
    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }
    
    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }
    
    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    j=0;
    //LED1
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }
    
    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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
      delay(time_led_off[0]-i);
      //Tat LED 0
      digitalWrite(0, 0);
      delay_thinh(i);
      j++;
    }

    //LED1
    j=0;
    while(j<5)
    {
      //Bat LED 1
      digitalWrite(1, 1); 
      delay(time_led_off[1]-i);
      //Tat LED 1
      digitalWrite(1, 0);
      delay_thinh(i-1);
      j++;
    }

    //LED2
    j=0;
    while(j<5)
    {
      //Bat LED 2
      digitalWrite(2, 1); 
      delay(time_led_off[2]-i);
      //Tat LED 2
      digitalWrite(2, 0);
      delay_thinh(i-2);
      j++;
    }

    //LED3
    j=0;
    while(j<5)
    {
      //Bat LED 3
      digitalWrite(3, 1); 
      delay(time_led_off[3]-i);
      //Tat LED 3
      digitalWrite(3, 0);
      delay_thinh(i-3);
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

void display()
{
  //PWM_ON2();
  //delay(20);
  PWM_ON1();
  //delay(20);
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
