#include"smart_home.h"

void addnewdevice(struct Device **devices,int *count)
{
        struct Device *temp = realloc(*devices, (*count + 1) * sizeof(struct Device));

        if(temp == NULL)
        {
            printf("Memory allocation failed! Out of memory.\n");
            return;    
        }

        *devices = temp;

        int current = *count;
        
        printf("\n--- Adding New Device ---\n");
        
        printf("Enter Device ID : ");
        while(1)
        {
                if(valid_int(&((*devices)[current].deviceID)) && (*devices)[current].deviceID > 100)
                {
                        for(int count1 = 0; count1 < *count; count1++)
                        {
                                if((*devices)[count1].deviceID == (*devices)[current].deviceID)
                                {
                                        printf("Device ID is Already used.\n");
                                        continue;
                                }
                        }
                        break;
                }
                else
                {
                        printf("Invalid! Enter a positive Integer ID : ");
                }
        }
        
        printf("Enter Device Name : ");
        fgets((*devices)[current].deviceName,MAX_NAME,stdin);
        removeNewline((*devices)[current].deviceName);

        while (!valid_string((*devices)[current].deviceName)) 
        {
                printf("Error! Name must contain only letters and spaces.\n");
                printf("Enter Product Name: ");
                fgets((*devices)[current].deviceName, MAX_NAME, stdin);
                removeNewline((*devices)[current].deviceName);
        }

        printf("Enter Status (1 for ON, 0 for OFF) : ");
        while(!valid_int(&((*devices)[current].status)) || (*devices)[current].status < 0 || (*devices)[current].status > 1)
        {
                printf("Invalid! Please Enter 1 or 0 Only\n");
        }

        printf("Enter Power Consumption (Watts) : ");
        while(!valid_float(&((*devices)[current].powerConsumption)) || (*devices)[current].powerConsumption < 0)
        {
                printf("Invalid! Please Enter Greater Than Zero\n");
        }

        (*count)++;
        printf("\n> Device \"%s\" added Successfully.\n",(*devices)[current].deviceName);
}