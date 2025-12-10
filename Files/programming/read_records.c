#include<stdio.h>
#include<stdlib.h>

void main()
{
    struct record
    {
        char name[20];
        int roll;
        float marks;
    }student;

    FILE *fp;

    char grade;

    fp = fopen("files/stu.dat","rb");

    if(fp == NULL)
    {
        printf("Error in opening file\n");
        exit(0);
    }

    printf("\nNAME\t\tMARKS\t\tGRADE\n\n");
    while(fread(&student,sizeof(student),1,fp) == 1)
    {
        printf("%s\t",student.name);
        printf("%2.2f\t\t",student.marks);
        if(student.marks >= 80)
            printf("A\n");
        else if(student.marks >= 60)
            printf("B\n");
        else
            printf("C\n");
    }
    fclose(fp);
}