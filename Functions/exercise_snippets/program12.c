#include<stdio.h>

void main()
{
	int x=5;
	func1(x);
}

func1(int a)
{
	printf("Value of a = %d\n",a);
	if(a>0)
		func2(--a);
}

func2(int b)
{
	printf("Value of b = %d\n",b);
	if(b>0)
		func1(--b);
}
