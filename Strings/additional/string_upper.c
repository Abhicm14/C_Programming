#include<stdio.h>

void main()
{
	char str[10];
	int i=0;

	printf("Enter a string in lowercase : ");
	scanf("%s",str);

	while(str[i] != '\0')
	{
		str[i]=str[i]-32;
		i++;
	}
	printf("The Uppercase string is : %s\n",str);
}
