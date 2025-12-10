//Write a program to accept n numbers and display the sum of the highest and lowest numbers.

#include<stdio.h>

void main()
{
	int count;
	int size;
	int min;
	int max;
	int sum;

	printf("Enter the number of elements u want to enter : ");
	scanf("%d" ,&size);

	int arr[size];

	printf("Enter the Elements of array : \n");
	for(count=0; count<size; count++)
	{
		printf("arr[%d] = ",count);
		scanf("%d",&arr[count]);
	}

	min = max = arr[0];

	for(count = 1; count<size; count++)
	{
		if(arr[count] < min)
			min = arr[count];
		if(arr[count] > max)
			max = arr[count];
	}
	sum = min + max;
	printf("Minimum = %d\t Maximum =%d\n",min,max);
	printf("Sum of %d and %d is = %d\n",min,max,sum);
}
