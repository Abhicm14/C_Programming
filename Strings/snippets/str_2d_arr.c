#include<stdio.h>

#define N 5
#define LEN 10

void main()
{
	char arr[N][LEN] = {"White","Red","Green","Yellow","Blue"};

	int i;

	for(int i = 0; i < N; i++)
	{
		printf("String = %s\t",arr[i]);
		printf("Address of string = %u\n",arr[ i]);
	}
}
