#include"array.h"

void distinct_array(int arr[], int size) 
{
    int visited[size];
    int has_duplicates = 0;  // Flag to track if any duplicates are found

    for (int i = 0; i < size; i++)
        visited[i] = 0;

    for (int i = 0; i < size; i++) 
    {
        if (visited[i])
            continue;

        int repeat_count = 0;

        for (int j = i + 1; j < size; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                repeat_count++;
                visited[j] = 1;
            }
        }

        if (repeat_count > 0) 
        {
            has_duplicates = 1;
            printf("%d has repeated %d times\n", arr[i], repeat_count + 1);
        }
    }

    if (!has_duplicates)
        printf("All the array Elements are unique\n");
}
