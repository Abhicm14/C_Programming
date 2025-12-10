/*A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.*/

#include<stdio.h>

void main()
{
	int amount,num_100s,num_50s,num_10s,rem_amount;

	printf("Enter the amount : ");
	scanf("%d",&amount);

	num_100s = amount/100;
	rem_amount = amount%100;
	num_50s = rem_amount/50;
	rem_amount = rem_amount%50;
	num_10s = rem_amount/10;

	printf("num_100s = %d\nnum_50s = %d\nnum_10s = %d\n",num_100s,num_50s,num_10s);
}
