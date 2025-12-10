#include<stdio.h>

void main()
{
	void func(char ,void(*fp)(float));
	void fun1(float);

	printf("Function main() called\n");
	func('a',fun1);
}

void func(char b,void (*fp)(float))
{
	printf("Function func() called\n");
	(*fp)(8.5);
}

void fun1(float f)
{
	printf("Function fun1() Called \n");
}

