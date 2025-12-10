/* File Name : Reverse_numbers.c
 * Date : 16/07/2025
 * Author Name : 
 * Description : program to print the reverse number of the enterd number 
 */

#include<stdio.h>

void main()
{
	int num,reversedNumber = 0;
	int rem = 0;

	printf("Enter a  number  : ");
	scanf("%d",&num);

	while(num > 0)
	{
		rem = num%10;
		reversedNumber = reversedNumber * 10 + rem;
		num /= 10;
	}
	printf("The Reversed Number = %d\n",reversedNumber);
}
