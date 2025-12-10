#include<stdio.h>

void bit_pattern(int a);

void main()
{
	int a,b;

	printf("Enter values of a and b : ");
	scanf("%d%d",&a,&b);

	printf("a = %d\t\t",a);
	bit_pattern(a);
	printf("b = %d\t\t",b);
	bit_pattern(b);
	printf("a & b = %d\t",a&b);
	bit_pattern(a&b);
}

void bit_pattern(int a)
{
	int i,mask;

	for(i=15;i>=0;i--)
	{
		mask = 1<<i;
		if((a&mask) == 0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
}
