#include<pointers.h>

int countOccurences(int *arr,int size,int target)
{
    int *start = arr;
    int *end = arr + size;
    int count = 0;

    while (start < end)
    {
        if (*start == target)
            count++;
        start++;
    }

    return count;
}