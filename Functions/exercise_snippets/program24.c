#include<stdio.h>

void main()
{
	int a=7,b=8;
	printf("%d\n",func(a,b));
}

func(int x,int y)
{
	if(x==0)
		return y;
	else
		func(--x,++y);
}
