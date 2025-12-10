#include<stdio.h>

void func1(char arr[]);
void func2(char a[]);

void main()
{
	int i;
	char arr[5];
	
	puts(arr);

	func1(arr);

	puts(arr);

	func2(arr);

	puts(arr);
}

void func1(char x[])
{
	x = "Jack";
	puts(x);
}

void func2(char x[])
{
	x[0] = 'J',x[1] = 'i',x[2] = 'l',x[3] = 'l',x[4]='\0';
	puts(x);
}
