#include"smart_home.h"

void totalpower(struct Device **devices,int *count)
{
    float totalpower = 0;

    printf("\n *** Total Power Consumption *** \n");
    
    printf("    Calculating power for ON devices...\n");

    for(int count1 = 0; count1 < *count; count1++)
    {
        if((*devices)[count1].status == 1)
        {
            printf("     => \"%s\" : %.2f W\n",(*devices)[count1].deviceName,(*devices)[count1].powerConsumption);
            totalpower += (*devices)[count1].powerConsumption;
        }
    }
    
    printf("\n> Total Power Consumption of active devices : %.2f Watts\n",totalpower);
}