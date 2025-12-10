#include<stdio.h>

void main()
{
	int a = 5;
	int b = 8;


	printf("Before calling the function, a and b are %d %d\n",a,b);
	value(a,b);
	printf("After calling the function, a and b are %d %d\n",a,b);

}

value(int x,int y)
{
	x++;
	y++;
	printf("In function chages are %d %d\n",x,y);
}
