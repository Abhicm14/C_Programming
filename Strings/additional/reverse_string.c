#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	int len;

	printf("Enter any string : ");
	scanf("%s",str);

	len = strlen(str);

	while(len>=0)
	{
		printf("%c",str[len]);
		len--;
	}
	printf("\n");
}
