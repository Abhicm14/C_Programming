#include<stdio.h>

void main()
{
	int count;
	int count1;
	int temp;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	for(count=0,count1=9;count<count1;count++,count1--)
	{
		temp=arr[count];
		arr[count]=arr[count1];
		arr[count1]=temp;
	}
	printf("After reversing the array is : ");
	for(count=0; count<10;count++)
	{
		printf("%d  ",arr[count]);
	}
	printf("\n");
}

