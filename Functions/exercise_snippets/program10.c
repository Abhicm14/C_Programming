#include<stdio.h>

void main()
{
	int n=5;
	printf("%d\n",func(n));
}
func(int n)
{ return (n+sqr(n-2)+cube(n-3));}
sqr(int x)
{ return (x*x);}
cube(int x)
{ return (x*x*x); }
