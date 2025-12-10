/*If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.*/

#include<stdio.h>

void main()
{
	long int num,rem,num1;

	printf("Enter the 5 digit number : ");
	scanf("%ld",&num);

	while(num != 0)
	{
		rem = num%10;
		num1 = 
