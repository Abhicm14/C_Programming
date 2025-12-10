#include<stdio.h>

int func(void);

void main()
{
	printf("%d\n",func());
}

int func(void)
{
	int num,s=0;

	for(num =1; num<=25; num++)
	{
		if(num%2 !=0)
			s += num*num;
	}
	return s;
}
