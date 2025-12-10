#include"ecommerce.h"

void main()
{
    struct product *products = NULL;
    int totalproducts = 0;
    float totalsum = 0;

    int productid;
    char name[MAX_NAME];

    int choice;

    while(1)
    {
        choice = menu();

        switch(choice)
        {
            case 1:
            {
                addnewproduct(&products, &totalproducts);
                break;
            }
            case 2:
            {
                sellproduct(&products,&totalproducts);
                break;
            }
            case 3:
            {
                printf("\n--- Search Product ---\n");
                printf("Enter Product ID : ");
                while(!valid_int(&productid))
                {
                    printf("Invalid ProductID\n");
                }
                searchproduct(&products, &totalproducts,&productid);
                break;
            }
            case 4:
            {
                totalinventory(&products,&totalproducts,&totalsum);
                break;
            }
            case 5:
            {
                displayproducts(&products,&totalproducts);
                break;
            }
            case 0:
            {
                freeproducts(&products,&totalproducts);
                printf("\nThank you for using Inventory Management System!\n");
                exit(0);
            }
            default:
            {
                printf("Invalid Choice\n");
            }
        }
    }

    free(products);
}