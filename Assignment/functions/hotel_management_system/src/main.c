/*
===============================================================================
Project Name : Hotel Management System
File Name    : main.c
Author       : Abhishek C M
Date         : 15/09/2025
Description  :

	The Hotel Management System allows users to manage room bookings, cancellations,
	and billing operations. It supports date validation and duration calculation
	between check-in and check-out dates. Through a user-friendly menu, the system
	automates essential hotel operations and provides accurate billing based on
	stay duration. The modular structure and makefile-based build process
	demonstrate strong programming and project organization practices in C.
===============================================================================
*/


#include <main.h>

int avail1 = 4;
int avail2 = 4;
int avail3 = 4;
int avail4 = 4;   // global availability
int booked_rooms = 0;
int booked_room_type = 0;

int main(void)
{
	int choice;
	int d1=0;
	int d2=0;
	int m1=0;
	int m2=0;
	int y1=0;
	int y2=0;  // initialized to avoid garbage
	int rooms;
	int total_days;

	while (1)
	{
		choice = menu();

		switch (choice)
		{
			case 1:
				booking();
				break;

			case 2:
				cancelation();
				break;

			case 3:
				printf("Enter the Check IN Date (dd/mm/yyyy) : ");
				scanf("%d/%d/%d", &d1, &m1, &y1);
				if (check_valid_date(d1, m1, y1) == 1)
				{
					printf("You have Successfully Checked into your room\n");
					printf("Thank you! Have a Nice Day\n");
				}
				break;

			case 4:
				printf("Enter the Check OUT Date (dd/mm/yyyy) : ");
				scanf("%d/%d/%d", &d2, &m2, &y2);
				if (check_valid_date(d2, m2, y2) == 1)
				{
					printf("You have Successfully Checked Out\n");
					total_days = difference_two_dates(d1, d2, m1, m2, y1, y2);
					rooms = booked_rooms;   
					billing(rooms, total_days, booked_room_type);
					printf("Thank you! Please Come Again\n");
				}
				break;

			case 5:
				exit(0);
				break;

			default:
				printf("Wrong Choice/Invalid Input\n");
		}
	}
}
