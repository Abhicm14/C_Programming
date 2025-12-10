#include"ecommerce.h"

void freeproducts(struct product** products, int* count) 
{
    if (*products != NULL) 
    {
        free(*products);
        *products = NULL;
    }
    *count = 0;
}