
//---------------------------------------------------------------------------------
void Manual_Load(int array[],int dime);
//---------------------------------------------------------------------------------
void Manual_Load(int array[],int dime)
{
    int i;
    for (i = 0; i < dime; i++)
    {
        printf("\n Inserisci numero : ");
        scanf("%d", &array[i]);
    }
}
