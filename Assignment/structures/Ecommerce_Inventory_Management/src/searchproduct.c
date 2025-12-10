#include"ecommerce.h"

void searchproduct(struct product **products, int *count,const int *productid)
{
    int count1;
    float totalvalue;
    if(count == 0)
    {
        printf("No Products in the system\n");
    }

    int found = 0;
    for(count1 = 0; count1 < *count; count1++)
    {
        if((*products)[count1].ProductID == *productid)
        {
            found = 1;

            printf("Product Found : \n"); 
            printf("ID        : %d\n",(*products)[count1].ProductID);
            printf("Name      : %s\n",(*products)[count1].name);
            printf("Price     : ₹%.2f\n",(*products)[count1].price);
            printf("Quantity  : %d\n",(*products)[count1].quantity);
            
            totalvalue = ((*products)[count1].price) * ((*products)[count1].quantity);
            
            printf("Total Value : ₹%.2f\n",totalvalue);
        }
        else
        {
            printf("Product not found!\n");
        }
    }

    if(!found)
    {
        printf("Product %d not found\n",*productid);
    }

}