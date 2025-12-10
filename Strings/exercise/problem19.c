#include<stdio.h>

void func(char *p);

void main()
{
	char *str = "doubtful";

	func(str);

	printf("\n");
}

void func(char *p)
{
	if(*p != 'f')
	{
		printf("%c",*p);
		func(++p);
	}
}
