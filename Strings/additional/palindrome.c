#include<stdio.h>
#include<string.h>

void main()
{
	char str[10];
	int i=0;
	int j;
	int flag;

	printf("Enter The Word : ");
	scanf("%s",str);

	j=strlen(str)-1;

	while(i<=j)
	{
		if(str[i] == str[j])
			flag = 1;
		else
		{
			flag=0;
			break;
		}
		i++;
		j--;
	}
	if(flag == 1)
		printf("Word is Palindrome\n");
	else
		printf("Word is not Palindrome\n");
}
