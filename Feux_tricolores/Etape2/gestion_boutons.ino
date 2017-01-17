void gestion_boutons()
{
  read_buttons();
  
  Serial.print(i_bp1);
  Serial.print("\t");
  Serial.print(i_bp2);
  Serial.print("\t");
  Serial.print(i_bp3);
  Serial.print("\t");
  Serial.print(i_bp4);
  Serial.print("\n");

  update_tab();
}

void read_buttons()
{
  i_bp1=digitalRead(BP1);
  i_bp2=digitalRead(BP2);
  i_bp3=digitalRead(BP3);
  i_bp4=digitalRead(BP4);
}

