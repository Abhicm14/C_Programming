#include<stdio.h>

int mul(int a, int b) 
{
    int result = 0;
    int positive = 1;

    if (b < 0) {
        b = -b;
        positive = -1;
    }

    for (int i = 0; i < b; i++) {
        result += a;
    }

    return result * positive;
}

int quo(int dividend, int divisor) 
{
    if (divisor == 0) 
    {
        printf("Error: Division by zero\n");
        return 0;
    }

    int quotient = 0;
    int sign = 1;

    if (dividend < 0) {
        dividend = -dividend;
        sign *= -1;
    }
    if (divisor < 0) {
        divisor = -divisor;
        sign *= -1;
    }

    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    return sign * quotient;
}

int rem(int dividend, int divisor) 
{
    if (divisor == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }

    int sign = (dividend < 0) ? -1 : 1;

    dividend = (dividend < 0) ? -dividend : dividend;
    divisor = (divisor < 0) ? -divisor : divisor;

    while (dividend >= divisor) {
        dividend -= divisor;
    }

    return sign * dividend;
}


void main()
{
	int a,b;

	printf("Enter the two integers : ");
	scanf("%d %d",&a,&b);

	printf("Multiplication of %d and %d is %d\n",a,b,mul(a,b));
	printf("Quotient of %d and %d is %d\n",a,b,quo(b,a));
	printf("Reminder of %d and %d is %d\n",a,b,rem(b,a));
}
