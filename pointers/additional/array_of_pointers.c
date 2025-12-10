#include <stdio.h>

int main() 
{
    // This is an array of 5 elements. Each element is a 'char*' (pointer to a character).
    // Each pointer points to the first character of a string literal.
    const char *menuItems[] = {
        "Pizza",
        "Burger",
        "Pasta",
        "Salad",
        "Soda"
    };
    
    // Calculate the number of items in the menu array.
    int numItems = sizeof(menuItems) / sizeof(menuItems[0]);

    printf("--- Restaurant Menu ---\n");
    for (int i = 0; i < numItems; i++) 
    {
        // menuItems[i] gives us the pointer for the i-th string.
        printf("%d. %s\n", i + 1, menuItems[i]);
    }
    
    return 0;
}