#include<stdio.h>

#define SIZE1 5
#define SIZE2 7
#define SIZE3 SIZE1+SIZE2

void main()
{
	int arr1[SIZE1],arr2[SIZE2],arr3[SIZE3];
	int i,j,k;

	printf("Enter elements of the array arr1 (in sorted order) : \n");
	for(i=0; i<SIZE1; i++)
		scanf("%d",&arr1[i]);

	printf("Enter elements of the array arr2 (in sorted order) : \n");          for(i=0; i<SIZE2; i++)                                                              scanf("%d",&arr2[i]);

	i=0,j=0,k=0;

	while((i<SIZE1)&&(j<SIZE2))
	{
		if(arr1[i]<arr2[j])
			arr3[k++]=arr1[i++];
		else
			arr3[k++]=arr2[j++];
	}

	while(i<SIZE1)
		arr3[k++]=arr1[i++];
	while(j<SIZE2)
		arr3[k++]=arr2[j++];

	printf("Merged array arr3 is : \n");
	for(i=0; i< SIZE3; i++)
		printf("%d  ",arr3[i]);
	printf("\n");
}
