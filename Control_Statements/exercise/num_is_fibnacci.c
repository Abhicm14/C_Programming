#include <stdio.h>

void main()
{
    long x = 0, y = 1, z = 0;
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    if (n == 0 || n == 1) 
    {
        printf("%d is a Fibonacci number\n", n);
        return;
    }

    while (z < n) 
    {
        z = x + y;
        x = y;
        y = z;
    }

    if (z == n)
        printf("%d is a Fibonacci number\n", n);
    else
        printf("%d is not a Fibonacci number\n", n);
}

