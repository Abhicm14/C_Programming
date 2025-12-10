#include<stdio.h>

void main()
{
	int a,b;
	a=b=-3;
	b=-a-a+!a;
	printf("%d\n",a);
	printf("%d\n",!a);
	printf("%d\n",-a);
	printf("%d\n",-a-a);
}
