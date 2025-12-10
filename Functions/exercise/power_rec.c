#include<stdio.h>

float power(float a, int n);

void main()
{
	float a,p;
	int n;

	printf("Enter the  a and n value : ");
	scanf("%f%d",&a,&n); 

	p=power(a,n);

	printf("%f power of %d is %f\n",a,n,p);
}

float power(float a,int n)
{
	if(n==0)
		return 1;
	else
		return (a* power(a,n-1));
}
