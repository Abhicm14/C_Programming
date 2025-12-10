#include"mystring.h"

int mystrncasecmp(char *str1, char *str2,int n)
{
    char ch,ch1;
    int count=0;

    while(count < n && *str1 !='\0' && *str2 !='\0')
    {
            if(*str1 >= 'A' && *str1 <= 'Z')
                ch = (*str1)+32;
            else
                ch = *str1;

            if(*str2 >= 'A' && *str2 <= 'Z')
                ch1 = (*str2)+32;
            else
                ch1 = *str2;
            
            if(ch != ch1)
                return (ch  - ch1);
            
            str1++;
            str2++;
            count++;
    }

    if(count == n)
        return 0;
}

