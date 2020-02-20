//---------------------------------------------------------------------------------
int Search_max(int array[],int dime);
//---------------------------------------------------------------------------------
int Search_max(int array[],int dime)
{
    int minimo;
    int i = 0;
    minimo = array[i];
    for (i=0; i < dime; i++)
    {
        if (minimo < array[i])
        {
            minimo = array[i];
        }
    }
    return minimo;
}
