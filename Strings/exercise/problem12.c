#include<stdio.h>
#include<string.h>

void main()
{
	char str1[15] = "Good "; 
	char str2[] = "Evening";
	
	strcpy(str1+strlen(str1),str2);
	printf("%s\n",str1);
}
