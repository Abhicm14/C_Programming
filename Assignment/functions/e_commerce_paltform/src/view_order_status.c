#include<main.h>

void view_order_status(int last_product_id,int last_quantity,float last_final_amount)
{
    printf("-----Order Status------\n");
    printf("Product Name : ");
    product_name(last_product_id);  
    printf("\nQuantity : %d\n", last_quantity);
    printf("Final Amount : Rs. %.2f\n", last_final_amount);
}