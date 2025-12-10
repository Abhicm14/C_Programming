#include<stdio.h>

void main()
{
	int arr[5] = {5,10,15,20,25};
	int count;

	for(count =0; count<5; count++)
	{
		printf("Value of arr[%d] = %d\t",count,*(arr+count));
		printf("Address of arr[%d] = %u\n",count,arr+count);
	}
}
