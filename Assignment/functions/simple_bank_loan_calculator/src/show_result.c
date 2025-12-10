#include <main.h>

void show_result_simple(float amount, float rate, int years, float interest)
{
    float total_payment = amount + interest;

    printf("\n----------- Simple Interest Loan Summary -----------\n");
    printf("Loan Amount       : %.2f Rs\n", amount);
    printf("Interest Rate     : %.2f %%\n", rate);
    printf("Loan Term         : %d years\n", years);
    printf("Total Interest    : %.2f Rs\n", interest);
    printf("Total Payment     : %.2f Rs\n", total_payment);
    printf("---------------------------------------------------\n");
}

void show_result_emi(float amount, float rate, int years, float emi, float total_payment, float total_interest)
{
    printf("\n----------- EMI Loan Summary -----------\n");
    printf("Loan Amount       : %.2f Rs\n", amount);
    printf("Interest Rate     : %.2f %% (per annum)\n", rate);
    printf("Loan Term         : %d years (%d months)\n", years, years*12);
    printf("Monthly EMI       : %.2f Rs\n", emi);
    printf("Total Payment     : %.2f Rs\n", total_payment);
    printf("Total Interest    : %.2f Rs\n", total_interest);
    printf("---------------------------------------\n");
}
