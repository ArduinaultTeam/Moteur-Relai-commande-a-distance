void attente()
{
  if(old_statut != statut)
    delay_start = millis();

  while(millis() - delay_start < 3000)
  {
    read_buttons();
    update_tab();
  }

  old_statut = statut;
}
