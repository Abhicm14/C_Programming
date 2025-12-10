#include<stdio.h>

void main()
{
	int k=0xc9fb;
	k&=~(1<<5);
	printf("%x\t",k);
	k|=(1<<2);
	printf("%x\t",k);
	k^=(1<<14);
	printf("%x\n",k);
}
