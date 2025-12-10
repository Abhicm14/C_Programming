#include"Eagle.h"

void update_machine(struct Plant *p_head)
{
    int plantid;
    int machineid;
    struct Plant *tmp = p_head;

    printf(">> Enter Plant ID to update machine : ");
    while(!valid_int(&plantid)) 
    {
        printf("Invalid Plant ID. Enter again:");
    }
    
    while(tmp != NULL) 
    {
        if(tmp->id == plantid) 
        {
            break;
        }
        tmp = tmp->plant_link;
    }

    if(tmp == NULL)
    {
        printf("Error: Plant ID %d does not exist!\n", plantid);
        return;
    }

    printf(">> Enter Machine ID you want to update : ");
    while(!valid_int(&machineid)) 
    {
        printf("Invalid Machine ID Enter again : ");
    }

    struct Eagle *check = tmp->machine_link;

    if(check != NULL) 
    {
        do
        {
            if(check->id == machineid) 
            {
                break;
            }
            check = check->link;
        }while(check != tmp -> machine_link);
    }

    printf("Update the Start Time : ");
    while(!valid_float(&start) || start > 24.00) 
    {
        printf("Invalid! Enter Again : ");
    }
    
    printf("Update the Stop Time : ");
    while(!valid_float(&stop) || stop < start || stop > 24.00 ) 
    {
        printf("Invalid! Enter Again: ");
    }

    printf("Update the cycle Time : ");
    while(!valid_float(&cycle) || cycle > 13.00) 
    {
        printf("Invalid! Enter Again: ");
    }

    check ->start = start;
    check ->stop  = stop;
    check ->cycle = cycle;
    check ->product_count = calculate_production_count();
    return;
}