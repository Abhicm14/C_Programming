#include<stdio.h>

void main()
{
	int arr[4] = {2,4,8,16},i=4,j;

	while(i)
	{
		j=arr[i]+i;
		i--;
	}
	printf("j=%d\n",j);
}

