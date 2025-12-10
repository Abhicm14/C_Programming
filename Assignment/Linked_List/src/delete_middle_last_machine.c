#include"Eagle.h"

int delete_middle_or_last_machine(struct Eagle *head, int id)
{
    struct Eagle *curr = head->link;
    struct Eagle *prev = head;

    while(curr != head)
    {
        if(curr->id == id)
        {
            prev->link = curr->link; 
            
            free(curr);
            return 1; 
        }
        prev = curr;
        curr = curr->link;
    }
    return 0; 
}