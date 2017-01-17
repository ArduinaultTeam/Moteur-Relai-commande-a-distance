void add2tab(int value)
{
  index++;
  tab[index] = value;
}

int del2tab()
{
  index--;
  return tab[index++];
}

void afficheTab()
{
  for(int i=0;i<index;i++)
  {
  Serial.print(tab[i]);
  Serial.print('\t');
  }
}

void update_tab()
{
  if((i_bp1 || i_bp3)&&(index<3))
    add2tab(1);
  if((i_bp2 || i_bp4)&&(index<3))
    add2tab(2);
}

