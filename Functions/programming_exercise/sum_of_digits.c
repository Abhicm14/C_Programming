#include<stdio.h>

long sumd(long n)
{
	if(n==0)
		return 0;
	else
		return (n%10)+sumd(n/10);
}

void main()
{
	long num;

	printf("Enter the number : ");
	scanf("%ld",&num);

	printf("Sum of the Digits : %ld\n",sumd(num));
}


