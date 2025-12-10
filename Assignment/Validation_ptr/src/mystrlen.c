#include<valid.h>

int mystrlen(char *str)
{
    char *start = str;
    while(*str != '\0')
    {
        str++;
    }
    return (str - start);
}