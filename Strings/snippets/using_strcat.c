#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20],str2[20];

	printf("Enter the first string : ");
	scanf("%s",str1);

	printf("Enter the first string : ");
        scanf("%s",str2);

	strcat(str1,str2);

	printf("First string : %s \tSecond string : %s\n",str1,str2);

	strcat(str1,"__One");

	printf("Now first string is : %s \n",str1);
}
