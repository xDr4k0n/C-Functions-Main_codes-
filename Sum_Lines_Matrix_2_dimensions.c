void sum_matrix_2_dimensions_lines(int matrix1[][10],int dim,int array[])
{
    int sum_riga;
    int gMagg;
    int gMino;
    for(gMagg=0;gMagg<dim;gMagg++)
    {
        sum_riga=0;
        for(gMino=0;gMino<dim;gMino++)
        {
            sum_riga=sum_riga + matrix1[gMagg][gMino];
        }
        array[gMagg] = 0;
        array[gMagg] = sum_riga;
    }
}
