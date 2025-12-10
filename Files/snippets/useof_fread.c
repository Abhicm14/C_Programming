#include<stdio.h>
#include<stdlib.h>

struct record{
    char name[20];
    int roll;
    float marks;
}student;

void main()
{
    int count;
    int num;
   
    FILE *fptr;
    fptr=fopen("docs/stu.dat", "rb");
    if (fptr==NULL)
    {
        printf("Error in opening file\n");
        exit(1) ;
    }
    printf("\nNAME\tROLLNO\tMARKS\n");
    while(fread(&student,sizeof(student) ,1,fptr)==1)
    {
        printf("%s\t",student.name) ;
        printf("%d\t",student.roll) ;
        printf("%f\n",student.marks) ;
    }
    fclose(fptr) ;
}