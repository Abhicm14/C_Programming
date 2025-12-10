#include"mystring.h"

int mystrncpy(char *str1,char *str2,int n)
{
    int count=0;

    while(*str2 != '\0')
    {
        if(count < n)
        {
            *str1 = *str2;
            *str1++;
            *str2++;
            count++;
        }
        else
        {
            break;
        }
    }

    while(*str1 != '\0')
    {
        *str1 = *str1;
        *str1++;
    }
    
    *str1 = '\0';

    return 0;
}
