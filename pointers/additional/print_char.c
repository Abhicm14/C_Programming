#include<stdio.h>

void main()
{
	int var = 10;
	char *cptr;

	cptr = (char *)&var;

	printf("%p\n",cptr);
}
