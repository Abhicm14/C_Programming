#include<stdio.h>

void main()
{
	int i,bit,num=0x238E;
	unsigned int mask;
	for(i=15; i>=0; i--)
	{
		mask=1<<i;
		bit=(num&mask)>>i;
		printf("%d",bit);
	}
}
