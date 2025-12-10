#include<stdio.h>

void main()
{
	int count,sum = 0,term = 1,n;

	printf("Enter the number of terms : ");
	scanf("%d",&n);

	for(count = 1; count<=n;count++)
	{
		sum += term;
		term = term + count;
	}
	printf("Sum of the terms : %d\n",sum);
}
