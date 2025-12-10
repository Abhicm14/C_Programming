#include<valid.h>

int mystrcasecmp(char *str1, char *str2)
{
    char ch,ch1;

    while(*str1 !='\0' && *str2 !='\0')
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
            return (ch - ch1);
        
        str1++;
        str2++;
    }

    if( ch == ch1)
        return (*str1 - *str2);
}