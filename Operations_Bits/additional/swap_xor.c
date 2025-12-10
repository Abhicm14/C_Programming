#include<stdio.h>

void main()
{
	int x,y;
	printf("Enter values for x and y : ");
	scanf("%d%d",&x,&y);
	printf("x = %d, y = %d\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("x = %d, y = %d\n",x,y);
}
