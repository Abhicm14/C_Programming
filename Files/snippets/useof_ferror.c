#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fptr;

    int ch;

    fptr = fopen("docs/test","w");

    ch = getc(fptr);
    if(ferror(fptr))
    {
        printf("Error in read operation\n");
        exit(1);
    }
    else
    {
        printf("%c",ch);
    }
    fclose(fptr);
}