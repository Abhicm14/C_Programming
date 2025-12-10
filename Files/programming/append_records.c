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
    
    FILE *fptr;

    int choice = 1;
    
    fptr = fopen("files/stu.dat","ab");

    if(fptr == NULL)
    {
        printf("Error in opening file\n");
        exit(0);
    }

    while(choice == 1)
    {
        printf("Enter name : ");
        scanf("%s",student.name);
        printf("Enter roll no :");
        scanf("%d",&student.roll);
        printf("Enter marks : ");
        scanf("%f",&student.marks);
        fwrite(&student,sizeof(student),1,fptr);
        printf("Want to enter more?(1 for YES/0 for NO) : ");
        scanf("%d",&choice);
    }
    fclose(fptr);
}