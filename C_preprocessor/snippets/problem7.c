#include<stdio.h>

int square(int x)
{
	return x*x;
}

void main()
{
	int k=5,s;
	s = square(k++);
	printf("s = %d, k = %d\n",s,k);
}
