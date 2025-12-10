#include<stdio.h>

void func1();
void func2();
void func3();
void func4();

int a,b = 10;

void main()
{
	printf("Inside main() : a = %d , b = %d\n",a,b);
	func1();
	func2();
	func3();
	func4();
}

void func1()
{
	printf("Inside func1() : a = %d, b = %d\n",a,b);
}

void func2()                                                                                                                                                {
        int a = 8;
	printf("Inside func2() : a = %d, b = %d\n",a,b);
}

void func3()
{
        printf("Inside func3() : a = %d, b = %d\n",a,b);
}

void func4()
{
	int b = 20;
        printf("Inside func4() : a = %d, b = %d\n",a,b);
}

	
