#include<stdio.h>

void main()
{
	struct student {
		char name[5];
		int rollno;
		float marks;
	}stu;

	printf("Address of name = %u\n",stu.name);
	printf("Address of rollno = %u\n",stu.rollno);
	printf("Address of marks = %u\n",stu.marks);
}
