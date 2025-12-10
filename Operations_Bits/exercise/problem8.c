#include<stdio.h>

void main()
{
	int num=0xA01D,pos=3,bit;
	int mask=1<<pos;
	bit=(num & mask)>>pos;
	printf("%d",bit);
}
