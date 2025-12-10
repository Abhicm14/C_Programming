#include<stdio.h>

void main()
{
	int i,arr[8]={1,2,3,4,5,6,7,8};

	for(i=7; i>=0; i--)
		printf("%d\t",--arr[--i]);
}
