#include<stdio.h>
#include<string.h>

void main()
{
	char str1[10],str2[20];

	printf("Enter the first string : ");
	scanf("%s",str1);

	printf("Enter the second string : ");
	scanf("%s",str2);

	strcpy(str1,str2);

	printf("First string : %s \t\t Second String : %s\n",str1,str2);

	strcpy(str1,"Delhi");
	strcpy(str2,"Calcutta");

	printf("First string : %s \t\t Second String : %s\n",str1,str2);

}
