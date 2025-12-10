#include<stdio.h>

void main()
{
	int n=8;
	printf("%d\n",func(n));
}

func(int n)
{
	if(n==0)
		return 0;
	else
		return (n+func(n-1));
}
