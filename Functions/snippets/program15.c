#include<stdio.h>

void func1();
void func2(void);

void main()
{
	func1(1.3,'a');
	func2(1.3,'a');
}
void func1()
{
	printf("\nFunction1\n");
}
void func2(void)
{
	printf("\nFunction2\n");
}

