#include <stdio.h>

int main() 
{
    // A single batch of 5 items
    int itemBatch[5] = {101, 105, 99, 102, 104};

    // This is the special syntax for a pointer TO AN ENTIRE ARRAY of 5 integers.
    // Read it as: "pBatch is a pointer to an array of 5 ints".
    int (*pBatch)[5]; 

    // Point it to the address of the entire itemBatch array
    pBatch = &itemBatch;

    printf("--- Analysis of a Pointer-to-an-Array ---\n");
    
    // &itemBatch is the address of the whole array block
    printf("Address of the entire array: %p\n", pBatch); 
    
    // sizeof(*pBatch) gives the size of what it points to: the whole array.
    // On most systems, this will be 5 * 4 = 20 bytes.
    printf("Size of the memory block it points to: %zu bytes\n\n", sizeof(*pBatch));

    printf("--- Accessing Elements using Pointer-to-an-Array ---\n");
    // To access elements, you must first dereference the pointer to get the array back,
    // and then use the subscript. The parentheses are crucial!
    // (*pBatch) gets the array, then [0] gets the first element.
    printf("First item's quality score: %d\n", (*pBatch)[0]);
    printf("Fifth item's quality score: %d\n", (*pBatch)[4]);

    return 0;
}