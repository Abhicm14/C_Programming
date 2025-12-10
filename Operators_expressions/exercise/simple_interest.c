//write a program to accept the principal,rate and time calculate the simple interest

#include<stdio.h>

void main()
{
	int principal,time,rate;
	float si;
	printf("Enter the principal : ");
	scanf("%d",&principal);
	printf("Enter the rate :");
	scanf("%d",&rate);
	printf("Enter the time :");
        scanf("%d",&time);
	si = (principal*rate*time)/100;
	printf("Simple interest for The %d,%d,%d will be %.2f\n",principal,rate,time,si);
}

