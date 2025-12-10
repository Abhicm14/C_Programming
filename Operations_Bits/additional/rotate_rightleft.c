#include<stdio.h>

void bit_pattern(int a);
int rotate_left(int num,int a);
int rotate_right(int num,int a);

void main()
{
	int num,n,i,bit;
	printf("Enter number in hexadecimal : ");
	scanf("%x",&num);
	bit_pattern(num);
	printf("Enter number of positions to be rotated : ");
	scanf("%d",&n);
	n=n%16;
	num=rotate_right(num,n);
	printf("Number after right rotation is : %x\n",num);
	bit_pattern(num);
	num=rotate_left(num,n);
	printf("Number after left rotation is : %x\n",num);
	bit_pattern(num);
}

int rotate_right(int num,int n)
{
	int i,lsbit;
	for(i=1;i<=n;i++)
	{
		lsbit=num&1?1:0;
		num=num>>1;
		if(lsbit==0)
			num=num&~(1<<15);
		else
			num=num|(1<<15);
	}
	return num;
}

int rotate_left(int num,int n)
{
        int i,msbit;
        for(i=1;i<=n;i++)
        {
                msbit=num&(1<<15)?1:0;
                num=num<<1;
                if(msbit==0)
                        num=num&~1;
                else
                        num=num|1;
        }
        return num;
}

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
