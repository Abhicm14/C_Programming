#include<main.h>

int menu(void)
{
    int choice;

    printf(" ----------------------------------------\n");
    printf("|            Insurence Policy Desk        |\n");
    printf(" -----------------------------------------\n");
    printf("\n");

    printf("1. Purchase Policy \n");
    printf("2. File Claim \n");
    printf("3. View Policy Status \n");
    printf("4. Exit \n");
        
    while(1)
    {
        printf("Select Option : ");
        choice = valid_int();
        if(choice == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    return 0;
}