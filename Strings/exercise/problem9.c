#include<stdio.h>
#include<string.h>

void main()
{
	printf("%c\t","Determination"[2]);
	printf("%c\t",*("Determination"+2));
	printf("%s\t","Determination"+2);
	printf("Determination"+2);
	printf("\t");
	printf("Determination"+strlen("Deepali"));
	printf("\t");
	printf("Determination"+sizeof("Deepali"));
	printf("\n");
}
