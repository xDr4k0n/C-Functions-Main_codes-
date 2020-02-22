void Display_Matrix_2_dimensions(int matrix1[][10],int dim)
{
    int i;
    int j;
    for(i=0;i<dim;i++)
    {
        printf("\n %2d)", i+1);
        for (j=0; j<dim; j++)
        {
            printf(" %2d |", matrix1[i][j]);
        }
    }
    printf("\n");
}
