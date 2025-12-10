#include<stdio.h>

void main()
{
    FILE *fptr;

    char str[80];

    fptr = fopen("docs/test.txt","w");
    
    printf("Enter the text\n");

    printf("To stop enetring, press Ctrl+d in unix and Ctrl+z in Dos\n");

    while(gets(str) != NULL)
    {
        fputs(str,fptr);
    }
    
    fclose(fptr);
}