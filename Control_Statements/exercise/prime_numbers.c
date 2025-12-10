/* File Name : prime_numbers.c
 * Date : 16/07/2025
 * Author Name : 
 * Description : Print prime numbers that are in 1 to 99
 */
 
#include<stdio.h>
#include<math.h>

void main()
{
	int i,j,flag=1;

	printf("The Prime Numbers are : ");

	for(i=1; i<=99; i++)
	{
		flag=1;
		for(j=2; j<=sqrt(i); j++)
		{
			if(i%j == 0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("%d  ",i);
	}
	printf("\n");
}
