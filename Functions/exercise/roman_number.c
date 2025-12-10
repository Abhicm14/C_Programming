#include<stdio.h>

int roman(int,int,char);

void main()
{
	int num;

	printf("Enter a number : ");
	scanf("%d",&num);
	if(num>=1000)
		num=roman(num,1000,'M');
	if(num>=500)
		num=roman(num,500,'D');
	if(num>=100)
		num=roman(num,100,'C');
	if(num>=50)
		num=roman(num,50,'L');
	if(num>=10)
		num=roman(num,10,'X');
	if(num>=5)
		num=roman(num,5,'V');
	if(num>=1)
		num=roman(num,1,'I');
	printf("\n");
}
int roman(int n,int k,char c)
{
	if(n==9)
	{
		printf("IX");
		return 0;
	}
	if(n==4)
	{
		printf("IV");
		return 0;
	}
	while(n>=k)
	{
		printf("%c",c);
		n=n-k;
	}
	return n;
}
