//---------------------------------------------------------------------------------
int String_copy(char segment1[],char segment2[]);
//---------------------------------------------------------------------------------
int String_copy(char segment1[],char segment2[])
{
    int x = 0;
    while(segment2[x] != '\0')
    {
        segment1[x] = segment2[x];
        x++;
    }
    segment1[x]='\0';
    return (x-1);
}
