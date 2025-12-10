#include<stdio.h>

void main()
{
	int a,b;
	printf("enter a first number : ");
	scanf("%d",&a);
	printf("enter a second number : ");
	scanf("%d",&b);
	if(a>b)
		printf("Larger number is %d\t Smaller number is %d\n",a,b);
	else
		printf("Larger number is %d\t Smaller number is %d\n",b,a);
}
