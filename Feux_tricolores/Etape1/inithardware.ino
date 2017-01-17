void inithardware()
{
  pinMode(BP1,INPUT);
  pinMode(BP2,INPUT);
  pinMode(BP3,INPUT);
  pinMode(BP4,INPUT);

  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  
  Serial.begin(9600);
}

