#include<stdio.h>

void pfact(int num);
void rpfact(int n);

void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	pfact(num);printf("\n");
	rpfact(num);printf("\n");
}

void pfact(int num)
{
	int i;
	for(i=2;num!=1;i++)
	{
		while(num%i==0)
		{
			printf("%d ",i);
			num=num/i;
		}
	}
}

void rpfact(int num)
{
	static int i=2;
	if(num==1)
		return;
	else
	{
		while(num%i==0)
		{
			printf("%d ",i);
			num=num/i;
		}
		i++;
		rpfact(num);
	}
}
