#include<main.h>

int menu(void)
{
    int choice;

    printf("---------------------------------\n");
    printf("|   Hospital Management System   |\n");
    printf("----------------------------------\n");
    printf("1. Admit Patient\n");
    printf("2. Discharge Patient\n");
    printf("3. View Hospital Record\n");
    printf("4. Calculate Bill\n");
    printf("5. Exit\n");


    while(1)
    {
        printf("Enter Your Choice : ");
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