#include"mystring.h"

int mystrncmp(char *str1, char *str2,int n)
{
    int count=0;

    while(*str1 !='\0' && *str2 !='\0' && *str1 == *str2)
    {
        if(count < n)
        {
            *str1++;
            *str2++;
            count++;
        }
        else
        {
            *str1--;
            *str2--;
            break;
        }
    }
    if(*str1 == *str2)
        return 0;
    else
        return (*str1 - *str2);
}
