#include<stdio.h>

int max(int x, int y);

void main()
{
	int x,y;

	printf("Enter the x and y number : ");
	scanf("%d %d",&x,&y);

	printf("Maximum of %d and %d is %d\n",x,y,max(x,y));
}

int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
