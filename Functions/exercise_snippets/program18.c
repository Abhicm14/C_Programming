#include<stdio.h>

void func(int a,int b);

void main()
{
	int i=5,j=10;
	func(i/2,j%3);
}

void func(int a, int b)
{
	a=a/2;
	b--;
	printf("%d\t",a+b);
}
