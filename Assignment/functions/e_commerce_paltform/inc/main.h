#include<stdio.h>
#include<stdlib.h>
#include"validation.h"

extern int last_quantity;
extern int last_product_id;
extern float last_final_amount;

int menu(void);
int browse_products(void);
void fashion(void);
void electronics(void);
void home_applinces(void);
int place_order(int choice);
void subtotal(int product,int quantity,int choice);
float calculateDiscount(float subtotal);
void product_name(int product_id);
void billing(int product_id, int quantity, float price);
void view_order_status(int product_id,int quantity,float finalamount);