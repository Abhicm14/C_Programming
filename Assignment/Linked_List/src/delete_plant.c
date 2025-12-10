#include"Eagle.h"

void delete_plant(struct Plant **p_head)
{
    int plantid;

    struct Plant *temp = *p_head;
    struct Plant *prev = NULL;

    if(temp == NULL)
    {
        printf("No Plants are available to delete.\n");
        return;
    }

    printf(">> Enter Plant ID to delete : ");
    while(!valid_int(&plantid)) 
    {
        printf("Invalid! Enter Plant ID Again : ");
    }

    
    while(temp != NULL && temp->id != plantid)
    {
        prev = temp;
        temp = temp ->plant_link;
    }

    if (temp == NULL) 
    {
        printf("Error: Plant ID %d not found.\n", plantid);
        return;
    }

    if (temp->machine_link != NULL) 
    {
        free_machines_in_plant(temp->machine_link);
    }

    if (prev == NULL) 
    {
        *p_head = temp->plant_link;
    }
    else 
    {
        prev->plant_link = temp->plant_link;
    }
    free(temp);
    printf("Plant %d and all its machines deleted successfully.\n", plantid);

}