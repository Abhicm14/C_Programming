#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fptr;

    fptr = fopen("docs/stu.dat","rb+");

    if(fptr == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }

    printf("Position pointer -> %ld\n",ftell(fptr));
    fseek(fptr,0,2);
    printf("Position pointer -> %ld\n",ftell(fptr));
    rewind(fptr);
    printf("Position pointer -> %ld\n",ftell(fptr));
    
    fclose(fptr);
}