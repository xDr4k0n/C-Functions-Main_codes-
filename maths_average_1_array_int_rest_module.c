//---------------------------------------------------------------------------------
int Media_vect_modulo(int array[],int d);
//---------------------------------------------------------------------------------
int Media_vect_modulo(int array[],int d)
{
    int i;
    int utilita = 0;
    int ritorno = 0;
    for (i = 0; i < d; i++)
    {
        utilita = utilita + array[i];
    }
    ritorno = (utilita % d);
    return ritorno;
}
