#include"ecommerce.h"

void sellproduct(struct product **products,int *count)
{
    int quantity;
    int productid;
    int count1;
    int temp;

    printf("\n--- Sell Product ---\n");

    printf("Enter Product ID : ");
    while(!valid_int(&productid))
    {
        printf("Invalid ProductID\n");
    } 

    for(count1 = 0; count1 < *count; count1++)
    {
        if((*products)[count1].ProductID == productid)
        {
            printf("Enter quantity sold : ");
            while(!valid_int(&quantity))
            {
                printf("Invalid ProductID\n");
            }
            if((*products)[count1].quantity < quantity)
            {
                printf("Not enough stock! Only %d units available.\n",(*products)[count1].quantity);
            }
            else
            {
                (*products)[count1].quantity -= quantity;
                temp = count1;
            }
        }
        else
        {
            printf("Error: Product not found!");
        }
    }
    
    printf("\n%d unit(s) of \"%s\" Sold. Remaining : %d\n",quantity,(*products)[temp].name,(*products)[temp].quantity);
}