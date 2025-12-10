#include<stdio.h>
#include<stdlib.h>

int *func1(void);
int *func2(void);

void main()
{
	int *ptr1,*ptr2;
	ptr1=func1();
	ptr2=func2();
	printf("%d %d\n",*ptr1,*ptr2);
}

int *func1(void)
{
	int a=8,*p=&a;
	return p;
}

int *func2(void)
{
	int *p;
	p = (int *)malloc(sizeof(int));
	*p = 9;
	return p;
}	
