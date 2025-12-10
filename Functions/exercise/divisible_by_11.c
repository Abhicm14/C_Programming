#include<stdio.h>

void test(long int x);

void main()
{
	long int num;
	printf("Enter the number to be tested : ");
	scanf("%ld",&num);
	test(num);
}

void test(long int n)
{
	int s1=0,s2=0,k;
	while(n>0)
	{
		s1+=n%10;
		n/=10;
		s2+=n%10;
		n/=10;
	}
	k=s1>s2?(s1-s2):(s2-s1);
	if(k>10)
		test(k);
	else if(k==0)
		printf("The number is divisible by 11\n");
	else
		printf("The number is not divisible by 11\n");
}
