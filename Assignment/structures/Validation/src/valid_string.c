#include<valid.h>

int valid_string(char *str)
{
    if (str == NULL || *str == '\0') 
    {
        return 0; 
    }
    
    char *ptr = str;

    while (*ptr != '\0') 
    {
        if ((*ptr < 'a' || *ptr > 'z') && (*ptr < 'A' || *ptr > 'Z') && *ptr != ' ')
        {
            return 0; 
        }
        ptr++;
    }

    return 1; 
}