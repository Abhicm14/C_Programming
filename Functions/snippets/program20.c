#include<stdio.h>

long int binary(long int num);

void main()
{
	long int num;
	printf("Enter the decimal number : ");
	scanf("%ld",&num);

	printf("Decimal = %ld, Binary = %ld\n",num,binary(num));

}

long binary(long int num)
{
	long rem,a=1,bin=0;
	while(num>0)
	{
		rem = num%2;
		bin = bin+rem*a;
		num/=2;
		a*=10;
	}
	return bin;
}
