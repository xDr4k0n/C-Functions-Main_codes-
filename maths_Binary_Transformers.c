
//---------------------------------------------------------------------------------
void Transformers_Binary(int paziente);
//---------------------------------------------------------------------------------
void Transformers_Binary(int paziente)
{
    char stringa_binaria[9] = {' ',' ',' ',' ',' ',' ',' ',' '};
    char stringa_binaria_finale[9]= {' ',' ',' ',' ',' ',' ',' ',' '};
    int resto;
    int i;
    int copia;
    
    while(paziente != 0)
    {
        copia = paziente;
        paziente = copia / 2;
        resto = copia % 2;
        if(resto == 0)
        {
            stringa_binaria[i] = '0';
        }
        else
        {
            stringa_binaria[i] = '1';
        }
        i=i+1;
    }
    int m = 0;
    int j = 7;
    while (m < 9)
    {
        stringa_binaria_finale[j] = stringa_binaria[m];
        m++;
        j--;
    }
        printf("%s", stringa_binaria_finale);
}
