#include"Eagle.h"

struct Plant* create_plant_node(int plantID, char *Plantlocation)
{
    struct Plant *newPlant = (struct Plant*)malloc(sizeof(struct Plant));

    if(newPlant == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newPlant -> id = plantID;
    strcpy(newPlant -> loc,Plantlocation);
    newPlant -> plant_link = NULL;
    newPlant -> machine_link = NULL;

    return newPlant;
}