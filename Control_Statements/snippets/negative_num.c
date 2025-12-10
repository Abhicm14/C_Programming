#include<stdio.h>

void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num<0)
		printf("you enetred a negative number\n");
	printf("Value of num = %d\n",num);
}
