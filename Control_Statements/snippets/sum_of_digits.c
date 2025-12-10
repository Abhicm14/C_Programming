#include<stdio.h>

void main()
{
	int rem,sum = 0;
	long int num,num1;

	printf("Enter the number : ");
	scanf("%ld",&num);

	num1 = num;

	while(num!=0)
	{
		rem = num%10;
		sum += rem;
		num /= 10;
	}
	printf("Sum of the %ld is %d\n",num1,sum);

}
