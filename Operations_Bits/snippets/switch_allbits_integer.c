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
        int a,i,mask=0;
        printf("Enter the value a : ");
        scanf("%x",&a);
        printf("%x\t",a);
        bit_pattern(a);
        for(i=0;i<=15;i++)
	{
		mask=1<<i;
		a=a|mask;
	}
        printf("%d\t",a);
	bit_pattern(a);
}
