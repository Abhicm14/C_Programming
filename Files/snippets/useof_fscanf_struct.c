#include<stdio.h>

struct student
{
    char name[20];
    float marks;
}stu;

void main()
{
    FILE *fptr;

    int count;
    int num;

    fptr = fopen("docs/students.dat","r");

    printf ("NAME\tMARKS\n");
    while(fscanf(fptr,"%s%f",stu.name,&stu.marks) !=EOF)
        printf("%s\t%f\n",stu.name,stu.marks);

    fclose(fptr);
}