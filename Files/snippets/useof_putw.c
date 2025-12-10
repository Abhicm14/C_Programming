#include<stdio.h>

void main()
{
    FILE *fptr;

    int value;

    fptr = fopen("docs/num.dat","wb");
    
    for(value = 1; value <= 30; value++)
    {
        putw(value,fptr);
    }
    
    fclose(fptr);
}