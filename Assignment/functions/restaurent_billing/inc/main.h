#include <stdio.h>
#include <stdlib.h>
#include<validation.h>

/* -------- Function Prototypes -------- */
void menu(void);                 // Displays the food menu
int order(int choice);            // Handles order & quantity, returns cost
int total_bill(int price, int quantity); // Calculates cost = price × quantity