
void sum_matrix_2_dimensions_columns(int matrix1[][10],int dim,int array[])
{
    int sum_riga;
    int gMagg;
    int gMino;
    for(gMagg=0;gMagg<dim;gMagg++)
    {
        sum_riga=0;
        for(gMino=0;gMino<dim;gMino++)
        {
            sum_riga=sum_riga + matrix1[gMino][gMagg];
        }
        array[gMagg] = sum_riga;
    }
}
