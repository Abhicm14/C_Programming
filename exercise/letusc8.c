/*If a five-digit number is input through the keyboard, write a
program to reverse the number.*/

#include<stdio.h>

void main()
{
	long int num,num1 = 0;

	printf("Enter the 5 digit number  : ");
	scanf("%ld",&num);

	while(num !=0)
	{
		num1 = num1*10;
		num1 = num%10+num1;
		num = num/10;
	}
	printf("Reversed number = %ld\n",num1);
}
