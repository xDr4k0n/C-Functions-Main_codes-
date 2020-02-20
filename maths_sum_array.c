
//---------------------------------------------------------------------------------
int Sum_array(int array[],int dime);
//---------------------------------------------------------------------------------
int Sum_array(int array[],int dime)
{
    int i;
    int utilita = 0;
    for (i = 0; i < dime; i++)
    {
        utilita = utilita + array[i];
    }
    return utilita;
}
