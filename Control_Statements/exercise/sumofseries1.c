#include<stdio.h>

void main()
{
	int sum=1,num,i,result=0;

	printf("Enter the nth term : ");
	scanf("%d",&num);

	for(i=0; i<=num; i++)
	{
		sum += i;
		printf("%d + ",sum);
		result = result + sum;
	}

	printf("\nResult = %d\n",result);
}
