#include<stdio.h>

void main()
{
	int func1();

	printf("Address of function main() is : %u \n",main);
	printf("Address of function func1() is : %u \n",func1);
	func1();
}

func1()
{
	printf("India is great\n");
}
