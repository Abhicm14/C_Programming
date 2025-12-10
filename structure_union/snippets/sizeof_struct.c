#include<stdio.h>

struct student{
	int rollno;
	char name[20];
	float marks;
};

void main()
{
	struct student stu1;

	printf("%d\n",sizeof(stu1));
}
