#include<stdio.h>

void main()
{
	int a=5, *ptr;
	
	ptr=&a;
	
	printf("Input a number : ");
	scanf("%d",ptr); /*Suppose the input number is 16*/
	printf("%d\n",*ptr);
}


