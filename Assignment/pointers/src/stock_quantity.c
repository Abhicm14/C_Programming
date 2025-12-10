#include<pointers.h>

void updateStock(int *StockPtr,int quantity)
{
    if((*StockPtr + quantity) < 0)
    {
        printf("Cannot Remove Stocks more than Current stock\n");
        printf("Current Stock : %d\n",*StockPtr);
    }
    else
    {
        *StockPtr += quantity;
    }
}
