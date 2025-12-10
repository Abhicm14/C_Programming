/* If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item.*/

#include<stdio.h>

void main()
{
	float cost,selling,profit;

	printf("Enter the total selling price and total profit : ");
	scanf("%f %f",&selling,&profit);

	cost = (selling - profit)/15;

	printf("The cost price per item = %.2f\n",cost);
}
