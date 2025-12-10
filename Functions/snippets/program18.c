#include<stdio.h>
#include<math.h>

int isprime(int n);

void main()
{
        int i;
        for(i=1; i<=500; i++)
		if(isprime(i))
                	printf("%d ",i);

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
