#include<stdio.h>

int convert_upper(int);

void main()
{
	char ch;

	printf("Enter the lower case letters :");
	scanf("%c",&ch);

	printf("Upper Case : %c\n",convert_upper(ch));
}

int convert_upper(int ch)
{
	return ch-32;
}
