void copy_Matrix_2_dimensions(int matrix1[][10],int dim,int matrix2[][10])
{
    int m;
    int k;
    int p = (dim-1);
    int e = (dim-1);
    int aiuto;
    
    for(m=0;m<dim;m++)
    {
        e = (dim-1);
        for(k=0;k<dim;k++)
        {
            aiuto = matrix1[m][k];
            matrix2[p][e] = aiuto;
            e--;
        }
        p--;
    }
}
