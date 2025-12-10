#include<stdio.h>

void main()
{
	int count;
	int size;
	int size1=0;
	int size2=0;

	printf("Enter the Size of array : ");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array elements : \n");
	for(count = 0; count<size; count++)
	{
		printf("arr[%d] : ",count);
		scanf("%d",&arr[count]);
	}

	for(count=0; count<size; count++)
	{
		if(arr[count]%2 ==0)
			size1++;
		else
			size2++;
	}

	int even[size1];
	int odd[size2];

	int count1=0,count2=0;

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
	for(count = 0; count<size1; count++)
        {
                printf("arr[%d] : %d\t",count,even[count]);
        }
	printf("\n");

	printf("Odd elements of array : ");
        for(count = 0; count<size2; count++)
        {
                printf("arr[%d] : %d\t",count,odd[count]);
        }
	printf("\n");
}
