//---------------------------------------------------------------------------------
void Search_int_output(int array[],int dim,int search);
//---------------------------------------------------------------------------------
void Search_int_output(int array[],int dim,int search)
{
    int contatore;
    bool trovato = false;
    int posizione;
    do
    {
        if(array[contatore] == search)
        {
            trovato = true;
            posizione = contatore;
            printf("Ho trovato il tuo numero '%d' nella posizione %d . ", search, posizione);
        }
        contatore++;
    } while (contatore < dim && trovato != true);
}
