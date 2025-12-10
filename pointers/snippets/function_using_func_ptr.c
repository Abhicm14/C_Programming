#include<stdio.h>

void main()
{
	float (*fp)(int,float);
	float add(int,float),result;

	fp=add;

	result=add(5,6.6);
	printf("%f\n",result);

	result=(*fp)(5,6.6);
	printf("%f\n",result);
}
float add(int a,float b)
{
	return (a+b);
}
