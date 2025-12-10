#include"array.h"

void input_array(int arr[],int n)
{
    
    for(int count=0; count<n; count++)
    {
        printf("arr[%d] = ",count);
        arr[count]=valid_int();
    }
}