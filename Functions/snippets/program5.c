#include<stdio.h>

void find(int x);

void main()
{
	int num;

	printf("Enter the number : ");
        scanf("%d",&num);
	
	find(num);	
}

void find(int x)
{
	if(x%2 == 0)
		printf("%d is Even\n",x);
	else
		printf("%d is Odd\n",x);

}
