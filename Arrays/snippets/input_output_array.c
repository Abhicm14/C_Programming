#include<stdio.h>

void main()
{
	int count;
	int arr[5];

	for(count=0; count<5; count++)
	{
		printf("Enter the Value for arr[%d] : ",count);
		scanf("%d",&arr[count]);
	}

	printf("The Array Elements are : \n");
	for(count = 0; count<5; count++)
	{
		printf("%d\t",arr[count]);
	}
	printf("\n");
}
