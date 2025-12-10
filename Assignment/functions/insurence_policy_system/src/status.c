#include <main.h>

void view_status() 
{
    printf("\n--- Policy Status ---\n");
    printf("Policy Type: %d\n", policy_type);
    printf("Coverage Amount: %d\n", coverage_amount);
    printf("Risk Factor: %d\n", risk_factor);
    printf("Premium: %d\n", premium);

    if (claim_status == 0) 
    {
        printf("Claim Status: No claim filed\n");
    } else {
        printf("Claim Status: Claim filed\n");
    }
}
