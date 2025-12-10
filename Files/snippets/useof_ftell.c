#include<stdio.h>
#include<stdlib.h>

struct record{
    char name[20];
    int roll;
    float marks;
}student;

void main()
{
    FILE *fptr;

    fptr = fopen("docs/stu.dat","rb");

    if(fptr == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }

    printf("Position pointer in the beginning -> %ld\n",ftell(fptr));
    while(fread(&student,sizeof(student),1,fptr) == 1)
    {
        printf("Position pointer -> %ld\n",ftell(fptr));
        printf("%s\t",student.name);
        printf("%d\t",student.roll);
        printf("%f\n",student.marks);
    }
    printf("Size of file in bytes is %ld\n",ftell(fptr));
    fclose(fptr);  
}