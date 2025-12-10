#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];

	printf("Enter a number : ");
	scanf("%s",str);
	printf("%d\n",str_to_int(str));
}

int str_to_int (char str[])
{
	int i,num=0;

	if(str[0]=='-')
		i=1;
	else
		i=0;

	while(i<strlen(str))
		num=num*10+(str[i++]-48);

	if(str[0]=='-')
		return -num;
	else
		return num;
}
