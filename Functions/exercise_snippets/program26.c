#include<stdio.h>

void main()
{
	func1(6);
	printf("\n");
	func2(6);
}
func1(int x)
{
	printf("%d ",x);
	if(x>2)
		func1(--x);
}
func2(int x)
{
	if(x>2)
		func2(--x);
	printf("%d ",x);
}
