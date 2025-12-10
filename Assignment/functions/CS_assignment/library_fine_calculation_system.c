/* File Name : hotel_billing_system.c
 * Date : 28/8/25
 * Author Name : Abhishek C M
 * Description : Implemented a library file calculation system where user entered rate and number of days. The system calculate the total fine based on that.
 */

#include<stdio.h>

int calculate_system(int rate,int days);

void main()
{
	int rate=12;
	int days;
	int fine;

	printf("Enter the number of overdue days : ");
	scanf("%d",&days);

	fine = calculate_system(rate,days);

	printf("The Fine for %d Overdue days is %d Rs\n",days,fine);
}

int calculate_system(int rate,int days)
{
	return (rate*days);
}
