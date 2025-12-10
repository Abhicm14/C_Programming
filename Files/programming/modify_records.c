#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    struct record{
        char name[20];
        int roll;
        float marks;
    }student;

    FILE *fptr;

    char name[20];
    long size = sizeof(student);
    unsigned flag = 0;

    fptr = fopen("files/stu.dat","rd+");

    if(fptr == NULL)
    {
        printf("Error in opening file\n");
        exit(0);
    }

    printf("Enter name of student whose record is to be Modified : ");
    scanf("%s",name);

    while(fread(&student,sizeof(student),1,fptr) == 1)
    {
        if(strcmp(student.name,name) == 0)
        {
            printf("Enter new data -->\n");
            printf("Enter name : ");
            scanf("%s",student.name);
            printf("Enter roll no : ");
            scanf("%d",&student.roll);
            printf("Enter marks : ");
            scanf("%f",&student.marks);
            fseek(fptr,-size,1);
            fwrite(&student,sizeof(student),1,fptr);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Name not found in file\n");
    else
        printf("Record Modified......\n");
    fclose(fptr);
}