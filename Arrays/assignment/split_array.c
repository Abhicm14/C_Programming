#include<stdio.h>

void main()
{
	int size;
	int size1;
	int size2;
	int count;

	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the elements of array : \n");
	for(count=0; count<size;count++)
	{
		printf("arr[%d] : ",count);
		scanf("%d",&arr[count]);
	}

	printf("Enter the 2 size of array you wish to Split : ");
	scanf("%d %d",&size1,&size2);

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

	for(count=0; count<size1; count++)
	{
		printf("arr1[%d] : %d\t",count,arr1[count]);
	}
	printf("\n");

	for(count=0; count<size2; count++)
        {
                printf("arr2[%d] : %d\t",count,arr2[count]);
        }
	printf("\n");
}
