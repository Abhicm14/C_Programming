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

    fptr = fopen("docs/stu.dat","wb");

    if(fptr == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }

    printf("Enter Number of records : ");
    scanf("%d", &num);

    for(count = 0; count < num; count++)
    {
        printf("Enter name : ");
        scanf("%s",student.name);
        printf("Enter roll no : ");
        scanf("%d",&student.roll);
        printf("Enter marks : ");
        scanf("%f",&student.marks);
        fwrite(&student,sizeof(student),1,fptr);
    }

    fclose(fptr);
}