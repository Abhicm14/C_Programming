#include "Eagle.h"

struct Plant* append_plant(struct Plant *head, int plantID, char *Plantlocation)
{
    struct Plant *newPlant = create_plant_node(plantID, Plantlocation);

    if(head == NULL)
    {
        return newPlant; 
    }
    
    
    struct Plant *temp = head;
    
    while(temp->plant_link != NULL)
    {
        temp = temp->plant_link;
    }
    temp->plant_link = newPlant;

    return newPlant;
}