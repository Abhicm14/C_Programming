#include<main.h>

int cycle(void) 
{
    int cycles;
    
    while(1)
    {
        printf("Enter the number of cycles : ");
        cycles = valid_int();
        if(cycles == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    return cycles;
}