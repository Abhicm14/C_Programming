#include <main.h>

extern int avail1;
extern int avail2; 
extern int avail3; 
extern int avail4;
extern int booked_rooms;

void cancelation(void)
{
    int no_rooms;
    int choice;

    printf("-----------------------------------------------------------------\n");
    printf("|                 Room Cancellation Desk                         |\n");
    printf("-----------------------------------------------------------------\n");
    printf("| Sl.no| Room Type          | Price/day | Total | Available      |\n");
    printf("-----------------------------------------------------------------\n");
    printf("| 1.   | AC Single          | 500rs     |   4   |      %d        |\n", avail1);
    printf("| 2.   | Non AC Single      | 250rs     |   4   |      %d        |\n", avail2);
    printf("| 3.   | AC Double          | 1000rs    |   4   |      %d        |\n", avail3);
    printf("| 4.   | Non AC Double      | 500rs     |   4   |      %d        |\n", avail4);
    printf("-----------------------------------------------------------------\n\n");

    
    while(1)
    {
        printf("Select your room type to cancel (1-4): ");
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

    if (choice < 1 || choice > 4)
    {
        printf("Invalid choice. Please select a valid room type.\n");
        return;
    }

    while(1)
    {
        printf("Enter the number of rooms you want to cancel: ");
        no_rooms = valid_int();
        if(no_rooms == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    if (no_rooms <= 0)
    {
        printf("Invalid number of rooms.\n");
        return;
    }

    switch (choice)
    {
        case 1:
        {       
            if (avail1 + no_rooms <= 4)
            {
                avail1 += no_rooms;
                booked_rooms -= no_rooms;
                printf("%d AC Single Room(s) cancelled successfully.\n", no_rooms);
            }
            else
            {
                printf("Cancellation exceeds maximum room capacity.\n");
                break;
            }
        }

        case 2:
        {
            if (avail2 + no_rooms <= 4)
            {
                avail2 += no_rooms;
                booked_rooms -= no_rooms;
                printf("%d Non-AC Single Room(s) cancelled successfully.\n", no_rooms);
            }
            else
            {
                printf("Cancellation exceeds maximum room capacity.\n");
            }
            break;
        }

        case 3:
        {       
            if (avail3 + no_rooms <= 4)
            {
                avail3 += no_rooms;
                booked_rooms -= no_rooms;
                printf("%d AC Double Room(s) cancelled successfully.\n", no_rooms);
            }
            else
            {
                printf("Cancellation exceeds maximum room capacity.\n");
            }
            break;
        }

        case 4:
        {       
            if (avail4 + no_rooms <= 4)
            {
                avail4 += no_rooms;
                booked_rooms -= no_rooms;
                printf("%d Non-AC Double Room(s) cancelled successfully.\n", no_rooms);
            }
            else
            {
                printf("Cancellation exceeds maximum room capacity.\n");
            }
            break;
        }
    }
}
