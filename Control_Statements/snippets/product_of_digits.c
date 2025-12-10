#include<stdio.h>

void main()
{
	long int num,prod = 1;
        int rem;

	printf("Enter the number : ");
	scanf("%ld",&num);

	while(num!=0)
	{
		rem = num%10;
		prod *= rem;
		num /= 10;
	}
	printf("Product of the number is %ld\n",prod);	
}	
