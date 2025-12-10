#include<stdio.h>

void main()
{
	char str[] = "painstaking";
	char *p = str+5;
	printf("%c\t",*p);
	printf("%s\n",p);
}
