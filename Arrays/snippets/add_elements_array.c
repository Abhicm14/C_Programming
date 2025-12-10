#include<stdio.h>

void main()
{
	int arr[10],count,sum=0;

	for(count=0;count<10;count++)
	{
		printf("Enter the Value for arr[%d] : ",count);
		scanf("%d",&arr[count]);
		sum += arr[count];
	}
	printf("Sum = %d\n",sum);
}
