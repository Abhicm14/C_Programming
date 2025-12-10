#include<stdio.h>

void main()
{
    struct A{
        int marks;
        char grade;
    }A1;

    struct A B1;

    A1.marks = 80;
    A1.grade = 'A';

    printf("Marks = %d\t",A1.marks);
    printf("Grade = %c\n",A1.grade);

    B1 = A1;

    printf("Marks = %d\t",B1.marks);
    printf("Grade = %c\n",B1.grade);
}