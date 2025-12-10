#include<stdio.h>

void main()
{
    FILE *fptr;

    int ch;

    fptr = fopen("docs/test","w");

    ch = getc(fptr);

    if(ferror(fptr))
    {
        printf("Error in red operation\n");
        clearerr(fptr);
    }
    fclose(fptr);
}