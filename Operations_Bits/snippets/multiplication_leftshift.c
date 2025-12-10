#include<stdio.h>

void bit_pattern(int a)
{
	int i,mask;

	for(i=15; i>=0; i--)
	{
		mask = 1<<i;
		if((a&mask)==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");
}

void main()
{
	int a;

	printf("Enter value a : ");
        scanf("%d",&a);	
	
	for(int i=0; i<=10; i++)
	{
		a=a<<1*i;
		printf("a = %d\t\t",a);
		bit_pattern(a);
	}
}
