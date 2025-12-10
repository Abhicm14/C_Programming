#include<valid.h>

void removeNewline(char *str)
{
    if (str == NULL) 
        return;
    str[strcspn(str, "\n\r")] = '\0';
}