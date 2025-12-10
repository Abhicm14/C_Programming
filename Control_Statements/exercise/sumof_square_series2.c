#include <stdio.h>

void main() 
{
    int i, num, x;
    long int term, sum = 0;

    printf("Enter the value of x and number of terms (n): ");
    scanf("%d %d", &x, &num);

    term = x;

    printf("Series: ");
    for(i = 1; i <= num; i++) 
    {
        int sign_index = (i - 1) % 3;  

        if(sign_index == 2) 
	{
            sum -= term;
            printf(" - %ld", term);
	}
	else 
	{
            sum += term;
            
	    if(i == 1) 
		    printf("%ld", term);
            else
		    printf(" + %ld", term);

        }

        term *= x;
    }

    printf("\nSum = %ld\n", sum);
}
