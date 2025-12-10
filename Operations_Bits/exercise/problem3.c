#include<stdio.h>

void main()
{
	int x;
	x = (0xFF>>8)<<8;
	printf("%x\n",x);
}
