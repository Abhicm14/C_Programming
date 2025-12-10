#include <main.h>

extern int avail1;
extern int avail2; 
extern int avail3;
extern int avail4;
extern int booked_rooms;
extern int booked_room_type;

void booking(void)
{
    int no_rooms;
    int choice;

    printf("-----------------------------------------------------------------\n");
    printf("|                 Welcome to Room Booking Desk                   |\n");
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
        printf("Select room type (1-4): ");
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
        printf("Invalid room type selected.\n");
        return;
    }

    while(1)
    {   
        printf("Enter the number of rooms you want to book: ");
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
            if (no_rooms <= avail1)
            {
                avail1 -= no_rooms;
                printf("%d AC Single Room(s) booked successfully.\n", no_rooms);
            }
            else
                printf("Only %d AC Single Room(s) available.\n", avail1);
            break;

        case 2:
            if (no_rooms <= avail2)
            {
                avail2 -= no_rooms;
                printf("%d Non-AC Single Room(s) booked successfully.\n", no_rooms);
            }
            else
                printf("Only %d Non-AC Single Room(s) available.\n", avail2);
            break;

        case 3:
            if (no_rooms <= avail3)
            {
                avail3 -= no_rooms;
                printf("%d AC Double Room(s) booked successfully.\n", no_rooms);
            }
            else
                printf("Only %d AC Double Room(s) available.\n", avail3);
            break;

        case 4:
            if (no_rooms <= avail4)
            {
                avail4 -= no_rooms;
                printf("%d Non-AC Double Room(s) booked successfully.\n", no_rooms);
            }
            else
                printf("Only %d Non-AC Double Room(s) available.\n", avail4);
            break;
    }

    booked_rooms = no_rooms;
    booked_room_type = choice;
}
