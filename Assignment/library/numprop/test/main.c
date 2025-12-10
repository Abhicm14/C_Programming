#include<numprop.h>
#include<stdio.h>

void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    printf("Is Even %d: %d\n",num,is_Even(num));
    printf("Is Odd  %d: %d\n",num,is_Odd(num));
    printf("Is Prime %d: %d\n",num,is_prime(num));
}