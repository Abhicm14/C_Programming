#include<stdio.h>

void main()
{
	int i=1,num,sum=0;
	float avg;

	printf("Enter the 10 positive numbers\n");
	while(i<=10)
	{
		printf("Enter the %d number : ",i);
		scanf("%d",&num);
		if(num<0)
		{
			printf("Enter the positive numbers only \n");
			continue;
		}
		sum += num;
		i++;
	}
	avg = sum/10.0;

	printf("The sum of the 10 positive numbers is %d\n",sum);
	printf("The avrage of the 10 numbers is %.2f\n",avg);
}

		

