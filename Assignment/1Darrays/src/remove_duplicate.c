#include"array.h"

void remove_duplicate(int arr[],int size)
{
	int count;

	int arr1[size];

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
	print_array(arr1,size);
	printf("\n");
}
