#include<stdio.h>

void main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);

	if(n%2 == 0)
	{
		goto even;
	}
	else
	{
		goto odd;
	}

	even:
		printf("Number is Even\n");
		goto end;
	odd:
		printf("Number is odd\n");
		goto end;
	end:
		printf("\n");
}
