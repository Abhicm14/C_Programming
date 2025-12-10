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
        int a,bit,mask=0x1;
        printf("Enter an integer : ");
        scanf("%d",&a);
        printf("a = %x\t",a);
        bit_pattern(a);
        if((a&mask) == 0)
                printf("%d is Even Number\n",a);
        else
                printf("%d is Odd Number\n",a);
        

}
