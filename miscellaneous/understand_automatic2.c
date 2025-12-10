#include<stdio.h>

void main()
{
	int x=3;
	printf("%d\t",x);
	{
		int x=10;
		printf("%d\t",x);
	}
	{
		int x=26;
		printf("%d\t",x);
	}
	printf("%d\n",x);
}
