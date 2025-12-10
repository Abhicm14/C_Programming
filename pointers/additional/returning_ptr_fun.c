#include <stdio.h>
#include <stddef.h> // Required for NULL

// The function's return type is 'int*', meaning it returns a pointer to an integer.
int* findEmployee(int id_list[], int size, int target_id) 
{
    for (int i = 0; i < size; i++) 
    {
        if (id_list[i] == target_id) 
        {
            // Found it! Return the ADDRESS of this element.
            return &id_list[i];
        }
    }
    // If the loop finishes without finding the ID, return NULL.
    return NULL;
}

int main() 
{
    int employee_ids[] = {101, 105, 203, 215, 301};
    int search_id = 215;
    
    // The 'found_ptr' will hold the memory address returned by the function.
    int *found_ptr = findEmployee(employee_ids, 5, search_id);
    
    // ALWAYS check if a returned pointer is NULL.
    if (found_ptr != NULL) 
    {
        printf("Employee with ID %d found!\n", search_id);
        // We can use the pointer to get the value.
        printf("Value at returned address: %d\n", *found_ptr);
    } 
    else 
    {
        printf("Employee with ID %d NOT found.\n", search_id);
    }
    
    return 0;
}