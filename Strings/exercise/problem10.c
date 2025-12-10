#include<stdio.h>

void main()
{
	char str[] = "Lucknow";
	char *p = str;
	p++;
	p=p+2;
	p[3] = 't';
	printf("%s	%s\n",str,p);
}
