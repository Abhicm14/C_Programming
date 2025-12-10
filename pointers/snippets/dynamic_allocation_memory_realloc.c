#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i, *ptr;

	ptr = (int *)malloc(5*sizeof(int));

	if(ptr==NULL)
	{
		printf("Memory not available\n");
		exit(1);
	}
	printf("Enter 5 integers : \n");
	for(i=0;i<4;i++)
		scanf("%d ",ptr+i);

	ptr = (int *)realloc(ptr, 9*sizeof(int));

	if(ptr == NULL)
	{
		printf("Memory not available\n");
		exit(1);
	}

	printf("Enter 4 more integers : \n");
	for(i=4;i<9;i++)
		scanf("%d",ptr+i);
	for(i=0;i<9;i++)
		printf("%d ",*(ptr+i));

	printf("\n");
}

