// Les #define

#define BP1 2
#define BP2 3
#define BP3 4
#define BP4 5

#define LED1 6
#define LED2 7
#define LED3 8
#define LED4 9

int ga = 0;

// Les variables globales

int i_bp1 = 0;
int i_bp2 = 0;
int i_bp3 = 0;
int i_bp4 = 0;

int statut = 0;
int old_statut = 0;
unsigned long int delay_start = 0;

void setup() {
  inithardware();
}

void loop() {
  
  gestion_boutons();
  attente();
  gestion_leds();  

  old_statut = statut;
  
}

