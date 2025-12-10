#include<stdio.h>

void main()
{
    FILE *fptr;

    unsigned char ch;
    
    fptr = fopen("myfile.dat","w");

    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);
}