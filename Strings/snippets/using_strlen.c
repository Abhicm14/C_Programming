#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	int length;

	printf("Enter the string: \n");
	scanf("%s",str);
	length = strlen(str);
	printf("Length of the string is : %d\n",length);
}
