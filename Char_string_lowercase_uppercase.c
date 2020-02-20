//---------------------------------------------------------------------------------
void Search_Minuscole_maiuscole(char parola_input[]);
//---------------------------------------------------------------------------------
void Search_Minuscole_maiuscole(char parola_input[])
{
  int conta_char[] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int dim = 25;
  int maiuscole=0;
  int minuscole=0;
  //vettore conta lettere
  printf("\n");
  int i;
  i=0;
  //int dim_parola;
  int ris;
  int ris_2;
  //dim_parola = strlen(parola_input);
  while(parola_input[i] != '\0')
  {
      ris = (int)parola_input[i];
      ris_2 = ris -97;
      ris = ris - 65;
      if(ris_2 < 0)
      {
          //a grande
          conta_char[ris] = conta_char[ris] + 1;
          maiuscole++;
      }
      else
      {
          //a piccolae
          conta_char[ris_2] = conta_char[ris_2] + 1;
          minuscole++;
      }
      i++;
  }
   int a;
   int v = 64;
   printf("Loading --------------------->\n");
   for (a=0;a<dim;a++)
   {
       v++;
       printf("%c  |  %d \n",v,conta_char[a]);
   }
   printf("Ci sono %d maiuscole \n",maiuscole);
   printf("Ci sono %d minuscole",minuscole);
   printf("\n");
}
