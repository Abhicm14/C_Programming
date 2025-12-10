#include"Eagle.h"

void delete_machine(struct Plant *p_head)
{
    struct Plant *temp = p_head;

    printf(">> Enter Plant ID to Delete machine : ");
    while(!valid_int(&plantid)) 
    {
        printf("Invalid Plant ID. Enter again:");
    }

    while(temp != NULL && temp->id != plantid)
    {
        temp = temp->plant_link;
    }

    if(temp == NULL)
    {
        printf("Error: Plant not found.\n");
        return;
    }

    if(temp->machine_link == NULL) 
    {
        printf("Error: No machines exist in this plant.\n");
        return;
    }

    printf(">> Enter Machine ID : ");
    while(!valid_int(&machineid)) 
    {
        printf("Invalid Machine ID Enter again : ");
    }

    struct Eagle *head = temp->machine_link;

    if(head->id == machineid)
    {
        temp ->machine_link = delete_head_machine(head);
        printf("Machine %d deleted successfully.\n", machineid);
        return;
    }
    else
    {
        int success = delete_middle_or_last_machine(head, machineid);
        
        if(success) 
        {
            printf("Machine %d deleted successfully.\n", machineid);
        } 
        else 
        {
            printf("Error: Machine ID %d not found.\n", machineid);
        }
    }
}