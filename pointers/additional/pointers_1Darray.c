#include <stdio.h>

int main() 
{
    // Array to store sales for 7 days
    int dailySales[7] = {50, 65, 45, 80, 72, 90, 85};
    
    // Create a pointer that points to the first element of the array
    int *pSales = dailySales;
    
    int totalSales = 0; // IMPORTANT: Initialize sum variables to 0

    printf("--- Daily Sales Report ---\n");
    // Loop 7 times (for each day of the week)
    for (int i = 0; i < 7; i++) {
        // *(pSales + i) means "go to the address pSales, move 'i' spots forward, 
        // and get the value at that new address".
        printf("Day %d Sales: %d\n", i + 1, *(pSales + i));
        
        // Add the value at the current pointer location to the total
        totalSales += *(pSales + i);
    }
    
    printf("\nTotal sales for the week: %d\n", totalSales);
    
    return 0;
}
