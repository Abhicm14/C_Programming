#include<stdio.h>

long int factorial(int n);

void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);

	if(num<0)
		printf("No Factorial of negative number\n");
	else	
		printf("Factorial of %d is %ld\n",num,factorial(num));
}

long int factorial(int n)
{
	int i;
	long int fact =1;

	if(n==0)
		return 1;
	for(i=n; i>1; i--)
		fact*=i;
	return fact;
}
