#include<stdio.h>

struct student{
	char name[20];
	int rollno;
	float marks;
};

void main()
{
	int count;

	struct student stuarr[5];

	for(count =0; count < 5; count++)
	{
		printf("Enter name , roolno and marks : ");
		scanf("%s%d%f",stuarr[count].name,&stuarr[count].rollno,&stuarr[count].marks);
	}

	for(count =0; count < 5; count++)
        {
		printf("%s %d %.2f \n",stuarr[count].name,stuarr[count].rollno,stuarr[count].marks);
	}
}
