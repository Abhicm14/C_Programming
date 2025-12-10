#include"Eagle.h"

void sort_machines_wrapper(struct Plant *head)
{
    int plantID;
    struct Plant *temp = head;

    printf("Enter Plant ID to sort its machines: ");
    while(!valid_int(&plantID)) 
    {
        printf("Retry: ");
    }

    while(temp != NULL && temp->id != plantID) 
    {
        temp = temp->plant_link;
    }

    if(temp == NULL) 
    {
        printf("Plant not found!\n");
        return;
    }

    if(temp->machine_link == NULL) 
    {
        printf("No machines to sort in Plant %d.\n", plantID);
        return;
    }

    sort_machines(temp->machine_link);
    printf("Machines in Plant %d sorted by production.\n", plantID);
}