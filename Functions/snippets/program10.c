#include<stdio.h>

void func(int a, int b);

void main()
{
	int a=6,b=3;
	func(a,b);
	func(15,4);
	func(a+b,a-b);
}

void func(int a, int b)
{
	printf("a = %d	b = %d\n",a,b);
}
