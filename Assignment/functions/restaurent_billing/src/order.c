#include <main.h>

int order(int choice)
{
    int bill = 0;
    int quantity = 0;

    
    while(1)
    {
        printf("Enter the Quantity : ");
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

    if (quantity <= 0)
    {
        printf("Invalid quantity! Must be greater than 0.\n");
        return 0;
    }

    switch (choice)
    {
        case 11:
            bill = total_bill(30, quantity);
            break;

        case 10:
        case 12:
        case 13:
            bill = total_bill(40, quantity);
            break;

        case 1:
        case 14:
            bill = total_bill(50, quantity);
            break;

        case 2:
        case 4:
        case 8:
        case 9:
            bill = total_bill(60, quantity);
            break;

        case 3:
        case 5:
            bill = total_bill(70, quantity);
            break;

        case 6:
        case 7:
            bill = total_bill(100, quantity);
            break;

        default:
            printf("Invalid menu choice!\n");
            return 0;
    }

    return bill;
}
