#include<valid.h>

int valid_contact(char *contact) 
{
    int len = mystrlen(contact);
    
    // Must be exactly 10 characters
    if (len != 10) 
    {
        return 0;
    }
    
    // Check every character is a digit
    for (int i = 0; i < 10; i++) 
    {
        if (contact[i] < '0' || contact[i] > '9') 
        {
            return 0;  // not a digit
        }
    }
    
    return 1;  // valid!
}