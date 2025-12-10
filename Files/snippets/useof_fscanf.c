#include<stdio.h>

void main()
{
    FILE *fptr;

    char name[15];
    int age;

    fptr = fopen("docs/rec.dat","r");
    
    printf ("NAME\tAge\n");
    while(fscanf(fptr, "%s%d",name,&age) !=EOF)
        printf("%s\t%d\n",name,age) ;
    
    fclose(fptr);
}