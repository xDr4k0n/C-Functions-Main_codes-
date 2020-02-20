//---------------------------------------------------------------------------------
int Quick_search_int(int vet[],int dim,int cercato);
//---------------------------------------------------------------------------------
int Quick_search_int(int vet[],int dim,int cercato)
{
    int pos;
    int i;
    pos = dim / 2;
    if(vet[pos]==cercato)
    {
        return pos;
    }
    else if (vet[pos] > cercato)
    {
       for(i = -1; i < pos; pos--)
       {
           if(vet[pos] == cercato)
           {
               return (pos+1);
           }
       }
       return -1;
    }
    else if (vet[pos] < cercato)
    {
       for(i = pos; i < (dim+1); i++)
       {
           if(vet[i] == cercato)
           {
               return (i+1);
           }
       }
        return -1;
    }
}
