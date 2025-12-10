#include <stdio.h>

// This function receives a POINTER to an integer (a memory address).
void useHealthPotion(int *pHealth) 
{
    printf("...using health potion...\n");
    
    // We use '*' to dereference the pointer and access the VALUE at that address.
    *pHealth += 20;
    
    // Ensure health doesn't exceed the maximum.
    if (*pHealth > 100) {
        *pHealth = 100;
    }
}

int main() 
{
    int playerHealth = 70;
    
    printf("Player health before potion: %d\n", playerHealth);
    
    // We pass the ADDRESS of playerHealth using the '&' operator.
    useHealthPotion(&playerHealth);
    
    printf("Player health after potion: %d\n", playerHealth);
    
    return 0;
}