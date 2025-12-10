// accept marks in five subjects and calculate the total percentage marks

#include<stdio.h>

void main()
{
	int kan,eng,mat,sci,soc,sum;
	float perc;

	printf("Enter the marks of kan : ");
	scanf("%d",&kan);
	printf("Enter the marks of eng : ");
        scanf("%d",&eng);
	printf("Enter the marks of mat : ");
        scanf("%d",&mat);
	printf("Enter the marks of sci : ");
        scanf("%d",&sci);
	printf("Enter the marks of soc : ");
        scanf("%d",&soc);
	sum = kan+eng+mat+sci+soc;
	perc = sum/5;
	printf("Percentage is %.2f\n",perc);
}
