#include <main.h>

int total_cost(int choice, int quantity)
{
    switch (choice)
    {
        case 1: 
        case 2:
            return 40 * quantity;

        case 3:
        case 4:
            return 50 * quantity;

        case 5:
            return 35 * quantity;

        case 6:
            return 30 * quantity;

        case 7:
        case 8:
            return 20 * quantity;

        case 9:
            return 25 * quantity;

        case 10:
        case 12:
        case 14:
            return 15 * quantity;

        case 11:
            return 17 * quantity;

        case 13:
        case 15:
            return 12 * quantity;

        default:
            return 0;  
    }
}
