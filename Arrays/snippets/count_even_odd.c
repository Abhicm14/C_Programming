#include<stdio.h>

#define size 10

void main()
{
	int arr[size];
	int count;
	int evencount=0;
	int oddcount=0;

	for(count = 0; count<size; count++)
	{
		printf("Enter the Value for arr[%d] : ",count);
		scanf("%d",&arr[count]);

		if(arr[count]%2==0)
			evencount++;
		else
			oddcount++;

	}
	printf("Even Numbers = %d\nOdd Numbers = %d\n",evencount,oddcount);

}
