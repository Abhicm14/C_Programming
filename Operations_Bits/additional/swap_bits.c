#include<stdio.h>

void bit_pattern(int a)
{
        int i,mask;

        for(i=15;i>=0;i--)
        {
                mask = 1<<i;
                if((a&mask)==0)
                        printf("0");
                else
                        printf("1");
        }
        printf("\n");
}

void main()
{
        int num,i;
        printf("Enter number in hexadecimal : ");
        scanf("%x",&num);
        printf("num = %x\t",num);
        bit_pattern(num);
        num=((num<<8)|(num>>8)&0x00FF);
        printf("After swapping,num = %x\n",num);
	bit_pattern(num);
}
