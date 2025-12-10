#include<stdio.h>

int sumd(int num);

void main()
{
	int num;

	printf("Enter a number : ");
	scanf("%d",&num);

	printf("Sum of digits of %d is %d\n",num,sumd(num));
}

int sumd(int num)
{
	static int sum=0;

	if(num>0)
	{
		sum = sum+(num%10);
		sumd(num/10);
	}
	return sum;
}
