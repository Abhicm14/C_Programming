#include<stdio.h>

int cubesum(int num);

void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	printf("%d\n",cubesum(num));
}

int cubesum(int num)
{
	int n,cube,d,sum;

	n=num;
	sum=0;
	while(n>0)
	{
		d=n%10;
		n/=10;
		cube = d*d*d;
		sum = sum+cube; 
	}
	return sum;
}
