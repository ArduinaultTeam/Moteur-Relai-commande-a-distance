#include "Arduino.h"

/* On continue avec les define hardware (Pins) */
#define LedN 2
#define LedS 3
#define LedE 4
#define LedO 5

#define BPN 6
#define BPS 7
#define BPE 8
#define BPO 9

/* On définie les variables globales */
bool statut = false;

void setup()
{
  // Ne pas oublier la led de 220Ohm pour les leds
  pinMode(LedN,OUTPUT);
  pinMode(LedS,OUTPUT);
  pinMode(LedE,OUTPUT);
  pinMode(LedO,OUTPUT);



  // Ne pas oublier la led de 10kOhm pour les boutons

  // Savez-vous que l'on peut faire des montages associant 8 boutons reliés à
  // 1 entrée analogique en utilisant différentes resistances ?
  pinMode(BPN,INPUT);
  pinMode(BPS,INPUT);
  pinMode(BPE,INPUT);
  pinMode(BPO,INPUT);
}

void loop() //C'est ici que l'on met le code
{
  /* Voici les étapes que nous allons devoir effectuer
  ** La lecture à l'aide de digitalRead() des boutons
  ** L'affectation des Leds avec digitalWrite()
  ** La gestion de la tempo avec delay() ou millis() */

// Pensez à tout séparer étape par étape lors du développement
// L'association fonctionnelle se fait à la fin

}
