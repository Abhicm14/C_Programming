#include<stdio.h>
#include<string.h>

struct Student 
{
	char name[20];
	int age;
	float marks;
};

void main()
{
	struct Student stu1={"Mary",15,68};
	struct Student stu2,stu3;
	
	strcpy(stu2.name,"Jhon");
	
	stu2.age = 16;
	stu2.marks = 98;

	printf("Enter Name, Age and Marks for stu3 : ");
	scanf("%s %d %f",stu3.name,&stu3.age,&stu3.marks);
	
	printf("stu1 : %s %d %.2f\n",stu1.name,stu1.age,stu1.marks);
	printf("stu2 : %s %d %.2f\n",stu2.name,stu2.age,stu2.marks);
	printf("stu1 : %s %d %.2f\n",stu3.name,stu3.age,stu3.marks);

}

