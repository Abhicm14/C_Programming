#include<stdio.h>

void main()
{
	int i,x,y,power =1;

	printf("Enter the x and y : ");
	scanf("%d %d",&x,&y);

	if(y>0 && x>0)
	{
		for(i=1;i<=y;i++)
		{
			power *= x;
		}
		printf("The %d raised to the power %d is %d",x,y,power);
	}
	else
	{
		printf("Cant do the operation\n");
	}
	printf("\n");
}
