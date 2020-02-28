int read_chars_file_getc(FILE **File_point,char namefile[])
{
    printf("Inserisci nome del file : \n");
    scanf("%s", namefile);
    //Openfile
    *File_point = fopen(namefile,"r");
    int reader;
    //check if open
    if(*File_point == NULL)
    {
        return (-1);
    }
    else
        printf("Apertura file e andata a buon fine! \n");

    //read all characters
    while ((reader = getc(*File_point)) != EOF)
        {
            printf("%c", reader);
        }
    //close file
    fclose(*File_point);
    *File_point = NULL;
    return 0;
}
