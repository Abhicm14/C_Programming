#include"Eagle.h"

void sort_plants(struct Plant *head)
{
    if(head == NULL || head -> plant_link == NULL)
    {
        return;
    }

    int swapped;

    struct Plant *ptr1;
    struct Plant *lptr = NULL;

    do
    {
        swapped = 0;
        ptr1 = head;

        while(ptr1->plant_link != lptr)
        {
            int prod1 = get_plant_production(ptr1);
            int prod2 = get_plant_production(ptr1 ->plant_link);

            if(prod1 < prod2)
            {
                int tempID = ptr1->id;
                ptr1->id =ptr1->plant_link->id;
                ptr1->plant_link->id =tempID;

                char temploc[MAX_SIZE];
                strcpy(temploc,ptr1->loc);
                strcpy(ptr1->loc,ptr1->plant_link->loc);
                strcpy(ptr1->plant_link->loc,temploc);

                struct Eagle *tempMach = ptr1->machine_link;
                ptr1->machine_link = ptr1->plant_link->machine_link;
                ptr1->plant_link->machine_link =tempMach;

                swapped = 1;
            }
            ptr1 = ptr1->plant_link;
        }
        lptr = ptr1;
    }while(swapped);
}