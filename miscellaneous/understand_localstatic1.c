#include<stdio.h>

void func(int n)
{
	static int step;
	step = step+n;
	printf("%d\t",step);
}

void main()
{
	int n,i;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
		func(n);
	printf("\n");
}
