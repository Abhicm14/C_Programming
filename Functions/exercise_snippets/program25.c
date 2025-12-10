#include<stdio.h>

void main()
{
	int x=55,y=17;
	printf("%d\n",func(x,y));
}
func(int x, int y)
{
	int q=0;
	if(x<y)
		return 0;
	else
		return func(x-y,y)+1;
}

