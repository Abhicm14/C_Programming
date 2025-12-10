//Write a _program to modify the elements of an array such that the last 3 elements becomes the first elements of the array and all other elements are shifted to right. 1 2 3 4 5 6 7 8 9 -> 7 8 9 1 2 3 4 5 6


#include<stdio.h>

void main()
{
        int count;
	int count1;
	int temp=0;
        int num;
        int size;
	int nelements;

        printf("Enter the number of elements u want to enter : ");
        scanf("%d" ,&size);

        int arr[size];

        printf("Enter the Elements of array : \n");
        for(count=0; count<size; count++)
        {
                printf("arr[%d] = ",count);
                scanf("%d",&arr[count]);
        }

	printf("Enter number of positions to rotate: ");
    	scanf("%d", &nelements);

	nelements = nelements % size ;

        printf("Array Elements Before rotate : ");
        for(count=0; count<size; count++)
                printf("%d  ",arr[count]);

        printf("\n");

	// Temporary array to hold rotated result
	int rotated[size];

    	// Perform rotation
    	for(count = 0; count < size; count++) 
	{
    	    count1 = (count + nelements) % size;
	    rotated[count1] = arr[count];
    	}

    	// Copy back to original array
    	for(count = 0; count < size; count++)
        	arr[count] = rotated[count];

        printf("Array Elements After rotate : ");
        for(count=0; count<size; count++)
                printf("%d  ",arr[count]);

        printf("\n");
}
