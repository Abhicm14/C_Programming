#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fptr;

    int ch;

    if((fptr = fopen("docs/myfile.c","r")) == NULL)
    {
        printf("File doesn't exist\n");
        exit(1);
    }
    else
    {
        while((ch = getc(fptr))!= EOF)
            printf("%c",ch);
    }

    if(feof(fptr))
        printf("End of file\n");
    if(ferror(fptr))
        printf("Error\n");
    fclose(fptr);
}