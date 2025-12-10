/* File Name : parking_management_system.c
 * Date : 29/8/25
 * Author Name : Abhishek C M
 * Description : A command-line program for managing a parking lot. You can add a car, remove a car, see if there are free spots, and look at the lot's current data. 
 */

#include<stdio.h>
#include<stdlib.h>

static int slot1=0,slot2=0,slot3=0,slot4=0,slot5=0;
static int car1=0,car2=0,car3=0,car4=0,car5=0;

void menu(void)
{
    printf("\n===Welcome to the Parking Lot Space ===\n");
    printf("1. CHECK IN\n");
    printf("2. CHECK OUT\n");
    printf("3. CHECK AVAILABILITY\n");
    printf("4. DATA\n");
    printf("5. EXIT\n");
}

void CHECKIN(void)
{
    int slot;
    int car_no;

    if(slot1==1 && slot2==1 && slot3 ==1 && slot4 == 1 && slot5==1)
    {
        printf("Soory, Parking is FULL");
    }
    else
    {
        printf("\nAvailable Slots:\n");
        if(slot1 == 0) printf("1. Slot1\n");
        if(slot2 == 0) printf("2. Slot2\n");
        if(slot3 == 0) printf("3. Slot3\n");
        if(slot4 == 0) printf("4. Slot4\n");
        if(slot5 == 0) printf("5. Slot5\n");

        printf("Choose the Slot: ");
        scanf("%d",&slot);

        // while(1)
        // {
            printf("Enter your Car No(2000 to 2004): ");
            scanf("%d",&car_no);

            if(car_no >= 2000 || car_no <= 2004)
            {
                if(slot == 1 && slot1 == 0)
                {
                    slot1=1;
                    car1 = car_no;
                    printf("Car parked successfully in Slot1\n");
                }
                else if (slot == 2 && slot2 == 0)
                {
                    slot2 = 1;
                    car2 = car_no;
                    printf("Car parked successfully in Slot2\n");
                }
                else if (slot == 3 && slot3 == 0)
                {
                    slot3 = 1;
                    car3 = car_no;
                    printf("Car parked successfully in Slot3\n");
                }
                else if (slot == 4 && slot4 == 0)
                {
                    slot4 = 1;
                    car4 = car_no;
                    printf("Car parked successfully in Slot4\n");
                }
                else if (slot == 5 && slot5 == 0)
                {
                    slot5 = 1;
                    car5 = car_no;
                    printf("Car parked successfully in Slot5\n");
                }
                else
                {
                    printf("Slot is already occupied or invalid!\n");
                }
            }
            else
            {
                printf("Invalid Car Number\n");
            }
        // }
    }
}  

void CHECKOUT(void)
{
    int car_no;

    if(slot1 == 0 && slot2 == 0 && slot3 == 0 && slot4 == 0 && slot5 == 0)
    {
        printf("There is no cars in the parking slot to CHECK OUT\n");
    }
    else
    {
        printf("\nEnter your Car Number to Check Out: ");
        scanf("%d", &car_no); 
        
        if(car_no == car1)
        {
            slot1 = 0;
            car1 = 0;
            printf("Car %d has been checked out from Slot1\n", car_no);
        }
        else if (car_no == car2)
        {
            slot2 = 0;
            car2 = 0;
            printf("Car %d has been checked out from Slot2\n", car_no);
        }
        else if (car_no == car3)
        {
            slot3 = 0;
            car3 = 0;
            printf("Car %d has been checked out from Slot3\n", car_no);
        }
        else if (car_no == car4)
        {
            slot4 = 0;
            car4 = 0;
            printf("Car %d has been checked out from Slot4\n", car_no);
        }
        else if (car_no == car5)
        {
            slot5 = 0;
            car5 = 0;
            printf("Car %d has been checked out from Slot5\n", car_no);
        }
        else
        {
            printf("Car Number not found in any slot.\n");
        }
    }
}

void CHECK_AVAILABILITY()
{
    int available = 0;

    if (slot1 == 0) available++;
    if (slot2 == 0) available++;
    if (slot3 == 0) available++;
    if (slot4 == 0) available++;
    if (slot5 == 0) available++;

    printf("Available Slots: %d\n", available);
} 

void DATA(void)
{
    printf("\n==== Parking Lot Data ====\n");
    if (slot1 == 1) 
        printf("Slot1 - Occupied by Car %d\n", car1);
    else 
        printf("Slot1 - Empty\n");

    if (slot2 == 1) 
        printf("Slot2 - Occupied by Car %d\n", car2);
    else 
        printf("Slot2 - Empty\n");

    if (slot3 == 1) 
        printf("Slot3 - Occupied by Car %d\n", car3);
    else 
        printf("Slot3 - Empty\n");

    if (slot4 == 1) 
        printf("Slot4 - Occupied by Car %d\n", car4);
    else 
        printf("Slot4 - Empty\n");

    if (slot5 == 1) 
        printf("Slot5 - Occupied by Car %d\n", car5);
    else    
        printf("Slot5 - Empty\n");
}

void EXIT(void)
{
    printf("Thank you for using the Parking Management System.\n");
    exit(1);
}

void main()
{
    int choice;
    
    while(1)
    {
        menu();

        printf("Enter your Choice\n");
        if(scanf("%d",&choice)!=1)
		{
			printf("Wrong Choice!\n");
			while(getchar() == '\n');
			continue;
		}

        switch(choice)
        {
            case 1:
            {
                CHECKIN();
                break;
            }
            case 2:
            {
                CHECKOUT();
                break;
            }
            case 3:
            {
                CHECK_AVAILABILITY();
                break;
            }
            case 4:
            {
                DATA();
                break;
            }
            case 5:
            {
                EXIT();
                break;
            }
            default:
            {
                printf("Wrong Choice\n");
            }
        } 
    }
}