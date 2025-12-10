#include<stdio.h>

void main()
{
	int arr[5] = {5,10,15,20,25};
	int count=0;
	for(count=0;count<5;count++)
	{
		printf("Value of arr[%d] =",count);
		printf("%d\t",arr[count]);
		printf("%d\t",*(arr+count));
		printf("%d\t",*(count+arr));
		printf("%d\n",count[arr]);
		printf("Address of arr[%d] = %u\n",count,&arr[count]);
	}
}
