#include<stdio.h>

void main()
{
	int a=5;
begin:
	if(a)
	{
		printf("%d  ",a);
		a--;
		goto begin;
	}
}
