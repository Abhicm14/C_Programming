#include<stdio.h>
#include<math.h>

void main()
{
	int num;
	float num1;
	
	printf("Enter the number : ");
	scanf("%d",&num);

	num1=sqrt(num);

	printf("The square root of %d is %.2f\n",num,num1);
}

