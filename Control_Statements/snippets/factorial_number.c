#include<stdio.h>

void main()
{
	int num,n;
	long int fact =1;

	printf("Enter the number : ");
	scanf("%d",&num);

	n = num;

	if(num<0)
		printf("No factorial for negative numbers\n");
	else
		while(num>1)
		{
			fact *= num;
			num--;
		}
	printf("Factorial of number %d is %ld\n",n,fact);
}
