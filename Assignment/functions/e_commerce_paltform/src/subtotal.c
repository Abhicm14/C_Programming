#include<main.h>

void subtotal(int product,int quantity,int choice)
{
    int price;
    static int product_id;

    if(choice == 1)
    {
        if(product == 1)
        {
            price = quantity*600;
            product_id = 1;
        }
        else if(product == 2)
        {
            price = quantity*1200;
            product_id = 2;
        }
        else if(product == 3)
        {
            price = quantity*500;
            product_id = 3;
        }
        else if(product == 4)
        {
            price = quantity*300;
            product_id = 4;
        }
        else
        {
            printf("Wrong Choice\n");
        }
    }
    else if(choice == 2)
    {
        if(product == 1)
        {
            price = quantity*15000;
            product_id = 5;
        }
        else if(product == 2)
        {
            price = quantity*50000;
            product_id = 6;
        }
        else if(product == 3)
        {
            price = quantity*10000;
            product_id = 7;
        }
        else if(product == 4)
        {
            price = quantity*5000;
            product_id = 8;
        }
        else
        {
           printf("Wrong Choice\n");
        }
    }
    else if(choice == 3)
    {
        if(product == 1)
        {
            price = quantity*20000;
            product_id = 9;
        }
        else if(product == 2)
        {
            price = quantity*30000;
            product_id = 10;
        }
        else if(product == 3)
        {
            price = quantity*5000;
            product_id = 11;
        }
        else if(product == 4)
        {
            price = quantity*10000;
            product_id = 12;
        }
        else
        {
            printf("Wrong Choice\n");
        }
    }
    else
    {
        printf("Wrong Choice\n");
    }
    billing(product_id,quantity,price);
}