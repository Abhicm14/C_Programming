#include <stdio.h>
#include <stdlib.h> // This header is required for malloc, realloc, free

int main() 
{
    int initialCount, additionalCount, totalCount;
    float *expenses = NULL; // Initialize pointer to NULL, a good practice

    // 1. Malloc
    printf("How many expenses do you want to log? ");
    scanf("%d", &initialCount);

    // Allocate memory for 'initialCount' number of floats
    expenses = (float*) malloc(initialCount * sizeof(float));

    // ALWAYS check if malloc was successful
    if (expenses == NULL) 
    {
        printf("Error: Memory could not be allocated.\n");
        return 1; // Exit with an error code
    }

    // 2. Input
    printf("Enter %d expense amounts:\n", initialCount);
    for (int i = 0; i < initialCount; i++) 
    {
        scanf("%f", &expenses[i]);
    }

    // 3. Realloc
    printf("You forgot some expenses. How many more to add? ");
    scanf("%d", &additionalCount);
    totalCount = initialCount + additionalCount;

    // Resize the previously allocated memory block
    float *temp = realloc(expenses, totalCount * sizeof(float));

    // ALWAYS check if realloc was successful
    if (temp == NULL) 
    {
        printf("Error: Memory could not be reallocated.\n");
        free(expenses); // Free the original memory before exiting
        return 1;
    }
    expenses = temp; // Point 'expenses' to the new, possibly moved, memory block

    // 4. More Input
    printf("Enter the %d additional expenses:\n", additionalCount);
    for (int i = initialCount; i < totalCount; i++) 
    {
        scanf("%f", &expenses[i]);
    }

    // 5. Process and Free
    float total = 0;
    printf("\n--- All Expenses ---\n");
    for (int i = 0; i < totalCount; i++) 
    {
        printf("%.2f\n", expenses[i]);
        total += expenses[i];
    }
    printf("Total of all expenses: %.2f\n", total);

    // CRITICAL: Free the dynamically allocated memory to prevent memory leaks
    free(expenses);
    expenses = NULL; // Good practice to nullify pointer after freeing

    return 0;
}