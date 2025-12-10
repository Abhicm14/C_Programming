#include<main.h>

int place_order(int choice)
{
    int product;
    int quantity;
    int price;

    if(choice == 1)
    {
        fashion();

        while(1)
        {
            printf("Select the product : ");
            product = valid_int();
			if(product == -1)
			{
				continue;
			}
			else
			{
				break;
			}
        }

        while(1)
        {
            printf("Enter the Number Of Quantity : ");
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
        
        subtotal(product,quantity,choice);
    }
    else if(choice == 2)
    {
        electronics();
        
        while(1)
        {
            printf("Select the product : ");
            product = valid_int();
			if(product == -1)
			{
				continue;
			}
			else
			{
				break;
			}
        }

        while(1)
        {
            printf("Enter the Number Of Quantity : ");
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

        subtotal(product,quantity,choice);
    }
    else if(choice == 3)
    {
    
        home_applinces();

        while(1)
        {
            printf("Select the product : ");
            product = valid_int();
			if(product == -1)
			{
				continue;
			}
			else
			{
				break;
			}
        }

        while(1)
        {
            printf("Enter the Number Of Quantity : ");
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

        subtotal(product,quantity,choice);
    }
    else
    {
        printf("Invalid Choice/wrong Input\n");
    }
}