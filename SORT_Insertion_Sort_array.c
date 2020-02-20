//---------------------------------------------------------------------------------
void Insertion_Sort(int tavola[],int dim);
//---------------------------------------------------------------------------------
void Insertion_Sort(int tavola[],int dim)
{
    int i;
    int back;
    //int posto;
    int temp;
    int aiuto;
    for( i=0 ; i < dim ; i++)
    {
        temp = tavola[i];
        //posto = i;
        if( temp > tavola[i+1])
        {
            aiuto = tavola[i];
            tavola[i] = tavola[i+1];
            tavola[i+1] = aiuto;
            for (back = (i+1); (back > 0 && back !=0); back-- )
            {
                if(tavola[back-1] > tavola[back])
                {
                    aiuto = tavola[back];
                    tavola[back] = tavola[back-1];
                    tavola[back-1] = aiuto;
                }
            }

           

        }

    }
}
