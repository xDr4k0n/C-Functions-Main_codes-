//---------------------------------------------------------------------------------
void Selection_Sort(int tavola[],int dim);
//---------------------------------------------------------------------------------
void Selection_Sort(int tavola[],int dim)
{
    int i;
    int cerca;
    int pozitione_minore=0;
    int aiuto;
    //int minore;
    int secchio;
    for(i = 0; i < dim; i++)
    {
        secchio = tavola[i];
        for(cerca = i+1; cerca < (dim+1) ; cerca++)
        {
            if(secchio > tavola[cerca])
            {
                pozitione_minore = cerca;
                secchio = tavola[cerca];
            }
        }
        if(secchio != tavola[i])
        {
            aiuto = tavola[i];
            tavola[i] = tavola[pozitione_minore];
            tavola[pozitione_minore] = aiuto;
        }
    }
}
