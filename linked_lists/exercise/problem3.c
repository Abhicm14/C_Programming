#include<stdio.h>

void main()
{
    struct student 
    {
        char name[20];
        int age;
    };
    
    struct student stu1 = {"Anita",10};
    struct student stu2 = {"Anita",12};

    if(stu1.age == stu2.age)
    {
        printf("Same\n");
    }
    else
    {
        printf("Not same\n");
    }
    
}