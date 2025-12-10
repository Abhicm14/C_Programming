#include<stdio.h>

void main()
{
	int arr[5],i;
	
	for(i=0;i<5;i++)
		printf("%u ",arr+i);
	
	printf("\nEnter 5 numbers\n");

	for(i=0; i<5; i++)
		scanf("%d",arr+i);

	for(i=0;i<5;i++)
		printf("%d ",*(arr+i));

	printf("\n");
}
