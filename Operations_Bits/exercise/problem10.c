#include<stdio.h>

void main()
{
	int num=0x1f,pos=3,bit;
	bit=(num>>pos)&1;
	printf("%d\n",bit);

}
