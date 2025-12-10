#include<stdio.h>

void main()
{
	int arr[6] = {1,2,3,4,5,6};
	int *p=arr;
	printf("Size of p = %u, Size of arr = %u\n",sizeof(p),sizeof(arr));
}
