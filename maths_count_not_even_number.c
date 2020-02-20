
//---------------------------------------------------------------------------------
int Search_not_even_number(int array[],int dime);
//---------------------------------------------------------------------------------

int Search_not_even_number(int array[],int dime)
{
    int i;
    int conta_trovato = 0;
    int aiuto;
    for (i=0; i < dime; i++)
    {
        aiuto = (array[i] % 2);
        if (aiuto != 0)
        {
            conta_trovato = conta_trovato + 1;
        }
    }
    return conta_trovato;
}
