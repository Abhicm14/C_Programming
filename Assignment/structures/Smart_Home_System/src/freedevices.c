#include"smart_home.h"

void freedevices(struct Device **devices, int* count) 
{
    if (*devices != NULL) 
    {
        free(*devices);
        *devices = NULL;
    }
    *count = 0;
}