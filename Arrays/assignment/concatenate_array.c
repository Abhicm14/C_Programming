#include<stdio.h>

void main()
{
        int size;
        int size1;
        int size2;
        int count;
	int position;

        printf("Enter the size of array 1st : ");
        scanf("%d",&size1);

        int arr1[size1];

        printf("Enter the elements of array 1st : \n");
        for(count=0; count<size1;count++)
        {
                printf("arr1[%d] : ",count);
                scanf("%d",&arr1[count]);
        }

	printf("Enter the size of array 2nd : ");
        scanf("%d",&size2);

        int arr2[size2];

        printf("Enter the elements of array 2nd : \n");
        for(count=0; count<size2;count++)
        {
                printf("arr2[%d] : ",count);
                scanf("%d",&arr2[count]);
        }

        printf("Enter the position of array  : ");
        scanf("%d",&position);

	size = size1+size2;

        int arr[size];

	int count1=0;
	int count2=0;

        for(count=0; count<size; count++)
        {
		if(count1<position)
			arr[count]=arr1[count1++];
		else if(count2 < size2)
			arr[count] =arr2[count2++];
		else
			arr[count] = arr1[count1++];

        }

        printf("After Concatinating of 2 arrays : \n");

        for(count=0; count<size; count++)
        {
                printf("arr[%d] : %d\t",count,arr[count]);
        }
        printf("\n");
}
