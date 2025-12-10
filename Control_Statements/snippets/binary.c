#include<stdio.h>

void main() {
    int n, nsave, rem, i = 0;
    int bin[32]; 

    printf("Enter the number in decimal: ");
    scanf("%d", &n);

    nsave = n;

    if (n == 0) 
    {
        printf("Decimal number = %d\t Binary number = 0\n", nsave);
        return;
    }

    while (n > 0) 
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Decimal number = %d\t Binary number = ", nsave);
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%d", bin[j]);
    }
    printf("\n");
}
