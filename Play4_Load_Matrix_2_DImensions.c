void Load_matrix_play_4(int matrix1[][10],int dim)
{
    int low,high;
    int help = dim;
    for(low=0;low < dim; low++)
    {
        help = help -1;
        for(high=low;high<help;high++)
        {
            matrix1[low][high] = -5;
        }
    }
}
