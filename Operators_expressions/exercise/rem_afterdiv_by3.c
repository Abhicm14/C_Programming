//Accept any five digit number and print the value of remainder after dividing by 3

#include<stdio.h>

void main()
{
	long int num,rem;
	printf("Enter the five digit number  : ");
	scanf("%ld",&num);
	rem = num%3;
	printf("Reminder = %ld\n",rem);
}
		

