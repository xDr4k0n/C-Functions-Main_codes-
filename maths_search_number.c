//---------------------------------------------------------------------------------
int Search(int array[],int dime,int cercato);
//---------------------------------------------------------------------------------
int Search(int array[],int dime,int cercato)
{
    int i;
    int conta_trovato = 0;
    for (i=0; i < dime; i++)
    {
        if (array[i] == cercato)
        {
            conta_trovato = conta_trovato + 1;
        }
    }
    return conta_trovato;
}
