void even_increase_noteven_decrease(int matrix1[][10],int dim)
{
    int x;
    int z;
    float num;
    float op1;
    for (x=0;x<dim;x++)
    {
        for (z=0; z<dim; z++)
        {
            num = (float) matrix1[x][z];
            op1 = fmod(num,2);
            if(op1 == 0)
            {
                matrix1[x][z] = matrix1[x][z] + 1;
            }
            else
            {
                matrix1[x][z] = matrix1[x][z] - 1;
            }
            
        }
            
    }
}
