#include<stdio.h>

void main()
{
	float a;
	int n;
	float power(float a,int n);
	printf("Enter base : ");
	scanf("%f",&a);
	printf("Enter exponent : ");
	scanf("%d",&n);
	printf("%f raised to power %d is %f\n",a,n,power(a,n));
}
float power(float a,int n)
{
	int i;
	float p=1;
	if(n==0)
		return 1;
	else
	{
		for(i=1;i<=abs(n); i++)
			p=p*a;
		if(n>0)
			return p;
		else
			return 1/p;
	}
}
