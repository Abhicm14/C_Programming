#include"bank_account.h"

void transfermoney(struct Bankaccount **accounts,int *count)
{
    int srcaccno;
    int destaccno;
    int source;
    int destination;
    float amount;

    printf("\n--- TRANSFER MONEY ---\n");
    printf("Enter Source Account Number : ");
    while(1)
    {
        if(valid_int(&srcaccno) || srcaccno > 1000)
        {
            for(int count1 =0; count1 < *count; count1++)
            {
                if((*accounts)[count1].accountNumber == srcaccno)
                {
                    source = count1;
                    break;
                }
                else
                {
                    printf("Account Number %d not found!\n",srcaccno);
                    return;
                }
            }
            break;
        }
        else
        {
            printf("Invalid! Please enter a valid Number greater than 1000\n");
            continue;
        }
    }

    printf("Account Found: %s | Current Account Balance %.2f\n",(*accounts)[source].holderName,(*accounts)[source].balance);

    printf("Enter Destination Account Number : ");
    while(1)
    {
        if(valid_int(&destaccno) || destaccno > 1000)
        {
            for(int count1 =0; count1 < *count; count1++)
            {
                if((*accounts)[count1].accountNumber == destaccno)
                {
                    destination = count1;
                    break;
                }
                else
                {
                    printf("Account Number %d not found!\n",destaccno);
                    return;
                }
            }
            break;
        }
        else
        {
            printf("Invalid! Please enter a valid Number greater than 1000\n");
            continue;
        }
    }
    
    printf("Account Found: %s | Current Account Balance %.2f\n",(*accounts)[destination].holderName,(*accounts)[destination].balance);

    if(srcaccno == destaccno)
    {
        printf("Money Cannot be transfered to the same account\n");
        printf("Please use the Deposit option\n");
    }
    else
    {
        printf("Enter Amount to Transfer : ");
        while (!valid_float(&amount)|| amount < 0)
        {
            printf("Invalid Input! Amount can not be Negative/Zero \n");
        }

        printf("Processing transfer...\n");

        (*accounts)[source].balance -= amount;
        (*accounts)[destination].balance += amount;

        printf("\nSuccess: Transfer complete!\n");


        printf("New Balance (Source - %s) : %.2f\n",(*accounts)[source].holderName,(*accounts)[source].balance);
        printf("New Balance (Source - %s) : %.2f\n",(*accounts)[destination].holderName,(*accounts)[destination].balance);
    }
    return;
}