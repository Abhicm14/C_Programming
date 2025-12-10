#include<stdio.h>

void main()
{
	float sum=0,sum1=0;
	int num,i,prod;

	printf("Enter the nth term : ");
       	scanf("%d",&num);

	printf("1+1/2");
	for(i=2;i<=num;i++)
	{
		prod = i*i;
		printf("+1/%d",prod); 
		sum1+=(float)(1.0/prod);
	}
	sum=(float)(1+0.5+sum1);
	printf("\nSum of Series = %f\n",sum);
}
