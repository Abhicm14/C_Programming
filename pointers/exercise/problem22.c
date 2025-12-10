#include<stdio.h>

void main()
{
	int a=5,b=8;
	func(a,b);
	printf("a = %d, b = %d\n",a,b);
}
func(int x,int y)
{
	int temp;
	temp = *(&x), *(&x) = *(&y), *(&y)=temp;
}
