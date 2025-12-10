#include<stdio.h>

void main()
{
	int num,i,mask;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	printf("Two's complement is : %d\n",~num+1);

	for(i=0; i<=31; i++)
	{
		mask = 1<<i;
		if((num & mask)!=0)
			break;
	}
	for(i=i+1;i<=31;i++)
	{
		mask = 1<<i;
		num=num^mask;
	}
	printf("Two's Complement is : %d\n",num);
}
