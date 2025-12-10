#include"smart_home.h"

void toggledevice(struct Device **devices, int *count)
{
    int deviceid;
    
    printf("\n *** Toggle Device Status *** \n");
    
    printf("Enter Device ID to toggle : ");
    while(1)
    {
        if(valid_int(&deviceid) && deviceid > 100)
        {
            for(int count1 = 0; count1 < *count; count1++)
            {
                if(deviceid == (*devices)[count1].deviceID)
                {
                    if((*devices)[count1].status == 0)
                    {
                        (*devices)[count1].status = 1;
                        printf("\n> \"%s\" status changed from OFF to ON.\n",(*devices)[count1].deviceName);
                        return;
                    }
                    else
                    {
                        (*devices)[count1].status = 0;
                        printf("\n> \"%s\" status changed from ON to OFF.\n",(*devices)[count1].deviceName);
                        return;
                    }
                }
            }
            printf("Device ID Doesn't Found.\n");
            break;
        }
        else
        {
            printf("Invalid! Enter a positive Integer ID : ");
            continue;
        }
    }
    
}