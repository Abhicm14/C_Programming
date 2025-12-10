#include<main.h>

int menu(void)
{
    int choice;

    printf("--- Flight Booking System ---\n");
    
    printf("1. Search Flights\n");
    printf("2. Book Ticket\n");
    printf("3. Cancel Booking\n");
    printf("4. Exit\n");
    
    while(1)
    {
        printf("Enter your choice :  ");
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