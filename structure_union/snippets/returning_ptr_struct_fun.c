#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
	char name[20];
	int rollno;
	int marks;
};


void display(struct student *stuptr)
{
	printf("Name - %s\t",stuptr->name);
	printf("Rollno - %d\t",stuptr->rollno);
	printf("Marks - %d\n",stuptr->marks);
}

struct student *func()
{
	struct student *ptr;

	ptr = (struct student *)malloc(sizeof(struct student));

	strcpy(ptr -> name,"Joseph");

	ptr -> rollno = 15;
	ptr -> marks = 98;

	return ptr;
}

void main()
{
	struct student *stuptr;

	stuptr = func();

	display(stuptr);
}
