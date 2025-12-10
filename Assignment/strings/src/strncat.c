#include"mystring.h"

int mystrncat(char *str,char *str1,char *str2,int n)
{
    int count=0;

    while(*str1 !='\0')
    {    
        if(count < n)
        {
            *str = *str1;
            *str++;
            *str1++;
            count++;
        }
        else
        {
            while(*str2 != '\0')
            {
                *str = *str2;
                *str++;
                *str2++;
            }

            *str = *str1;
            str++;
            str1++;
        }
        *str ='\0';    
    }
    return 0;
}