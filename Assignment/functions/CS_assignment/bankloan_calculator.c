/*
* File name : bankloan_calculator.c
* Date : 28/8/2025
* Author name : Abhishek C M 
* Description : Written a program that simulates a simple bank loan calculator, calculating the total interest paid based on loan amount, interest rate, and loan term.
*/

#include<stdio.h>

long double simple_interest(double amount, double interest, double term);

void main()
{
    double loanamount = 0;
    int annualRate;
    int termYears;
    long double total = 0;

    printf("Enter the loan amount : ");
    scanf("%lf", &loanamount);

    printf("Enter the annual interest rate  : ");
    scanf("%lf", &annualRate);

    printf("Enter loan term (Years): ");
    scanf("%lf", &termYears);

    total = simple_interest(loanamount, annualRate, termYears);

    printf("Total Interest paid over %.1f years : %.2Lf\n", termYears, total);
}

long double simple_interest(double amount, double interest, double term)
{
    return (amount * interest * term) / 100.0;
}
