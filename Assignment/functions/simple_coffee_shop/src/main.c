/*
===============================================================================
Project Name : Simple Coffee Shop Billing System
File Name    : main.c
Author       : Abhishek C M
Date         : 10/09/2025
Description  :

	This project simulates a small coffee shop billing system that allows users
	to select beverages from a menu and calculates the total cost of the order.
	It demonstrates modular C programming with clear separation between menu
	handling, cost calculation, and main execution logic. The project compiles
	into both static and dynamic binaries using makefiles, showing practical use
	of modular build automation and structured coding.
===============================================================================
*/


#include <main.h>

void main(void)
{
	int choice = 0; 
	int quantity = 0; 
	int amount = 0;

	while(1)
	{
		menu();

		while (1)
		{
			printf("Order your Coffee from the menu (1–15): ");
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
			

		if (choice >= 1 && choice <= 15)
		{
			while(1)
			{
				printf("Enter the number of quantity : ");
				quantity = valid_int();
				if(quantity == -1)
				{
					continue;
				}
				else
				{
					break;
				}
			}

			if (quantity > 0)
			{
				amount = total_cost(choice, quantity);

				if (amount > 0)
				{
					printf("\nThank you! Order is successful\n");
					printf("\nTotal amount = %d Rs\n", amount);
				}
			}
			else
			{
				printf("Invalid quantity! Must be greater than 0.\n");
			}
		}
		else
		{
			printf("Invalid Choice! Please enter between 1–15.\n");
		}
		printf("\n");
	}
}
