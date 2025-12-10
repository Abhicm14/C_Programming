#include"bank_account.h"

int menu()
{
    int choice;

    printf("=== BANK MANAGEMENT SYSTEM ===\n");
    printf("1. Open New Account\n");
    printf("2. Deposit/Withdraw\n");
    printf("3. Transfer Money\n");
    printf("4. Display All Accounts\n");
    printf("5. Exit\n");

    printf("\nEnter Choice : ");
    while(!valid_int(&choice))
    {
        printf("Enter Choice : ");
    }

    return choice;
}