#include<stdio.h>

int sumdiv(int num);

void main()
{
	int i,sum,lower,upper;

	printf("Enter the lower number  : ");
	scanf("%d",&lower);
	printf("Enter the upper number  : ");
        scanf("%d",&upper);

	printf("The Perfect numbers b/w %d to %d is : ",lower,upper);
	
	for(i=lower;i<=upper;i++)
	{
		sum = sumdiv(i);
		if(i==sum)
			printf("%d ",sum);
	}
	printf("\n");
}

int sumdiv(int num)
{
	int j,sum=0;
	
	for(j=1;j<=num/2;j++)	
	{
		if(num%j==0)
		{
			sum+=j;
		}
	}
	return sum;
}
