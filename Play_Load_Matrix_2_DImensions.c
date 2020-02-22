
void Load_matrix_play(int matrix1[][10],int dim)
{
    int g,m;
    for(g=0;g<dim;g++)
        for(m=(dim-1);m>-1;m--)
            matrix1[m][g] = 99;
}
