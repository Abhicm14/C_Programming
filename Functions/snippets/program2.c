#include<stdio.h>

void drawline(void);

void main()
{
	drawline();
}

void drawline(void)
{
	int count;

	for(count = 0; count<=50; count++)
	{
		printf("-");
	}
	printf("\n");
}
