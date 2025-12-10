#include<stdio.h>

int a=5;

void func(void );

void main()
{
	func();
	printf("%d\n",a);
}
void func(void)
{
	int a=2;
	printf("%d\t",a);
}
