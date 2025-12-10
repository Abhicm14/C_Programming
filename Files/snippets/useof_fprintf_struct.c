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

    fptr = fopen("docs/students.dat","w");

    printf("Enter number of records : ");
    scanf("%d", &num);

    for(count = 1; count <= num; count++)
    {
        printf("Enter name and marks : ");
        scanf("%s%f",stu.name, &stu.marks);
        fprintf(fptr,"%s %f",stu.name,stu.marks);
    }
}