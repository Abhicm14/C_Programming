#include<stdio.h>

void main()
{
	int x=5;
	x=func();
	printf("%d\n",x);
}

int func(int a)
{
	a=a*2;
}
