#include<stdio.h>

void main()
{
    FILE *fptr;

    int ch;

    fptr = fopen("myfile.dat","w");
    fprintf(fptr,"If equal love there cannot be..");
    fputc(26,fptr);
    fprintf(fptr,"...let the more loving one be me\n");
    fclose(fptr);
    fptr = fopen("myfile.dat","r");
    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);
}