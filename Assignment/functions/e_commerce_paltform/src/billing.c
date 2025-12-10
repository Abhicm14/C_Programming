#include<main.h>

// Billing function with arguments
void billing(int product_id, int quantity, float price)
{
    float afterdiscount;
    
    afterdiscount = (price - calculateDiscount(price));
    
    float shipping = 70;
    float tax = (afterdiscount+shipping)/20;

    float finalAmount = (tax+shipping+price);

    printf("\n--- BILL SUMMARY ---\n");
    printf("Product Chosen : ");
    product_name(product_id);
    printf("\n");
    printf("Quantity       : %d\n", quantity);
    printf("Subtotal       : Rs. %.2f\n", price);
    printf("Discount (10%%) : Rs. %.2f\n", calculateDiscount(price));
    printf("After Discount : Rs. %.2f\n", afterdiscount);
    printf("Shipping Cost  : Rs. %.2f\n", shipping);
    printf("Tax (5%%)       : Rs. %.2f\n", tax);
    printf("-------------------------------\n");
    printf("Final Amount   : Rs. %.2f\n", finalAmount);
    printf("-------------------------------\n");
    printf("Order Placed Successfully!\n");

    last_quantity = quantity;
    last_product_id = product_id;   
    last_final_amount = finalAmount;
}
