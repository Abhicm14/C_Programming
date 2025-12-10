#include<stdio.h>

void func(void);

void main()
{
	printf("Lucknow\n");
	goto ab;
}
void func(void)
{
	ab;
	printf("Bareilly\n");
}
