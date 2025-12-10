#include<stdio.h>

struct student{
	char name[20];
	int rollno;
	int marks;
};

void display(struct student);
struct student change(struct student stu)
{
	stu.marks = stu.marks+5;
	stu.rollno = stu.rollno-10;
	return stu;
}

void display(struct student stu)
{
	printf("Name - %s\t",stu.name);
	printf("Rollno - %d\t",stu.rollno);
	printf("Marks - %d\n",stu.marks);
}

void main()
{
	struct student stu1 = {"Jhon",12,87};
	struct student stu2 = {"Mary",18,90};

	stu1 = change(stu1);
	stu2 = change(stu2);

	display(stu1);
	display(stu2);
}
