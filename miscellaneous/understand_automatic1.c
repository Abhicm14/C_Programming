#include<stdio.h>

void func()
{
	int x=15;
	printf("x = %d\n",x);
}

void main()
{
	int x=5;
	printf("x = %d\t",x);
	func();
}
