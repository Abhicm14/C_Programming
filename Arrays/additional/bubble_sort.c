#include<stdio.h>

#define SIZE 10

void main()
{
	int arr[SIZE];
	int i,j,temp;

	printf("Enter elements of the array : \n");
	for(i=0; i<SIZE; i++)
		scanf("%d",&arr[i]);
	
	for(i=0; i<SIZE-1; i++)
	{
		for(j=0; j<SIZE-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("Sorted array is : \n");
	for(i=0; i<SIZE; i++)
		printf("%d ",arr[i]);
	printf("\n");
}
