#include<stdio.h>

int reverse(int n);

void main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Reverse of %d is %d\n",num,reverse(num));
	if(num == reverse(num))
		printf("Number is a Palindrome\n");
	else
		printf("Number is not a palindrome\n");
}

int reverse(int n)
{
	int rem,rev=0;
	while(n>0)
	{
		rem=n%10;
		rev = rev*10+rem;
		n/=10;
	}
	return rev;
}
