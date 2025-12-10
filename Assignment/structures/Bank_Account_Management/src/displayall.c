#include"bank_account.h"

void displayall(struct Bankaccount **accounts,int *count)
{
    if(*count == 0)
    {
        printf("Zero Accounts\n");
        return;
    }

    printf("\n--- ALL CUSTOMER DETAILS ---\n");
    printf("--------------------------------------------------\n");
    printf("Acc Number   | Holder Name          | Balance\n");
    printf("--------------------------------------------------\n");
    for(int count1 =0; count1 < *count; count1++)
    {
        printf("%d         | %s         | %.2f\n",(*accounts)[count1].accountNumber,(*accounts)[count1].holderName,(*accounts)[count1].balance);
    }
    printf("--------------------------------------------------\n");

}