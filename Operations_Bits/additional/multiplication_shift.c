#include<stdio.h>

void main()
{
	unsigned int num,n,err=0;
	printf("Enter the number and power of 2 : ");
	scanf("%u%u",&num,&n);
	mult(num,n,err);
}

mult(int num, int n, int err)
{
	unsigned int result=num;
	while(n>0)
	{
		num=num<<1;
		n--;
		if(num<result)
		{
			err = 1;
			break;
		}
		result=num;
	}
	if(err==1)
		printf("Overflow\n");
	else
		printf("Result = %u\n",result);
}
