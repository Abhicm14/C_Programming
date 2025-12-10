#include<stdio.h>

int sum(int x, int y)
{
	int s;
	
	s=x+y;

	return s;
}

void main()
{
	int s,a,b;

	printf("Enter the a and b number : ");
	scanf("%d %d",&a,&b);

	s=sum(a,b);

	printf("Sum of %d and %d is %d\n",a,b,s);
}
