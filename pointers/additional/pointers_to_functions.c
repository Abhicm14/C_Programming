#include <stdio.h>

// --- 1. Basic Functions ---
int getSum(int a, int b) { return a + b; }
int getProduct(int a, int b) { return a * b; }
int getDifference(int a, int b) { return a - b; }

// --- 3. Function that takes a function pointer as an argument ---
void operate(int x, int y, int (*func_ptr)(int, int)) 
{
    int result = func_ptr(x, y); // Call the function via the pointer
    printf("Result of the operation is: %d\n", result);
}

int main() 
{
    // --- 2. Declare a pointer to a function ---
    // The pointer must match the signature: returns int, takes (int, int)
    int (*p_calculator)(int, int);

    printf("--- Direct Calling via Pointer ---\n");
    p_calculator = &getSum; // Point to the getSum function
    int sum = p_calculator(10, 20); // Call through the pointer
    printf("Sum calculated via pointer: %d\n", sum);

    p_calculator = &getProduct; // Re-assign the same pointer
    int product = p_calculator(10, 20); // Call through the pointer
    printf("Product calculated via pointer: %d\n\n", product);

    printf("--- Passing Function Address to another Function ---\n");
    operate(50, 25, &getDifference); // Pass the address of getDifference
    operate(50, 25, &getSum);       // Pass the address of getSum
    printf("\n");

    // --- 4. Using an Array of Function Pointers ---
    // Create an array that holds 3 function pointers
    int (*p_op_array[3])(int, int) = {&getSum, &getProduct, &getDifference};

    int choice;
    printf("--- Array of Function Pointers ---\n");
    printf("Choose an operation:\n");
    printf("0: Sum\n1: Product\n2: Difference\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 3) 
    {
        int a = 100, b = 5;
        // Use the choice as an index to call the correct function!
        int finalResult = p_op_array[choice](a, b);
        printf("Result of chosen operation on %d and %d is: %d\n", a, b, finalResult);
    } 
    else 
    {
        printf("Invalid choice.\n");
    }

    return 0;
}