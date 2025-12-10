/*If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.*/

#include<stdio.h>

void main()
{
	int num,num1 = 0,num2 = 0,sum = 0;
	printf("Enter the 5 digit number : ");
	scanf("%d",&num);

	num1 = num%10;
	num2 = num/10000;
	sum = num1+num2;

	printf("Sum of the first and last digit number = %d\n",sum);
}

