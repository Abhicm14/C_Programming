/*
Project Name : E-Commerce Platform
File Name    : main.c
Author Name  : Abhishek C M
Date         : 11/09/2025
Description  : 

	This project simulates a basic e-commerce shopping system using modular C programming. It allows users to browse products, calculate discounts, view different categories 
	(electronics, fashion, home appliances), and place orders. The system handles subtotal and billing calculations, maintains order status, and provides a user-friendly 
	menu interface. It is structured into multiple source files for maintainability, and supports both static and dynamic linking. This project demonstrates 
	real-world application of modular programming, file structuring, and the use of makefiles for building large-scale C applications.
*/

#include<main.h>

int last_quantity = 0;
int last_product_id = 0;
float last_final_amount = 0.0;

void main(void)
{
	int choice;
	int choice1;
	
	while(1)
	{
		choice = menu();

		switch(choice)
		{
			case 1:
			{
				choice1 = browse_products();
				break;
			}
			case 2:
			{
				place_order(choice1);
				break;
			}
			case 3:
			{
				view_order_status(last_product_id,last_quantity,last_final_amount);
				break;
			}
			case 4:
			{
				printf("Thank you for shopping with us!\n");
				exit(0);
				break;
			}
			default:
			{
				printf("Wrong Choice/Invalid Input\n");
			}
		}
	}
}
