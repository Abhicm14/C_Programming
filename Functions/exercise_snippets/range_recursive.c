#include<stdio.h>

long long int power(int a, int n);


void main()
{
	int num,num2;
	long long int prod=1;

	printf("%d\n",sizeof(num));
	num2 = 8*sizeof(num);
	//printf("%d\n",num2);
	
	prod = power(2,num2);

	printf("%d\n",prod);
}

long long int power(int a,int n)
{
	if(n==0)
		return 1;
	else
		return a*power(a,n-1);
}
