#include <stdio.h>
#include <math.h>

void main() 
{
    int x, n;
    double sum = 0;

    printf("Enter value of x and number of terms (n): ");
    scanf("%d %d", &x, &n);

    printf("Series: ");
    for(int i = 1; i <= n; i++) 
    {
        double term = 1.0 / pow(x, i);
        if(i % 2 == 0) 
	{
            sum -= term;
            printf(" - 1/%d^%d", x, i);
        } 
	else 
	{
            sum += term;
            if(i != 1) 
		    printf(" + ");
            printf("1/%d^%d", x, i);
        }
    }

    printf("\nSum = %.6lf\n", sum);
}

