#include<stdio.h>

void main()
{
	int i=0,k=3;
	i+=func(k);
	i+=func(k);
	i+=func(k);
	printf("%d\n",i);
}

func(int k)
{
	static int m=2;
	m=m+k;
	return m;
}
