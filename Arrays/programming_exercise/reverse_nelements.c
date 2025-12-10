//Write a function to reverse only first n elements of an array.

#include<stdio.h>

void main()
{
        int count;
        int size;
        int count1;
        int temp;
	int num;

        printf("Enter the number of elements u want to enter : ");
        scanf("%d" ,&size);

        int arr[size];

        printf("Enter the Elements of array : \n");
        for(count=0; count<size; count++)
        {
                printf("arr[%d] = ",count);
                scanf("%d",&arr[count]);
        }

	printf("Enter n elements u want to reverse : ");
	scanf("%d",&num);

	num = num % (size-1);

        printf("Array Elements Before reverse : ");
        for(count=0; count<size; count++)
                printf("%d  ",arr[count]);

        printf("\n");
	
	for(count = num-1; count >= 0; count--)
        {
                for(count1=count-1; count1>=0; count1--)
                {
			temp = arr[count];
                        arr[count] = arr[count1];
                        arr[count1] = temp;
                }
        }

        printf("Array Elements After reverse : ");
        for(count=0; count<size; count++)
                printf("%d  ",arr[count]);

        printf("\n");
}
