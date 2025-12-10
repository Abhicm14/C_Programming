#include<stdio.h>

int lcm(int a,int b);
int hcf(int a,int b);

int m,n;

void main()
{
	int x,y;
	printf("Enter two numbers : ");
	scanf("%d %d",&x,&y);
	m=x;
	n=y;
	printf("HCF of %d and %d is %d\n",x,y,hcf(x,y));
	printf("LCM of %d and %d is %d\n",x,y,lcm(x,y));
}

int hcf(int a,int b)
{
	if(a==b)
		return(b);
	else if(a<b)
		hcf(a,b-a);
	else
		hcf(a-b,b);
}

int lcm(int a,int b)
{
	if(a==b)
		return(b);
	else if(a<b)
		lcm(a+m,b);
	else
		lcm(a,b+n);
}
