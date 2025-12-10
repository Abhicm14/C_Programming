#include<stdio.h>

void main()
{
	int x =0,y=1,z,num,count;

	printf("Enter the number : ");
	scanf("%d",&num);

	printf("%d\t",y);
	for(count = 1;count <= num;count++)
	{
		z=x+y;
		printf("%d\t",z);
		x=y;
		y=z;
	}
	printf("\n");
}
