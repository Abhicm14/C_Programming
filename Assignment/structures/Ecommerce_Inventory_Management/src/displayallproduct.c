#include"ecommerce.h"

void displayproducts(struct product** products, int *count)
{
    int count1;
    float totalvalue1;
    float totalsum = 0;
    

    printf("\n=== CURRENT INVENTORY ===\n");
    printf("-------------------------------------------------------------\n");
    printf("ID\t | Name\t   | Price   | Quantity   | Total Value\n");
    printf("-----+---------------------+---------+----------+------------\n");
    for(count1 = 0; count1 < *count; count1++)
    {
        totalvalue1 = (*products)[count1].price * (*products)[count1].quantity;
        printf("%d\t|%s\t   |₹%.2f   |%d\t  |₹%.2f\n",(*products)[count1].ProductID,(*products)[count1].name,(*products)[count1].price ,(*products)[count1].quantity,totalvalue1);
        totalsum += totalvalue1;
    }
    printf("-------------------------------------------------------------\n");

    printf("\n Total Inventory Value : ₹%.2f\n",totalsum);
}