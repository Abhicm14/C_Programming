/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.*/

#include<stdio.h>

void main()
{
	long int num;
	int sum = 0,rem = 0;
        printf("Enter the 5 digit number : ");
	scanf("%ld",&num);
	while(num != 0)
	{
		rem = num%10;
		sum += rem;
		num = num/10;
	}
	printf("Sum of the 5 digit number = %d\n",sum);
}
