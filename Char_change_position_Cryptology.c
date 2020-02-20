//---------------------------------------------------------------------------------
void char_plus(char str[],int dim,char stringa_transformata[]);
//---------------------------------------------------------------------------------
void char_plus(char str[],int dim,char stringa_transformata[])
{
    int i;
    for(i=0;i<dim;i++)
    {
        stringa_transformata[i] = str[i]+1;
    }
}
