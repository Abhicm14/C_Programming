#include"Eagle.h"

void add_plant(struct Plant **p_head)
{
    int plantid;
    char plantlocation[MAX_SIZE];

    struct Plant *tmp = *p_head;

    printf(">> Enter Plant ID : ");
    while(!valid_int(&plantid)) 
    {
        printf("Invalid! Enter Plant ID Again : ");
    }

    while(tmp != NULL) 
    {
        if(tmp->id == plantid) 
        {
            printf("Error: Plant ID %d already exists!\n", plantid);
            return;
        }
        tmp = tmp->plant_link;
    }

    printf("Enter the Plant Location : ");
    fgets(plantlocation, MAX_SIZE, stdin);
    removeNewline(plantlocation);

    while(!valid_string(plantlocation))
    {
        printf("Enter the Plant Location : ");
        fgets(plantlocation, MAX_SIZE, stdin);
        removeNewline(plantlocation);    
    }
    
    if(*p_head == NULL)
    {
        *p_head = create_plant_node(plantid, plantlocation);
    }
    else
    {
        append_plant(*p_head, plantid,plantlocation);
    }

    create_machines(*p_head,plantid);
}