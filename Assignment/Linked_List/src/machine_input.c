#include"Eagle.h"

void machine_input()
{
    printf("Enter Machine Name : ");
    fgets(machineName, MAX_SIZE, stdin);
    removeNewline(machineName);
    while(!valid_string(machineName)) 
    {
        printf("Enter Valid Name: ");
        fgets(machineName, MAX_SIZE, stdin);
        removeNewline(machineName);    
    }

    printf("Enter Start Time : ");
    while(!valid_float(&start) || start > 24.00) 
    {
        printf("Invalid! Enter Again : ");
    }
    
    printf("Enter Stop Time : ");
    while(!valid_float(&stop) || stop < start || stop > 24.00 ) 
    {
        printf("Invalid! Enter Again: ");
    }

    printf("Enter cycle Time : ");
    while(!valid_float(&cycle) || cycle > 13.00) 
    {
        printf("Invalid! Enter Again: ");
    }
}