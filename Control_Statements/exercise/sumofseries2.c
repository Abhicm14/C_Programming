#include<stdio.h>

void main()
{
	int i,sum=0,result=0,num,n=1,j;

	printf("Enter the nth term : ");
	scanf("%d",&num);

	for(i=1; i<=num; i++)
	{
		sum += n;
		result += sum; 	
		n*=10;
		printf("%d + ",sum);
	}
	printf("\nResult = %d\n",result);
}
