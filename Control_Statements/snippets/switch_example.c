#include<stdio.h>

void main()
{
	int choice;

	printf("Enter the choice : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("First\n");
		case 2: 
			printf("Second\n");
		case 3:
			printf("Third\n");
		default :
			printf("Wrong choice\n");
	}
}
