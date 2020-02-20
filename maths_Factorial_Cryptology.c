//---------------------------------------------------------------------------------
int Fact(int paziente);
//---------------------------------------------------------------------------------
int Fact(int paziente)
{
   int fat =1;
   do
   {
      fat = fat * paziente;
      paziente--;
   }while (paziente != 1);
   return fat;
}
