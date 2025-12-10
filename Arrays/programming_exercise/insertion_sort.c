//Write a program to sort numbers of a one-d array in descending order using insertion sort

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

        for(count = 1; count < size; count++)
        {
		temp = arr[count];

                for(count1=count-1; temp>arr[count1] && count1>=0; count1--)
                {
                        arr[count1+1] = arr[count1];
                }
		arr[count1+1] = temp;
        }

        printf("Sorted Array Elements After insertion sort : ");
        for(count=0; count<size; count++)
                printf("%d  ",arr[count]);

        printf("\n");
}
