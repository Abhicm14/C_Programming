#include"Eagle.h"

int get_plant_production(struct Plant *p)
{
    if(p == NULL || p -> machine_link == NULL)
    {
        return 0;
    }

    int total = 0;

    struct Eagle *head = p->machine_link;
    struct Eagle *temp = head;

    do
    {
        total += temp->product_count;
        temp = temp->link;
    }while(temp != head);

    return total;
}