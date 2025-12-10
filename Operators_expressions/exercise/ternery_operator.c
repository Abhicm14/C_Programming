//Accept any two numbers and print sum and differece using ternary operator

#include<stdio.h>

void main()
{
	int a,b,num;
	printf("Enter the two numbers : ");
	scanf("%d %d",&a,&b);
	num = (a>b)?(a+b):(b-a);
	printf("%d\n",num);
}
