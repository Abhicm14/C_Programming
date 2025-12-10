#include<stdio.h>

void main()
{
	int size;
	int count;

	printf("Enter the size of array 1st : ");
	scanf("%d",&size);

	int arr[size];
	int arr1[size];

	printf("Enter the elements of array 1st : \n");
	for(count=0; count<size;count++)
	{
		printf("arr[%d] : ",count);
		scanf("%d",&arr[count]);
	}

	int num = 0; // number of unique elements

	for (int count = 0; count < size; count++) 
	{
		int counted = 0;
		
		for (int count1 = 0; count1 < num; count1++) 
		{
			if (arr[count] == arr1[count1]) 
			{
				counted = 1;
				break;
			}
		}
		
		if (!counted) 
		{
			arr1[num++] = arr[count];
		}
	}

	printf("Array elements after removing duplicates:\n");
	for (int count = 0; count < num; count++) 
	{
		printf("%d ", arr1[count]);
	}
	printf("\n");
}
