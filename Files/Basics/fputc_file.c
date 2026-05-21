/*
    syntax of fputc:  int fputc(int char, FILE *stream);
        The fputc() function writes a character (an unsigned char) specified by char to

*/

#include<stdio.h>

void main()
{
    char data[] = " Embedded Systems!";

    FILE *fp = NULL;

    fp = fopen("data.txt","w");

    if( fp == NULL)
    {
        printf("Error opening file\n");
    }
    else
    {
        printf("%c",fputc('A',fp));
        for(int loop = 1; loop < 26; loop++)
        {
            printf("%c",fputc('A'+loop,fp));
        }
        printf("%c",fputc(' ',fp));
        
        for(int loop = 0; loop < 26; loop++)
        {
            printf("%c",fputc(97+loop,fp));
        }
        printf("%c",fputc(' ',fp));
        
        int index = 0;
        char ch = '\0';
        while (data[index] != '\0')
        {
            ch = fputc(data[index],fp);
            printf("%c",ch);
            index++;
        }
        fclose(fp);
    }
    printf("\n");
}