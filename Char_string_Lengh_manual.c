//---------------------------------------------------------------------------------
int String_dimension(char compartimeni[]);
//---------------------------------------------------------------------------------
int String_dimension(char compartimeni[])
{
    int dim = 0;
    int i = 0;
    while(compartimeni[i] != '\0')
    {
        dim = dim + 1;
        i++;
    }
    return dim;
}
