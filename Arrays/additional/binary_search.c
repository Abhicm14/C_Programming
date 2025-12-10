#include<stdio.h>

#define SIZE 10

void main()
{
	int arr[SIZE];
	int low,up,mid,i,item;

	printf("Enter elements of the array(in sorted order) : \n");

	for(i=0; i<SIZE; i++)
		scanf("%d",&arr[i]);

	printf("Enter the item to be searched : ");
	scanf("%d",&item);

	low=0;
	up = SIZE-1;

	while(low<=up && item != arr[mid])
	{
		mid = (low+up)/2;
		if(item>arr[mid])
			low=mid+1;
		if(item < arr[mid])
			up = mid-1;
		if(item == arr[mid])
			printf("%d found at position %d\n",item,mid+1);
		if(low>up)
			printf("%d not found in array\n",item);
	}

}
