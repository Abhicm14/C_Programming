#include"mystring.h"

int mystrchr(char *str,char *ch)
{
    char *start = str;
    
    while(*str != '\0')
    {
        if(*ch == *str)
            return (str - start);
        
        str++;
    }
    
    return -1;
}