#include<stdio.h>

void main()
{
	int i,num=0x1a3b;
	unsigned int mask;
	mask=1<<15;
	for(i=15;i>=0;i--)
	{
		(num&mask) ? printf("1") : printf("0");
		mask = mask>>1;
	}
}
