#include<stdio.h>

void main()
{
	int count,result = 0,num1,num2;

	printf("Enter the 2 numbers : ");
	scanf("%d %d",&num1,&num2);

	for(count=1;count<=num2;count++)
	{
		result = result+num1;
	}
	printf("The product of %d and %d is %d\n",num1,num2,result);

}
