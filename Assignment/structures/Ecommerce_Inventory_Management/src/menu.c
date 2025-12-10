#include"ecommerce.h"

int menu()
{
    int choice;

    printf("\n");
    printf("======= INVENTORY MANAGEMENT SYSTEM =======\n");
    printf("1. Add New Product\n");
    printf("2. Sell Product (Update Quantity)\n");
    printf("3. Search Product by ID\n");
    printf("4. Display Total Inventory Value\n");
    printf("5. Show All Products\n");
    printf("0. Exit\n");
    printf("\n");

    printf("Enter your Choice : ");
    while (!valid_int(&choice))
    {
        printf("\nEnter your choice : ");
    }

    return choice;
}