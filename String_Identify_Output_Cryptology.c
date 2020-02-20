//---------------------------------------------------------------------------------
void Identify_string_output(char segment[]);
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
void Identify_string_output(char segment[])
{
    int x = 0;
    int paziente;


    //---------------------------Stringhe Trova--------------
    //string A-Z
    char segment_A_Z[26];
    Load_Char_A_Z(segment_A_Z);
    //string a-z
    char segment_a_z[27];
    Load_Char_a_z(segment_a_z);
    //string 0-9
    char segment_0_9[10];
    Load_Char_0_9(segment_0_9);
    //--------------------------------------------------------
    //----------carica trovato stringhe econta----------------
    int found_A_Z[26];
    int dim_lettere = 26;
    int found_a_z[26];
    int dim_numeri=10;
    int found_0_9[10];
    Load_0_Array(found_A_Z,dim_lettere);
    Load_0_Array(found_a_z,dim_lettere);
    Load_0_Array(found_0_9,dim_numeri);

    int c;
    int loc;
    loc = strlen(segment);
    while (x < loc)
    {
        paziente = (int)segment[x];


        if(paziente < 58 && paziente > 47) // appartiene a 0-9
        {
            c=0;
            while (c < 10)
            {
                if(segment[x] == segment_0_9[c])
                {
                    found_0_9[c] = found_0_9[c]+1;
                    c = 10;
                }
                //trovato e conta
                c++;
            }
        }
        else if (paziente < 91 && paziente > 64) // appartiene a A-Z
        {
            c=0;
            while (c < 27)
            {
                if(segment[x] == segment_A_Z[c])
                {
                    found_A_Z[c] = found_A_Z[c]+1;
                    c = 27;
                }
                //trovato e conta
                c++;

            }
            //trovato e conta
        }
        else if (paziente < 123 && paziente > 96) // appartiene a a-z
        {
            c=0;
            while (c < 27)
            {
                if(segment[x] == segment_a_z[c])
                {
                    found_a_z[c] = found_a_z[c]+1;
                    c = 27;
                }
                //trovato e conta
                c++;
            }
            //trovato e conta
        }
        x++;
    }
    int h;

    for(h=0;h<=25;h++)
    {
        printf("[A-Z] %c = %d\n",segment_A_Z[h],found_A_Z[h]);
    }
    for(h=0;h<=25;h++)
    {
        printf("[a-z] %c = %d\n",segment_a_z[h],found_a_z[h]);
    }
    for(h=0;h<10;h++)
    {
        printf("[0-9] %c = %d\n",segment_0_9[h],found_0_9[h]);
    }
}
