#include<stdio.h>
#include<math.h>

int isprime(int n);

void main()
{
	int i=3,j;
	while(i<500)
	{
		j=i;
		i=i+2;
		if(isprime(j) && isprime(i))
			printf("%5d %5d\n",j,i);
	}
}

int isprime(int n)
{
	int i,flag=1;
	for(i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			flag = 0;
			break;
		}
	}
	return (flag);
}

