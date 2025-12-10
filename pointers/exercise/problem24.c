#include<stdio.h>

void main()
{
	int arr[10];
	func(arr);
}

func(int a[10])
{
	int b[10];
	int x=5,y=4;
	a=&x;
	b=&y;
}
