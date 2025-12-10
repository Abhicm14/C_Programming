#include <main.h>

void loan_input(int choice)
{
    float amount;
    float rate;
    int years;

    while(1)
    {
        printf("Enter Loan Amount (Rs): ");
        amount = valid_int();
        if(amount == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    while(1)
    {
        printf("Enter Annual Interest Rate (%%): ");
        rate = valid_int();
        if(rate == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    while(1)
    {
        printf("Enter Loan Term (years): ");
        years = valid_int();
        if(years == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    if (choice == 1)
    {
        float interest = calculate_interest(amount, rate, years);
        show_result_simple(amount, rate, years, interest);
    }
    else if (choice == 2)
    {
        float emi = calculate_emi(amount, rate, years);
        int n = years * 12;
        float total_payment = emi * n;
        float total_interest = total_payment - amount;
        show_result_emi(amount, rate, years, emi, total_payment, total_interest);
    }
}
