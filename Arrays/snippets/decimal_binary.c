#include<stdio.h>

void main()
{
	int num,rem,arr[15],i,j;
	
	printf("Enter a decimal number : ");
	scanf("%d",&num);

	i=0;

	while(num>0)
	{
		arr[i] = num%2;
		num /= 2;
		i++;
	}
	printf("Binary number is : ");
	for(j=i-1; j>=0; j--)
		printf("%d",arr[j]);
	printf("\n");
}
