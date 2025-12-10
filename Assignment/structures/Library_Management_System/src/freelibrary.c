#include"library.h"

void freelibrary(struct Book **library, int* count) 
{
    if (*library != NULL) 
    {
        free(*library);
        *library = NULL;
    }

    *count = 0;
}