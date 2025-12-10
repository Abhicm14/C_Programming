#include<stdio.h>
#include<math.h>

int isprime(int n);

void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);

	if(isprime(num))
		printf("Number is prime\n");
	else
		printf("Number is not prime\n");

}

int isprime(int n)
{
	int i,flag=1;
	for(i=2; i<=sqrt(n); i++)
	{
		if(n%i == 0)
		{
			flag=0;
			break;
		}
	}
	return(flag);
}
