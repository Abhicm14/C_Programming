#include<string.h>
#include<stdio.h>

void main()
{
	char *p[] = {"Orange","Yellow","Sky","Blue","Black"};
	char arr[10];
	printf("%s	%s	%s\n",p[1],p[2],p[3]);
	strcpy(arr,"Luck" "now");
	printf("%s\n",arr);
}

