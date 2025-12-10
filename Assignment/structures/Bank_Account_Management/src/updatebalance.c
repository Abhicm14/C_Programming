#include"bank_account.h"

void updatebalance(struct Bankaccount **accounts,int *count)
{
    int accountnumber;
    int index;
    int choice;
    float amount;

    printf("\n--- DEPOSIT / WITHDRAW ---\n");

    printf(" Enter Account Number : ");
    while(1)
    {
        if(valid_int(&accountnumber) || accountnumber > 1000)
        {
            for(int count1 =0; count1 < *count; count1++)
            {
                if((*accounts)[count1].accountNumber == accountnumber)
                {
                    index = count1;
                    break;
                }
                else if(count1 == *count)
                {
                    printf("\nAccount Number %d not found!",accountnumber);
                    break;
                }
                else
                {
                    continue;
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

    printf("\nAccount Found: %s | Current Account Balance %.2f\n",(*accounts)[index].holderName,(*accounts)[index].balance);

    printf("\nType 1 for Deposit, 2 for Withdraw : ");
    while(!valid_int(&choice))
    {
        printf("Invalid option! Please select 1 or 2.\n");
    }

    if(choice == 1)
    {
        printf("Enter Amount to Deposit : ");
        while (!valid_float(&amount))
        {
            printf("Invalid Input\n");
        }

        if(amount > (*accounts)[index].balance)
        {
           printf("Insufficient funds! Current balance is only %.2f\n.",(*accounts)[index].balance); 
        }
        else if(amount <= 0)
        {
            printf("Amount cannot be negative or zero.\n");
        }
        else
        {
            (*accounts)[index].balance += amount;
            printf("\nSuccess: %.2f Deposit. New Balance: %.2f\n",amount,(*accounts)[index].balance);
            
        }   
    }
    else if(choice == 2)
    {
        printf("Enter Amount to Withdraw : ");
        while (!valid_float(&amount))
        {
            printf("Invalid Input\n");
        }

        if(amount > (*accounts)[index].balance)
        {
           printf("Insufficient funds! Current balance is only %.2f\n.",(*accounts)[index].balance); 
        }
        else if(amount <= 0)
        {
            printf("Amount cannot be negative or zero.\n");
        }
        else
        {
            (*accounts)[index].balance -= amount;
            printf("\nSuccess: %.2f withdrawn. New Balance: %.2f\n",amount,(*accounts)[index].balance);
        }
    }
    else
    {
        printf("Invalid Choice\n");
    }
    
}