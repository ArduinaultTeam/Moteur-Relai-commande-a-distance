void attente()
{

  ga = 1;
  
  if(old_statut != statut)
    delay_start = millis();

  while(millis() - delay_start <= 3000 )
  {
    if (ga==1)
    {
      Serial.println(delay_start);
      ga = 0;
    }
    // Ceci est une attente !!!!
  }
}
