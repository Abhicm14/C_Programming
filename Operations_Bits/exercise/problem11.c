#include<stdio.h>

void main()
{
	int i,num=0xa0df;
	for(i=15;i>=0;i--)
		printf("%d",(num>>i)&1);
}
