#include<stdio.h>

void main()
{
	int num,base,result;
	char choice;
	printf("Enter 'b' for binary and 'o' for octal : ");
	scanf("%c",&choice);
	printf("Enter the number : ");
	scanf("%d",&num);

	if(choice == 'b')
		base=2;
	else
		base=8;
	result = func(num,base);
	printf("Decimal number is %d\n",result);
}
int func(int n, int base)
{
	int rem,d,j=1,dec=0;
	while(n>0)
	{
		rem = n%10;
		d=rem*j;
		dec+=d;
		j*=base;
		n/=10;
	}
	return dec;
}
