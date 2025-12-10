#include<stdio.h>

void func(char *str)
{
	printf("%s\n",str);
}

void main()
{
	char str[]="Vijaynagar";
	func(str+5);
}
