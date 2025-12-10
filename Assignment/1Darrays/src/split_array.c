#include"array.h"

void split_array(int arr[],int size)
{
	int size1;
	int size2;
	int count;

	printf("Enter the size of array you wish to Split : ");
	scanf("%d",&size1);

	if(size1>size)
	{
		printf("Size Should be less Than array Size\n");
	}
	else
	{
		size2 = size - size1;

		int arr1[size1];
		int arr2[size2];
	
		int count1=0;
		int count2=0;	

		for(count=0; count<size; count++)
		{
			if(count1<size1)
				arr1[count1++]=arr[count];
			else
				arr2[count2++]=arr[count];
		}

		printf("After spliting the array : \n");
		print_array(arr1,size1);
		printf("\n");

		print_array(arr2,size2);
		printf("\n");
	}
}
