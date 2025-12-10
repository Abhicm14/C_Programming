/*
===============================================================================
Project Name : Simple Bank Loan Calculator
File Name    : main.c
Author       : Abhishek C M
Date         : 10/09/2025
Description  :

    This project implements a simple loan calculator that computes monthly EMI,
    total interest, and repayment details based on user input. It demonstrates
    financial computation using C programming and modular design principles.
    Users can enter loan amount, interest rate, and tenure to obtain detailed
    loan results. The system illustrates use of separate modules for calculation,
    input validation, and output display, combined through a makefile build.
===============================================================================
*/


#include <main.h>

int main(void)
{
    int choice;

    while (1)
    {
        choice = menu();
        
        if (choice == 1 || choice == 2)
        {
            loan_input(choice);
        }
        else if (choice == 3)
        {
            printf("Exiting... Thank you!\n");
            break;
        }
        else
        {
            printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}
