#include<stdio.h>
#include<recursion.h>

void main()
{
    int num=0;

    printf("Enter Number : ");
    scanf("%d",&num);

    printf("Factorial of %d : %ld\n",num,factorial(num));
    
    printf("Power of 2^%d : %.2f\n",num,power(2,num));

    printf("Fabinooci Series : \n");
    
    for(int count=0; count<num; count++)
		printf("%d ",fibonacci(count));
	printf("\n");
}