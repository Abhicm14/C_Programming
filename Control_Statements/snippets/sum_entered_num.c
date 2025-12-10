#include<stdio.h>

void main()
{
	int num,sum = 0;

	do
	{
		printf("Enter a number (0 to stop) ");
		scanf("%d",&num);
		sum +=num;
	}while(num!=0);
	printf("Sum is %d\n",sum);
}
	
