#include <main.h>

int menu(void)
{
    int choice;

    printf("\n");
    printf(" ============================================\n");
    printf("|        Welcome to Bank Loan Calculator     |\n");
    printf(" ============================================\n");
    printf("| 1. Simple Interest Loan Calculation        |\n");
    printf("| 2. EMI Loan Calculation (Bank Method)      |\n");
    printf("| 3. Exit                                    |\n");
    printf(" ============================================\n");
    printf("\n");

    while(1)
    {
        printf("Choose an option: ");
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
    return choice;
}
