#include<pointers.h>

void processTransaction(float *balancePtr,float amount)
{
    if((*balancePtr + amount) < 0)
    {
        printf("\nInsufficient funds. Transaction cancelled\n");
        printf("Current Balance is : $%.2f\n",*balancePtr);
    }
    else
    {
        printf("\nTransaction successful.....");
        
        *balancePtr += amount;
        
    }
}