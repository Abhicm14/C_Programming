#include"ecommerce.h"

void totalinventory(struct product **products,int *count, float *sum)
{
    int count1;
    float value;

    for(count1 = 0; count1 < *count; count1++)
    {
        value = (*products)[count1].price * (*products)[count1].quantity;
        *sum += value; 
    }
    printf("\nTotal value of all items in stock : ₹%.2f\n",*sum);
}