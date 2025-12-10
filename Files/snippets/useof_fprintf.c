#include<stdio.h>

void main()
{
    FILE *fptr;

    char name[15];
    int age;

    fptr = fopen("docs/rec.dat","w");
    
    printf("Enter your name and age : ");
    scanf("%s%d",name,&age);
    
    fprintf(fptr,"My name is %s and age is %d ",name,age);
    
    fclose(fptr);
}