#include<stdio.h>

int sum(int x,int y)             //Function Definition
{
	int s;
	s=x+y;
	return s;
}

void main()
{
	int a,b,s;

	printf("Enter the number a and b : ");
	scanf("%d %d",&a,&b);
	
	s=sum(a,b);           // Function Call
	printf("Sum of %d and %d is : %d\n",a,b,s); 
}
