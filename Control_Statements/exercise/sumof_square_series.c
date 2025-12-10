#include<stdio.h>

void main()
{
	int i,num,x;
	long int term,sum=0;

	printf("Enter the term and nth term : ");
	scanf("%d %d",&x,&num);

	term = x;

	for(i=1; i<=num; i++)
	{
		printf("%ld + ",term);
		sum += term;
		term *= x;
		
	}
	printf("\nsum = %ld\n",sum);
}
