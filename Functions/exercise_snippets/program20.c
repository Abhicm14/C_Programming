#include<stdio.h>

void main()
{
	int a=2,b=5;
	a=func(a+b,a-b);
	printf("%d\n",a);
}
func(int x, int y)
{
	return x+y,x-y;
}
