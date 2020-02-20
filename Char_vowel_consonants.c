//---------------------------------------------------------------------------------
void Search_voc_cons(char stringa[]);
//---------------------------------------------------------------------------------
void Search_voc_cons(char stringa[])
{
  char vocali[] = {'a','e','i','o','u'};
  int i;
  int k;
  int dim;
  int dim_vocali;
  int conta_vocali;
  int consonanti;
  dim = strlen(stringa);
  dim_vocali = strlen(stringa);
  conta_vocali = 0;
  consonanti = 0;
  dim = strlen(stringa);
  for (i= 0;i<dim;i++)
  {
      for (k=0;k<dim_vocali;k++)
      {
          if(stringa[i] == vocali[k])
          {
              conta_vocali = conta_vocali + 1;
          }
      }
  }
  consonanti = dim - conta_vocali;
  printf("Hai %d vocali nel tuo messaggio. \n", conta_vocali);
  printf("Hai %d consonanti nel tuo messaggio.\n", consonanti);
}
