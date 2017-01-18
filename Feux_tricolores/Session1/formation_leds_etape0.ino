// Les #define

#define BP1 2
#define BP2 3
#define BP3 4
#define BP4 5

#define LED1 6
#define LED2 7
#define LED3 8
#define LED4 9

// Les variables globales

int i_bp1 = 0;
int i_bp2 = 0;
int i_bp3 = 0;
int i_bp4 = 0;

int statut = 0;

void setup() {
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

void loop() {
  i_bp1=digitalRead(BP1);
  i_bp2=digitalRead(BP2);
  i_bp3=digitalRead(BP3);
  i_bp4=digitalRead(BP4);
  
  Serial.print(i_bp1);
  Serial.print("\t");
  Serial.print(i_bp2);
  Serial.print("\t");
  Serial.print(i_bp3);
  Serial.print("\t");
  Serial.print(i_bp4);
  Serial.print("\n");

  /*  Reflexion autour du sequenceur :
   *  En fonction de l'appuie du bouton on va préparer un changement d'état des leds
   *  Il y a donc 2 états de leds
   *  Qui sont pilotés par 2 paires de bouton
   */

  if(i_bp1 || i_bp3)
    statut = 1;
  else if(i_bp2 || i_bp4)
    statut = 2;

  if (statut==1)
  {
  digitalWrite(LED1,HIGH); 
  digitalWrite(LED2,LOW); 
  digitalWrite(LED3,HIGH); 
  digitalWrite(LED4,LOW); 
  }
  else if (statut==2)
  {
  digitalWrite(LED1,LOW); 
  digitalWrite(LED2,HIGH); 
  digitalWrite(LED3,LOW); 
  digitalWrite(LED4,HIGH); 
  }
  
}
