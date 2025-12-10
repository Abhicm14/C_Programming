#include<stdio.h>

void main()
{
	FILE *p;
	char ch;
	
	if((p=fopen("docs/myfile.txt","r")) == NULL)
	{
		printf("This file doesn,t exist\n");
	}
	else
	{
		while((ch = fgetc(p)) != EOF)
			printf("%c",ch);
	}
	fclose(p);
}
