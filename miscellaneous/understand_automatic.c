#include<stdio.h>

void func()
{
	int x=2;
	int y=5;
	printf("x=%d,y=%d\n",x,y);
	x++;
	y++;
}

void main()
{
	func();
	func();
	func();
}
