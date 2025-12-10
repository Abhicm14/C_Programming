#include<stdio.h>

void main()
{
	int i;

	char *arrp[]={ "White","Red","Green","Yellow","Blue"};

	for(i = 0; i < 5; i++)
	{
		printf("String : %s\t",arrp[i]);
		printf("Address of string : %u\t",arrp[i]);
		printf("Address of string is stored at : %u\n",arrp+i);
	}

}
