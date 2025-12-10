/* File Name : Sum_of_squares.c
 * Date : 16/07/2025
 * Author Name : 
 * Description : Takeing numbr Input from the user and calculating the sum of the squares of those numbers till user input number 
 */

#include<stdio.h>

void main()
{
	int num,i;
	long int square=0, sum =0;

	printf("Enter the number  : ");
	scanf("%d",&num);

	for(i=1; i<=num; i++)
	{
		square = i*i;
		sum +=square;
	}

	printf("Sum of the Square of %d is %ld\n",num,sum);
}
