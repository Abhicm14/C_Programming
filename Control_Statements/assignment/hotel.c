/*File Name : restaurant_ordering_system.c
Date : 21/07/2025
Author Name : Abhishek.C.M
Description : Implement a restaurant ordering system where users can place orders from a menu. The system
should calculate the total bill based on the items ordered. 
*/

#include <stdio.h>

void main() {
	int bill1 = 0, bill2 = 0, bill3 = 0, bill4 = 0, bill5 = 0, bill6 = 0;
	int choice, quantity = 1, total_bill = 0;
	char more, ch;

	while (1) {
		// Display the menu
		printf("\n");
		printf("\n");
		printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("|             \"Mirchy Spice Garden\"              | \n");
		printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\n");
		printf(" ------------------------------------------------- \n");
		printf("|Sl.No  |       Items                  |    Price |\n");
		printf(" ------------------------------------------------- \n");
		printf("|  1.   |      Idli - Vada             |    50rs  |\n");
		printf("|  2.   |      Masala Dosa             |    60rs  |\n");
		printf("|  3.   |      Bisi Bele Bath          |    70rs  |\n");
		printf("|  4.   |      Puliyogare              |    60rs  |\n");
		printf("|  5.   |      Vangibath               |    70rs  |\n");
		printf("|  6.   |      Jolada Roti Meal        |    100rs |\n");
		printf("|  7.   |      Chappati Meal           |    100rs |\n");
		printf("|  8.   |      Akki Roti               |    60rs  |\n");
		printf("|  9.   |      Chitranna/Lemone Rice   |    60rs  |\n");
		printf("| 10.   |      White Rice-Sambar       |    40rs  |\n");
		printf("| 11.   |      Pani Puri               |    30rs  |\n");
		printf("| 12.   |      Masala Puri             |    40rs  |\n");
		printf("| 13.   |      Maddur vada             |    40rs  |\n");
		printf("| 14.   |      Gobi Manchuri           |    50rs  |\n");
		printf("-------------------------------------------------- \n");
		printf("\n");

		// Validate user's choice
		while (1) {
			printf("Please Order The Food: ");
			if (scanf("%d", &choice) != 1) {
				printf("Invalid Choice\n");
				while (getchar() != '\n');
				continue;
			}
			if (choice < 1 || choice > 14) {
				printf("Invalid Choice\n");
				while (getchar() != '\n');
				continue;
			}
			break;
		}

		// Validate the quantity
		while (1) {
			printf(" Please Enter the Required Quantity: ");
			if (scanf("%d", &quantity) != 1) {
				printf("Invalid Quantity\n");
				while (getchar() != '\n');
				continue;
			}
			if (quantity <= 0) {
				printf("Invalid Quantity\n");
				while (getchar() != '\n');
				continue;
			}
			break;
		}

		// Ask the user if they want to order more
		while (1) {
			printf("If you want to order more (y/n): ");
			if (scanf(" %c", &more) != 1) {
				printf("Invalid Input\n");
				// Clear the input buffer
				while (getchar() != '\n');
				continue;
			}
			// Check if the input is 'y' or 'n'
			if (more == 'y' || more == 'n') {
				break;
			}
			// If the input is neither 'y' nor 'n', print an error message and continue
			printf("Invalid Input. Please enter 'y' or 'n': ");
			// Clear the input buffer
			while (getchar() != '\n');
			continue;
		}

		// Calculate the bill based on the user's order
		switch (choice) {
			case 1:
			case 14:
				bill1 += quantity * 50;
				break;
			case 2:
			case 4:
			case 8:
			case 9:
				bill2 += quantity * 60;
				break;
			case 3:
			case 5:
				bill3 += quantity * 70;
				break;
			case 6:
			case 7:
				bill4 += quantity * 100;
				break;
			case 10:
			case 12:
			case 13:
				bill5 += quantity * 40;
				break;
			case 11:
				bill6 += quantity * 30;
				break;
			default:
				printf("Choice is not in the Menu\n");
				continue;
		}

		// Check if the user wants to order more
		if (more == 'y') {
			continue;
		} else {
			// Calculate the total bill
			total_bill = bill1 + bill2 + bill3 + bill4 + bill5 + bill6;
			printf("\n");
			printf(" Total Bill = %d \n", total_bill);
			break;
		}
	}
}
