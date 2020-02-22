void Load_matrix_play_2(int matrix1[][10],int dim)
{
    int low,high;
    for(low=0;low < dim; low++)
        for(high=low;high<dim;high++)
            matrix1[low][high] = 0;
}
