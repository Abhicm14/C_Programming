#include <main.h>

void billing(int rooms, int total_days, int booked_room_type)
{
    int rate_per_day;

    switch (booked_room_type)
    {
        case 1: rate_per_day = 500; break;
        case 2: rate_per_day = 250; break;
        case 3: rate_per_day = 1000; break;
        case 4: rate_per_day = 500; break;
        default: rate_per_day = 0; break;   
    }

    int total_price = rooms * total_days * rate_per_day;

    printf("\n Billing Summary:\n");
    printf("Rooms Booked     : %d\n", rooms);
    printf("Stay Duration    : %d day(s)\n", total_days);
    printf("Rate per Day     : %d Rs\n", rate_per_day);
    printf("Total Price      : %d Rs\n", total_price);
}
