#include"school_gradeing.h"

void freeclass(struct student **class, int* count) 
{
    if (*class != NULL) 
    {
        free(*class);
        *class = NULL;
    }
    *count = 0;
}