int read_string_file_fgetc(FILE **File_point,char nome_file[],int dim_sting,char data[])
{
        
    //FILE *punto = NULL;
    //char data[LS];
    //char nome_file[L];
    
    printf("Inserisci il nome dell file :");
    scanf("%s", nome_file);
    *File_point = fopen(nome_file,"r");
    //Appertura --Openfile
    if(*File_point == NULL)
    {
        printf("Errore nell aprire il file \n");
        return -1;
    }
    //Lettura STRINGAAAAAAAAAAAAA --Reading
    while( fgets(data,dim_sting,*File_point) != NULL )
       printf("SUCCESS Reading file!\n");
    printf("\n%s\n",data);
    //-----------------------------------------------
    int lettr;
    //Reset puntatore al inizio del file per "Ricominciare a leggere"
    rewind(*File_point);
    // LETTURA CHARATTERE
    while( (lettr = fgetc(*File_point)) != EOF )
        printf("%c",lettr);
    //CHIUSURA FILE
    fclose(*File_point);
    *File_point=NULL;
    return 0;
}
