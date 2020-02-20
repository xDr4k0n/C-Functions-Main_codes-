
//---------------------------------------------------------------------------------
void Media_2_vect_modulo(int vettore1[],int vettore2[],int dim,int risultati[]);
//---------------------------------------------------------------------------------
void Media_2_vect_modulo(int vettore1[],int vettore2[],int dim,int risultati[])
{
    int i;
    for (i=0;i<dim;i++)
    {
        risultati[i] = ((vettore1[i] + vettore2[i]) % 2) ;
    }
}
