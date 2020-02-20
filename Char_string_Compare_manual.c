//---------------------------------------------------------------------------------
int Cmp_stringa(char segment1[],char segment2[]);
//---------------------------------------------------------------------------------
int Cmp_stringa(char segment1[],char segment2[])
{
    int aiuto;
    int aiuto2;
    int x = 0;
    while(segment2[x] != '\0')
    {
        aiuto = (int)segment1[x];
        aiuto2 =(int)segment2[x];
        if(aiuto > aiuto2)
        {
            return 1;
        }
        else if (aiuto < aiuto2)
        {
           return -1;
        }
        x++;
    }
    return 0;
    
}
