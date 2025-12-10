#include<bank_account.h>

void main()
{
    struct Bankaccount *accounts = NULL;
    int totalaccounts = 0;

    int choice;

    while(1)
    {
        printf("\n");
        choice = menu();

        switch(choice)
        {
            case 1:
            {
                openaccount(&accounts,&totalaccounts);
                break;
            }
            case 2:
            {
                updatebalance(&accounts,&totalaccounts);
                break;
            }
            case 3:
            {
                transfermoney(&accounts,&totalaccounts);
                break;
            }
            case 4:
            {
                displayall(&accounts,&totalaccounts);
                break;
            }
            case 5:
            {
                freeaccounts(&accounts,&totalaccounts);
                printf("\n >> Exiting program. Goodbye!\n");
                exit(0);
            }
            default :
            {
                printf("Invalid choice! Please enter a number between 1 and 5.\n");

            }
        }
    }
}