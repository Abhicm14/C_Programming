#include <main.h>

/*
 * EMI Formula:
 * EMI = P × r × (1+r)^n / ((1+r)^n – 1)
 * Where:
 * P = Principal
 * r = monthly interest rate (annual / 12 / 100)
 * n = loan term in months
 */

float calculate_emi(float amount, float rate, int years)
{
    float monthly_rate = rate / (12 * 100);   // monthly interest rate
    int n = years * 12;                       // total months

    float emi = (amount * monthly_rate * pow(1 + monthly_rate, n)) /(pow(1 + monthly_rate, n) - 1);

    return emi;
}
