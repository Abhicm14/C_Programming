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

	printf("Enter Value for a : ");
	scanf("%x",&a);
	printf("a = %x\t",a);
	bit_pattern(a);
	a=a>>2;
	printf("a = %x\t",a);
	bit_pattern(a);
}
