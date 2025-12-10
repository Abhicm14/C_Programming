#include"array.h"

void even_odd_array(int arr[],int size)
{
	int count;
	int size1=0;
	int size2=0;

	for(count=0; count<size; count++)
	{
		if(arr[count]%2 ==0)
			size1++;
		else
			size2++;
	}

	int even[size1];
	int odd[size2];

	int count1=0;
	int count2=0;

	for(count=0; count<size; count++)
    {
		
        if(arr[count]%2 ==0)
		{
			even[count1++] = arr[count];
		}
		else
		{
			odd[count2++] = arr[count];
		}
    }

	printf("Even elements of array : ");
	print_array(even,size1);
	printf("\n");

	printf("Odd elements of array : ");
    print_array(odd,size2);
	printf("\n");
}
