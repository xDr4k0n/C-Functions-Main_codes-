//---------------------------------------------------------------------------------
void Bubble_Sort(int tavola[],int dim);
//---------------------------------------------------------------------------------
void Bubble_Sort(int tavola[],int dim)
{
    int aiuto;
    int i=0;
    int m;
    int k;
    for( k=0 ; k < dim ; k++)
    {
        i = k;
        for( m= (dim-2) ; i<=m ; m-- )
        {
            if(tavola[m] > tavola[m+1])
            {
                aiuto = tavola[m];
                tavola[m] = tavola[m+1];
                tavola[m+1] = aiuto;
            }
        }
    }
}
