#include<stdio.h>

void bit_pattern(int a)
{
	int i,mask;

	for(i=15;i>=0;i--)
	{
		mask = 1<<i;
		if((a&mask)==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
}

void main()
{
	int a;

	printf("Enter value of a : ");
	scanf("%x",&a);
	printf("a = %x\t\t",a); bit_pattern(a);
	printf("~a = %x\t",~a);bit_pattern(~a);
}
