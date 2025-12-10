#include<pointers.h>

int findLargest(int *arr,int size)
{
    int *start = arr;
    int *end = arr + size;
    int largest = *start;

    while (start < end)
    {
        if (*start > largest)
            largest = *start;
        start++;
    }

    return largest;
}