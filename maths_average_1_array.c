
//---------------------------------------------------------------------------------
int Media_vect(int array[],int di);
//---------------------------------------------------------------------------------
int Media_vect(int array[],int di)
{
    int i;
    int utilita;
    int ritorno;
    for (i = 0; i < di; i++)
    {
        utilita = utilita + array[i];
    }
    ritorno = utilita / di;
    return ritorno;
}
