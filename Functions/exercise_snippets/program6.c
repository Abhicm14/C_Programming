#include<stdio.h>

void main()
{
	int s;
	s=func(2,3);
	printf("%d\n",s);
}

int func(int a,int b,int c)
{
	c=4;
	return (a+b+c);
}
