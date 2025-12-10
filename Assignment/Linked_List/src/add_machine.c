#include"Eagle.h"

void add_machine(struct Plant **p_head)
{
    int plantid;
    int machineid;
    struct Plant *tmp = *p_head;

    printf(">> Enter Plant ID to add machine to: ");
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

    printf(">> Enter Machine ID : ");
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
                printf("Error: Machine ID %d already exists!\n", machineid);
                return;
            }
            check = check->link;
        }while(check != tmp -> machine_link);
    }

    machine_input();

    if(tmp->machine_link == NULL) 
    {
        struct Eagle *newMachine = create_machine_node(machineid, machineName, start, stop);
        tmp->machine_link = newMachine;
    } 
    else 
    {
        
        struct Eagle *head = tmp->machine_link;
        struct Eagle *tail = head;

        while (tail->link != head) 
        {
            tail = tail->link;
        }

        tail = append_machine(tail, machineid, machineName, start, stop);   
    }
    printf("Machine %d added successfully to Plant %d.\n", machineid, plantid);
}