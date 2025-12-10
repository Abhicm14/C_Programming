#include<stdio.h>

#define SIZE 10

void main()
{
	int arr[SIZE];
	int i,k,item;

	printf("Enter elements of the array : \n");
	for(i=0; i< SIZE; i++)
		scanf("%d",&arr[i]);

	for(k=1; k<SIZE; k++)
	{
		item = arr[k];
		for(i=k-1; item < arr[i] && i>=0; i--)
		       arr[i+1] = arr[i];
		arr[i+1]=item;	
	}
	printf("Sorted array is : \n");
	for(i=0; i< SIZE; i++)
		printf("%d ",arr[i]);
	printf("\n");

}

