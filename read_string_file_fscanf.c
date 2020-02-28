int read_string_file_fscanf(FILE **io_punto_al_tuo_file,char nome[],int dim_sting,char data[])
{
    *io_punto_al_tuo_file = NULL;
    //"read.txt";
    printf("Inserisci il nome dell file :");
    scanf("%s", nome);
    *io_punto_al_tuo_file = fopen(nome,"r");
    
    if(io_punto_al_tuo_file == NULL)
    {
        printf("Error alla apertura del file!\n");
        return -1;
    }
    if( (fscanf(*io_punto_al_tuo_file,"%s",data)) != EOF)
        printf("Succes Lettura del file!\n");
    //Purtroppo come scanf , si ferma al primo spazio. O primo \n
    printf("%s",data);
    fclose(*io_punto_al_tuo_file);
    *io_punto_al_tuo_file = NULL;
    return 0;
}
