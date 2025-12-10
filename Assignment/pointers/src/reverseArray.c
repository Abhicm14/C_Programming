#include<pointers.h>

void reverseArray(int *arr,int size)
{
    int *start = arr;
    int *end = (arr + size -1);
    int temp;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}