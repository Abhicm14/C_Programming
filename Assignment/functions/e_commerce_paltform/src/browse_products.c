#include<main.h>

int browse_products(void)
{
    int choice;
    int choice1;
    
    printf("**** Products Catgorey ****\n");
    printf("1. Fashion \n");
    printf("2. Electronics \n");
    printf("3. Home Applinces \n");
    
    while(1)
    {
        printf("Choose The Catagory of product Your Looking For : ");
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

    if(choice == 1)
    {
        fashion();
        return choice;
    }
    else if(choice == 2)
    {
        electronics();
        return choice;
    }
    else if(choice == 3)
    {
    
        home_applinces();
        return choice;
    }
    else
    {
        printf("Invalid Choice/wrong Input\n");
    }
}