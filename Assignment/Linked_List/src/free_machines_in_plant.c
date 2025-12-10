#include"Eagle.h"

void free_machines_in_plant(struct Eagle *head)
{
    if (head == NULL) 
        return;

    struct Eagle *current = head;
    struct Eagle *next_node;

    do 
    {
        next_node = current->link;
        free(current);
        current = next_node;
    } while (current != head);
}