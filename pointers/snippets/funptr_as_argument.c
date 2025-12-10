#include<stdio.h>

void main()
{
	void func(char,void (*fp)(float));
	void fun1(float);
	void (*p)(float);

	p=fun1;

	printf("Function main() called\n");
	func('a',p);
}

void func(char b,void (*fp)(float))
{
	printf("Function func() called\n");
	(*fp)(8.5);
}

void fun1(float f)
{
	printf("Function fun1() called\n");
}
