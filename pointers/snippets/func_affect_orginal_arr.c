#include<stdio.h>

void func(int a[]);

void main()
{
	int i,arr[5]={3,6,2,7,1};

	printf("Inside main() Before calling fun : ");
        for(i=0;i<5;i++)
                printf("%d ",arr[i]);
        printf("\n");

	func(arr);

	printf("Inside main() After calling fun : ");
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void func(int a[])
{
	int i;
	printf("Inside func() : ");
	for(i=0;i<5;i++)
	{
		a[i] = a[i]+2;
		printf("%d ",a[i]);
	}
	printf("\n");
}
