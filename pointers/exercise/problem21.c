#include<stdio.h>

int *ptr;

void main()
{
	func();
	printf("%d\n",*ptr);
}

func()
{
	int num=10;
	ptr = &num;
}
