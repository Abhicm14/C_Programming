#include<stdio.h>

void main()
{
	int var1=12,var2=35;
	printf("%d",max(var1,var2));
}
int max(int x,int y)
{
	x>y?return x: return y;
}
