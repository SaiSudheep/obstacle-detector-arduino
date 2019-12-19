int trig=12;
int echo=10;
int buzzer=9;
byte zero=2;

#define note 1200

long seven_seg_dig[10][7]={
  {0,0,0,0,0,0,1},
  {1,0,0,1,1,1,1},
  {0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0},
  {1,0,0,1,1,0,0},
  {0,1,0,0,1,0,0},
  {0,1,0,0,0,0,0},
  {0,0,0,1,1,1,1},
  {0,0,0,0,0,0,0},
  {0,0,0,1,1,0,0}
};

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  
  byte pin=2;
  for(int i=0;i<7;i++)
   {
    digitalWrite(pin,HIGH);
    pin++;
   }
   digitalWrite(A0,HIGH);
   digitalWrite(A1,HIGH);
   digitalWrite(A2,HIGH);
   digitalWrite(A3,HIGH);
   digitalWrite(A4,HIGH);
   digitalWrite(A5,HIGH);
   digitalWrite(11,HIGH);
}

void segwrite(long val)
{
  byte digit=val%10;
  val/=10;
  byte num=val%10;
  byte pin=2;
  for(byte count=0;count<7;++count)
  {
    digitalWrite(pin,seven_seg_dig[digit][count]);
    ++pin;
  }
  if(num==0)
  {
    digitalWrite(A5,seven_seg_dig[num][0]);
    digitalWrite(A4,seven_seg_dig[num][1]);
    digitalWrite(A2,seven_seg_dig[num][2]);
    digitalWrite(A3,seven_seg_dig[num][3]);
    digitalWrite(11,seven_seg_dig[num][4]);
    digitalWrite(A0,seven_seg_dig[num][5]);
    digitalWrite(A1,seven_seg_dig[num][6]);
  }
  if(num==1)
  {
    digitalWrite(A5,seven_seg_dig[num][0]);
    digitalWrite(A4,seven_seg_dig[num][1]);
    digitalWrite(A2,seven_seg_dig[num][2]);
    digitalWrite(A3,seven_seg_dig[num][3]);
    digitalWrite(11,seven_seg_dig[num][4]);
    digitalWrite(A0,seven_seg_dig[num][5]);
    digitalWrite(A1,seven_seg_dig[num][6]);
  }
  if(num==2)
  {
    digitalWrite(A5,seven_seg_dig[num][0]);
    digitalWrite(A4,seven_seg_dig[num][1]);
    digitalWrite(A2,seven_seg_dig[num][2]);
    digitalWrite(A3,seven_seg_dig[num][3]);
    digitalWrite(11,seven_seg_dig[num][4]);
    digitalWrite(A0,seven_seg_dig[num][5]);
    digitalWrite(A1,seven_seg_dig[num][6]);
  }
  if(num==3)
  {
    digitalWrite(A5,seven_seg_dig[num][0]);
    digitalWrite(A4,seven_seg_dig[num][1]);
    digitalWrite(A2,seven_seg_dig[num][2]);
    digitalWrite(A3,seven_seg_dig[num][3]);
    digitalWrite(11,seven_seg_dig[num][4]);
    digitalWrite(A0,seven_seg_dig[num][5]);
    digitalWrite(A1,seven_seg_dig[num][6]);
  }
  if(num==4)
  {
    digitalWrite(A5,seven_seg_dig[num][0]);
    digitalWrite(A4,seven_seg_dig[num][1]);
    digitalWrite(A2,seven_seg_dig[num][2]);
    digitalWrite(A3,seven_seg_dig[num][3]);
    digitalWrite(11,seven_seg_dig[num][4]);
    digitalWrite(A0,seven_seg_dig[num][5]);
    digitalWrite(A1,seven_seg_dig[num][6]);
  }
  if(num==5)
  {
    digitalWrite(A5,seven_seg_dig[num][0]);
    digitalWrite(A4,seven_seg_dig[num][1]);
    digitalWrite(A2,seven_seg_dig[num][2]);
    digitalWrite(A3,seven_seg_dig[num][3]);
    digitalWrite(11,seven_seg_dig[num][4]);
    digitalWrite(A0,seven_seg_dig[num][5]);
    digitalWrite(A1,seven_seg_dig[num][6]);
  }
  if(num==6)
  {
    digitalWrite(A5,seven_seg_dig[num][0]);
    digitalWrite(A4,seven_seg_dig[num][1]);
    digitalWrite(A2,seven_seg_dig[num][2]);
    digitalWrite(A3,seven_seg_dig[num][3]);
    digitalWrite(11,seven_seg_dig[num][4]);
    digitalWrite(A0,seven_seg_dig[num][5]);
    digitalWrite(A1,seven_seg_dig[num][6]);
  }
  if(num==7)
  {
    digitalWrite(A5,seven_seg_dig[num][0]);
    digitalWrite(A4,seven_seg_dig[num][1]);
    digitalWrite(A2,seven_seg_dig[num][2]);
    digitalWrite(A3,seven_seg_dig[num][3]);
    digitalWrite(11,seven_seg_dig[num][4]);
    digitalWrite(A0,seven_seg_dig[num][5]);
    digitalWrite(A1,seven_seg_dig[num][6]);
  }
  if(num==8)
  {
    digitalWrite(A5,seven_seg_dig[num][0]);
    digitalWrite(A4,seven_seg_dig[num][1]);
    digitalWrite(A2,seven_seg_dig[num][2]);
    digitalWrite(A3,seven_seg_dig[num][3]);
    digitalWrite(11,seven_seg_dig[num][4]);
    digitalWrite(A0,seven_seg_dig[num][5]);
    digitalWrite(A1,seven_seg_dig[num][6]);
  }
  if(num==9)
  {
    digitalWrite(A5,seven_seg_dig[num][0]);
    digitalWrite(A4,seven_seg_dig[num][1]);
    digitalWrite(A2,seven_seg_dig[num][2]);
    digitalWrite(A3,seven_seg_dig[num][3]);
    digitalWrite(11,seven_seg_dig[num][4]);
    digitalWrite(A0,seven_seg_dig[num][5]);
    digitalWrite(A1,seven_seg_dig[num][6]);
  }
}

long microsecondsToInches(long microseconds)
{
  return microseconds / 74 /2;
}

long microsecondsToCentimeter(long microseconds)
{
return  microseconds / 29 / 2 ;
}

void loop() {
 digitalWrite(trig,LOW);
 delay(2);
 digitalWrite(trig,HIGH);
 delay(10);
 digitalWrite(trig,LOW);
 long duration,inches,cm,cm1;
 duration=pulseIn(echo,HIGH);
 inches = microsecondsToInches(duration);
 cm = microsecondsToCentimeter(duration);
 cm1 = inches*2.54;
 cm1+=cm;
 cm1/=2;
 if(cm1<=10)
  {
  tone(buzzer,note);
  segwrite(cm1);
  } 
 if(cm1>10)
  {
  tone(buzzer,0,1);
  segwrite(cm1);
  }
 if(cm1>99)
 {
  zero=2;
  digitalWrite(zero,1);
  digitalWrite(A5,1);
  ++zero;
  digitalWrite(zero,1);
  digitalWrite(A4,1);
  ++zero;
  digitalWrite(zero,1);
  digitalWrite(A2,1);
  ++zero;
  digitalWrite(zero,1);
  digitalWrite(A3,1);
  ++zero;
  digitalWrite(zero,1);
  digitalWrite(11,1);
  ++zero;
  digitalWrite(zero,1);
  digitalWrite(A0,1);
  ++zero;
  digitalWrite(zero,0);
  digitalWrite(A1,0);
  ++zero;
  }
}
