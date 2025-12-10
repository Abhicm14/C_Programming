#include<stdio.h>

void main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	for(int count=0;count<3;count++)
	{
		for(int count1=0;count1<3;count1++)
		{
			printf("%d\n",&arr[count][count1]);
		}
	}
}
