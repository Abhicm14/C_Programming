/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

#include<stdio.h>

void main()
{
	int basic,hra,dra,gross;

	printf("Enter the basic salary : ");
	scanf("%d",&basic);
	dra = 0.4*basic;
	hra = 0.2*basic;
       	gross = basic+hra+dra;
	printf("The gross salary of the Ramesh's  is = %d\n",gross);
}	
