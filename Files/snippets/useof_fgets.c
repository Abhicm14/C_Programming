#include<stdio.h>

void main()
{
    FILE *fptr;

    char str[80];

    fptr = fopen("docs/test.txt","r");
    
    while(fgets(str,20,fptr) != NULL)
    {
        puts(str);
    }
    
    fclose(fptr);
}