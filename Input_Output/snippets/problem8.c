#include<stdio.h>

void main()
{
	int day,month,year;
	int basic;
	char ch;

	scanf("%d-%d-%d",&day,&month,&year);
	scanf("%c",&ch);
	scanf("$%d",&basic);
	printf("Date : %d-%d-%d\n",day,month,year);
	printf("Basic : %d\n",basic);
}
