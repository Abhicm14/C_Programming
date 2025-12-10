#include<stdio.h>

void main()
{
    FILE *fptr;
    int ch;
    fptr = fopen("names.dat",'w');

    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);
}