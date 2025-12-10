#include<stdio.h>

long product_digit(long num); 
int pers(int num);

void main()
{
	long n,num;
	int x=0;
	printf("Enter the number : ");
	scanf("%ld",&num);
	n=num;

	do
	{
		printf("%ld->",num);
		num=product_digit(num);
		x=pers(num);
	}while(num>10);
	
	printf("%ld",num);
	
	printf("\npersistence of %ld is %d\n",n,x);

}

long product_digit(long num)
{
	int prod,dig=0;
	for(prod=1;num!=0;num/=10)
	{
		dig=num%10;
		prod*=dig;
	}

	return prod;
}

int pers(int num)
{
	static int count=0;
	
	return count++;
}
