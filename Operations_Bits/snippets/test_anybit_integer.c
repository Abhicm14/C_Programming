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
        int a,mask,bit,bitposition;
        printf("Enter an integer : ");
        scanf("%x",&a);
	printf("Enter the bit position : ");
	scanf("%x",&bitposition);
	mask=1<<bitposition;
        printf("a = %x\t",a);
        bit_pattern(a);
        if((a&mask) == 0)
                bit=0;
        else
                bit=1;
        printf("The bit at position %x is %x\n",bitposition,bit);
}
