//Write a _program to modify the elements of an array such that the last element becomes the first element of the array and all other elements are shifted to right. 1 2 3 4 5 6 7 8 9 -> 9 1 2 3 4 5 6 7 8 

#include<stdio.h>

void main()
{
	int count;
	int temp=0;
        int num;
	int size;

        printf("Enter the number of elements u want to enter : ");
        scanf("%d" ,&size);

        int arr[size];

        printf("Enter the Elements of array : \n");
        for(count=0; count<size; count++)
        {
                printf("arr[%d] = ",count);
                scanf("%d",&arr[count]);
        }

        printf("Array Elements Before rotate : ");
        for(count=0; count<size; count++)
                printf("%d  ",arr[count]);

        printf("\n");

	temp = arr[size-1];

	for(count =size-1; count >=0; count--)
	{
		temp = arr[count];
		arr[count] = arr[count-1];
	       	arr[count-1] = temp;	
	}
	arr[0] = temp;

	printf("Array Elements After rotate : ");
        for(count=0; count<size; count++)
                printf("%d  ",arr[count]);

        printf("\n");
}
