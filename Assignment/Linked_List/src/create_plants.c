#include "Eagle.h"

void create_plants(struct Plant **p_head)
{
    int Nplants;

    printf("\nEnter the Number of plants : ");
    while(!valid_int(&Nplants))
    {
        printf("Enter the Number of plants Greater Than Zero : ");
    }

    for(int count = 0; count < Nplants; count++)
    {
        printf("\n--- Plant %d Setup ---\n", count + 1);
        
        int is_unique = 0;
        
        while (!is_unique) 
        {
            printf("Enter the Plant ID : ");
            while(!valid_int(&plantid))
            {
                printf("Enter the PlantID Greater Than Zero : ");
            }

            struct Plant *temp = *p_head;
            int found = 0;

            while(temp != NULL) 
            {
                if(temp->id == plantid) 
                {
                    printf("Error: Plant ID %d already exists!\n", plantid);
                    found = 1;
                    break;;
                }
                temp = temp->plant_link;
            }
            
            if (found == 0) 
            {
                is_unique = 1;
            }
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

        create_machines(*p_head, plantid); 
    }
    return;
}