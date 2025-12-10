#include"smart_home.h"

void main()
{
    struct Device *devices = NULL;
    int totaldevices = 0;

    int choice;

    while(1)
    {
        printf("\n");
        choice = menu();

        switch (choice)
        {
            case 1:
            {
                addnewdevice(&devices,&totaldevices);
                break;
            }
            case 2:
            {
                toggledevice(&devices,&totaldevices);
                break;
            }
            case 3:
            {
                totalpower(&devices,&totaldevices);
                break;
            }
            case 4:
            {
                freedevices(&devices,&totaldevices);
                printf("\n > Exiting system. Goodbye!\n");
                exit(0);
            }
            default:
            {
                printf("Invalid Choice \n");
                break;
            }
        }
    }
}