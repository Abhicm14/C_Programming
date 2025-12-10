#include<stdio.h>

void main()
{
	int a=2,b=6;
	printf("%d\t",func1(a,b));
	printf("%d\n",func2(a,b));
}
func1(int a, int b)
{
	int i,s=0;
	for(i=a; i<=b; i++)
	{
		s=s+i*i;
	}
	return s;
}
func2(int a, int b)
{
	int s;
	if(a<b)
		s=a*a+func2(a+1,b);
	else
		s=a*a;
}
