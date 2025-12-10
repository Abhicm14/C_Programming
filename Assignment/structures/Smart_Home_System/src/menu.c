#include"smart_home.h"

int menu(void)
{
    int choice;

    printf("--- Smart Home System ---\n");
    printf("1. Add Device\n");
    printf("2. Toggle Device Status\n");
    printf("3. Calculate Total Power (ON Devices)\n");
    printf("4. Exit\n");
    printf("-------------------------\n");
    
    printf("Enter your choice : ");
    while(!valid_int(&choice))
    {
        printf("Enter your choice : ");
    } 

    return choice;
}