/*File name : sumofeven_prodofodd
 * Date : 16/07/2025
 * Author Name :
 * Description : a program to accept any six digit number and print the sum of all even digits of that number and multiplication of all odd digits.
 */

#include<stdio.h>

void main()
{
	long int num;
	int i,sum=0,prod=1,rem=0;

	printf("Enter the six digit number : ");
        scanf("%ld",&num);

	while(num>0)
	{
		rem = num%10;
		if(rem %2 ==0)
		{
			sum += rem;
		}
		else
		{
			prod *= rem;
		}
		num /= 10;
	}	
	printf("The sum of even digits is %d\n",sum);
	printf("The product of Odd digits is %d\n",prod);
}
