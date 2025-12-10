#include<pointers.h>

void calculatingPrices(float *priceList,int numproducts)
{
    float totalprice = 0;
    float avgprice = 0;

    for(int count =0; count <= numproducts; count++)
    {
        totalprice += priceList[count]; 
    } 
    
    avgprice = totalprice/numproducts;

    printf("\nTotal cost of all products : $%.2f\n",totalprice);
    printf("Average product price : $%.2f\n",avgprice);

}