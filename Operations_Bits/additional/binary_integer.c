#include<stdio.h>

void main()
{
	char bit;
	int i,num=0;
	printf("Enter any bit pattern less than or equal to 16 bit : \n");
	for(i=0;i<=15;i++)
	{
		bit = getchar();
		if(bit == '0')
			num=num<<1;
		else if(bit == '1')
			num = (num<<1)+1;
		else
			break;
	}
	printf("Hexadecimal : %x\n",num);
	printf("Decimal : %d\n",num);
}
