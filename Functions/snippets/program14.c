#include<stdio.h>

int sum(int num);

void main()
{
	int num;

	printf("Enter the number : ");
	scanf("%d",&num);

	printf("Sum of the %d number is %d\n",num,sum(num));
}

int sum(int n)
{
	int rem,sum=0;

	while(n>0)
	{
		rem = n%10;
		sum += rem;
		n /= 10;
	}
	return sum;
}
