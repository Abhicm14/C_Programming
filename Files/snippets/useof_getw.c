#include<stdio.h>

void main()
{
    FILE *fptr;

    int value;

    fptr = fopen("docs/num.dat","rb");
    
    while((value = getw(fptr)) != EOF)
    {
        printf("%d\t",value);
    }
    
    printf("\n");
    fclose(fptr);
}