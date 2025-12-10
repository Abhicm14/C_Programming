#include"array.h"

void print_array(int arr[],int n)
{
    for(int count=0; count<n; count++)
        printf("arr[%d] = %d\t",count,arr[count]);
}