void gestion_leds()
{
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
