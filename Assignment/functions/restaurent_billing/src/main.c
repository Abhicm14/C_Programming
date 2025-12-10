/*
===============================================================================
Project Name : Restaurant Billing System
File Name    : main.c
Author       : Abhishek C M
Date         : 17/09/2025
Description  :

    The Restaurant Billing System is a console-based program that allows users
    to place orders, calculate total bills, and generate receipts dynamically.
    It uses modular C design to separate menu handling, order processing, and
    billing functions. The system demonstrates makefile-driven compilation into
    static and dynamic executables. Its structured logic provides a foundation
    for real-world POS (Point of Sale) systems in restaurants or cafes.
===============================================================================
*/


#include <main.h>

int main(void)
{
    int choice;
    int bill = 0;

    menu();

    while(1)
    {
        printf("Choose the food (1–14, 0 to Exit): ");
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

    if (choice >= 1 && choice <= 14)
    {
        bill += order(choice);
        printf("Total Bill of the Order is %d Rs\n", bill);
    }
    else if (choice == 0)
    {
        printf("Exiting... Thank you for visiting!\n");
    }
    else
    {
        printf("Invalid Choice! Please enter between 1–14.\n");
    }

    return 0;
}
