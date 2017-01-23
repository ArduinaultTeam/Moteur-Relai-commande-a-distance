#include "Arduino.h"

#define BP1 2
#define BP2 3
#define BP3 4
#define BP4 5

int tab[4]={0,0,0,0};
int index = 0;

int v1=0,v2=0,v3=0,v4=0,v1_old=0,v2_old=0,v3_old=0,v4_old=0;

int affi = 0;

int value = 0;

void addtab(int value)
{
  if (index<4)
  {
    tab[index] = value;
    index++;

    pinMode(BP1,INPUT);
    pinMode(BP2,INPUT);
    pinMode(BP3,INPUT);
    pinMode(BP4,INPUT);
  }
}

void affichetab()
{
  for(int i=0;i<3;i++)
  {
    Serial.print(tab[i]);
    Serial.print("\t");
  }
  Serial.println(tab[3]);

  affi = 0;
}

int deltab()
{
  if(index>=1)
  {
    index--;
    int r = tab[index];
    tab[index] = 0;
    return r;
  }
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
    v1 = digitalRead(BP1);
    v2 = digitalRead(BP2);
    v3 = digitalRead(BP3);
    v4 = digitalRead(BP4);

    if((v1 == 1) && (v1_old == 0))
    {
      addtab(1);
      affi = 1;
    }
    if((v2 == 1) && (v2_old == 0))
    {
      addtab(2);
      affi = 1;
    }
    if((v3 == 1) && (v3_old == 0))
    {
      addtab(3);
      affi = 1;
    }
    if((v4 == 1) && (v4_old == 0))
    {
      addtab(4);
      affi = 1;
    }




  if(affi)
  {
    affichetab();
    if(index == 4)
    {
      value = deltab();
      Serial.print("Last value = ");
      Serial.println(value);
    }
  }

  v1_old = v1;
  v2_old = v2;
  v3_old = v3;
  v4_old = v4;

}
