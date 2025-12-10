#include<stdio.h>

long fact(int n);

void main()
{
	int num;

	printf("Enter the positive number : ");
	scanf("%d",&num);

	if(num>0)
		printf("Factorial of %d is %ld\n",num,fact(num));
	else
		printf("Factorial cannot be calculated for negative(%d) numbers\n",num);
}

long fact(int n)
{
	if(n==0)
		return 1;
	else
		return (n*fact(n-1));
}
