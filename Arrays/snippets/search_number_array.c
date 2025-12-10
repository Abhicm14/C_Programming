#include<stdio.h>

#define SIZE 10

void main()
{
	int i,arr[SIZE] = {23,12,56,98,76,14,65,11,19,45};
	int item;

	printf("Enter the item to be searched : ");
	scanf("%d",&item);

	for(i=0; i<SIZE; i++)
	{
		if(item == arr[i])
		{
			printf("%d found at position %d\n",item,i+1);
			break;
		}
	}
	if(i==SIZE)
		printf("Item %d not found in array\n",item);
}
