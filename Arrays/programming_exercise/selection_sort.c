//Write a program to sort numbers of a one-d array in descending order using selection sort

#include<stdio.h>

void main()
{
	int count;
	int size;
	int count1;
	int temp;

	printf("Enter the number of elements u want to enter : ");
        scanf("%d" ,&size);

        int arr[size];

        printf("Enter the Elements of array : \n");
        for(count=0; count<size; count++)
        {
                printf("arr[%d] = ",count);
                scanf("%d",&arr[count]);
        }

	for(count = 0; count < size-1; count++)
	{
		for(count1=count+1; count1<size; count1++)
		{
			if(arr[count] < arr[count1])
			{
				temp = arr[count];
				arr[count] = arr[count1];
				arr[count1] = temp;
					
			}
		}
	}
	printf("Array Elements After Selection sort : ");
	for(count=0; count<size; count++)
		printf("%d  ",arr[count]);

	printf("\n");
}
