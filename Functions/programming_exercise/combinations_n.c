#include<stdio.h>

long rcomb(int,int);

void main()
{
	int n,r;
	printf("Enter the n and r :");
	scanf("%d %d",&n,&r);
	
	printf("The combinations of %d and %d is %ld\n",n,r,rcomb(n,r));

}

long rcomb(int n,int r)
{
	if(r==0||n==r)
		return 1;
	else
		return rcomb(n-1,r)+rcomb(n-1,r-1);
}
