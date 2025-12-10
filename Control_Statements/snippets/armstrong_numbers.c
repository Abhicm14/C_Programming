#include<stdio.h>

void main()
{
	int num,n,cube = 0,d,sum = 0;

	printf("Armstrong numbers are : \n");

	for(num = 100; num <=999; num++)
	{
		n = num;
		sum = 0;
		while(n>0)
		{
			d=n%10;
			n/=10;
			cube = d*d*d;
			sum +=cube;
		}
		if(num == sum)
			printf("%d\n",num);
		
	}

}
