#include<stdio.h>

void funct(int age, float ht);

void main()
{
	int age;
	float ht;

	printf("Enter age and height : ");
	scanf("%d %f",&age,&ht);

	funct(age,ht);
}

void funct(int age,float ht)
{
	if(age>25)
	{
		printf("Age should be less than 25\n");
		return;
	}
	if(ht<5)
	{
		printf("Height should be more than 5\n");
		return;
	}
	printf("Selected\n");
}
