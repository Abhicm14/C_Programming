/*
===============================================================================
Project Name : Insurance Policy Management System
File Name    : main.c
Author       : Abhishek C M
Date         : 17/09/2025
Description  :

    This project models a simple insurance policy management system that allows
    users to create, manage, and claim insurance policies. It calculates premium
    amounts, updates policy status, and provides claim-related functionalities.
    The program demonstrates a modular, menu-driven C design with separate
    functions for each operation. The project also highlights use of reusable
    header files, object files, and dynamic/static linking through makefiles.
===============================================================================
*/


#include <main.h>

// Global variables
int policy_active = 0;
int claim_status = 0;
int policy_type = 0;
int coverage_amount = 0;
int risk_factor = 0;
int premium = 0;

int main() 
{
    int choice;

    while (1) 
    {
        printf("\n=== Insurance Policy Management System ===\n");
        printf("1. Purchase Policy\n");
        printf("2. File Claim\n");
        printf("3. View Policy Status\n");
        printf("4. Exit\n");
        
        
        while(1)
        {
            printf("Enter your choice: ");
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

        if (choice == 1) 
        {
            if (policy_active == 1) 
            {
                printf("Policy already purchased!\n");
            }
            else 
            {
                purchase_policy();
                premium = calculate_premium(policy_type, coverage_amount, risk_factor);
                policy_active = 1;
                printf("Policy purchased successfully! Premium = %d\n", premium);
            }
        } 
        else if (choice == 2) 
        {
            if (policy_active == 0) 
            {
                printf("No active policy. Please purchase first.\n");
            } 
            else if (claim_status == 1) 
            {
                printf("Claim already filed!\n");
            }
            else 
            {
                file_claim();
            }
        } 
        else if (choice == 3) 
        {
            if (policy_active == 0) 
            {
                printf("No policy purchased.\n");
            } 
            else 
            {
                view_status();
            }
        } 
        else if (choice == 4) 
        {
            printf("Exiting program...\n");
            break;
        }
        else 
        {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
