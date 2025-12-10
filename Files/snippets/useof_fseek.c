#include<stdio.h>
#include<stdlib.h>

struct record
{
    char name[20];
    int roll;
    float marks;
}student;

void main()
{
    int num;
    
    FILE *fptr;

    fptr = fopen("docs/stu.dat","rb");

    if(fptr == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }

    printf("Enter the record number to be read : ");
    scanf("%d",&num);

    fseek(fptr,(num-1)*sizeof(student),0);
    fread(&student,sizeof(student),1,fptr);

    printf("%s\t",student.name);
    printf("%d\t",student.roll);
    printf("%f\n",student.marks);
    
    fclose(fptr);

}