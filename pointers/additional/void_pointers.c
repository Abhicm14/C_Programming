#include <stdio.h>

// The function takes a void pointer and a character to identify the type.
void printData(void *data, char type) 
{
    switch (type) 
    {
        case 'i':
            // 1. Cast the void pointer to an integer pointer (int*).
            // 2. Dereference it with '*' to get the integer value.
            printf("Data is an integer: %d\n", *(int*)data);
            break;
        case 'f':
            // 1. Cast the void pointer to a float pointer (float*).
            // 2. Dereference it to get the float value.
            printf("Data is a float: %.2f\n", *(float*)data);
            break;
        case 'c':
            // 1. Cast the void pointer to a character pointer (char*).
            // 2. Dereference it to get the char value.
            printf("Data is a character: %c\n", *(char*)data);
            break;
        default:
            printf("Unknown data type.\n");
    }
}

int main() 
{
    int myInt = 42;
    float myFloat = 3.14;
    char myChar = 'A';
    
    printf("--- Calling generic print function ---\n");
    
    // We pass the ADDRESS of each variable. The void pointer will hold this address.
    printData(&myInt, 'i');
    printData(&myFloat, 'f');
    printData(&myChar, 'c');
    
    return 0;
}