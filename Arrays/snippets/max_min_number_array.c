#include<stdio.h>

void main()
{
	int count;
	int arr[] = {2,5,4,1,8,9,11,6,3,7};
	int min;
	int max;
	
	min = max = arr[0];

	for(count=1;count<10; count++)
	{
		if(arr[count] < min)
			min = arr[count];
		if(arr[count] > max)
			max = arr[count];
	}
	printf("Minimum = %d, Maximum = %d\n",min,max);
}
