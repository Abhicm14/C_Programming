/*
    syntax of fgetc: int fgetc(FILE *stream);
        The fgetc() function reads a character from the specified stream and returns it as an unsigned char cast to an int, or EOF on end of file or error.

*/

#include<stdio.h>

void main()
{
    char data[] = " Embedded Systems!";

    FILE *fp = NULL;

    fp = fopen("data.txt","r");

    if( fp == NULL)
    {
        printf("Error opening file\n");
    }
    else
    {
        // printf("%c",fgetc(fp));
        // for(int loop = 1; loop < 26; loop++)
        // {
        //     printf("%c",fgetc(fp));
        // }
        // printf("%c",fgetc(fp));
        
        // for(int loop = 0; loop < 26; loop++)
        // {
        //     printf("%c",fgetc(fp));
        // }
        // printf("%c",fgetc(fp));
        
        char ch = '\0';
        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c",ch);
        }
        fclose(fp);
    }
    printf("\n");
}