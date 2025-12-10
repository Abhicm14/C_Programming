#include<stdio.h>

void main()
{
	char str[] = "India";
	char *p;
	p=str;

	while(*p !='\0')
	{
		printf("Character = %c\t",*p);
		printf("Address = %u\n",p);
		p++;
	}
}
