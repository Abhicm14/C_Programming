#include<main.h>

void purchase_policy()
{
    while(1)
    {
        printf("Enter Policy Type(1=Health, 2=Life, 3=Vehicle): ");
        policy_type = valid_int();
        if(policy_type == -1)
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
        printf("Enter Coverage Amount : ");
        coverage_amount = valid_int();
        if(coverage_amount == -1)
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
        printf("Enter Risk Factor (1=LOW, 2=Medium, 3=High) : ");
        risk_factor = valid_int();
        if(risk_factor == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    claim_status = 0;
}