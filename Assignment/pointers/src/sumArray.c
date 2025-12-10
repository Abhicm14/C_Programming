#include<pointers.h>

int sumArray(int *arr,int size)
{
    int *start = arr;
    int *end = arr + size;
    int sum = 0;

    while (start < end)
    {
        sum += *start;
        start++;
    }

    return sum;
}