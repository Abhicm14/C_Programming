#include<stdio.h>

void main()
{
	int i=2,j=3;
	printf("%d\n",func(i,j));
}

func(int a, int b)
{
	a=a-5;
	b++;
	return (!a+--b);
}
