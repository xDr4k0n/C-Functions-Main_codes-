int Sum_Matrix_2_dimensions(int matrix1[][10],int dim)
{
    int sum = 0;
    int z,e;
    for(z=0;z<dim;z++)
    {
        for(e=0;e<dim;e++)
        {
            sum = sum + matrix1[z][e];
        }
    }
    return sum;
}
