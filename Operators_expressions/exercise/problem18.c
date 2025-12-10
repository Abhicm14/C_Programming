#include<stdio.h>

void main()
{
	int a=10;
	a=a++*a--;
	printf("%d\n",a);
}
