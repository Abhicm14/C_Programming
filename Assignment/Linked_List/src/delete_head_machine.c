#include"Eagle.h"

struct Eagle* delete_head_machine(struct Eagle *head)
{
    
    if (head->link == head)
    {
        free(head);
        return NULL; 
    }

    struct Eagle *tail = head;
    while(tail->link != head)
    {
        tail = tail->link;
    }

    struct Eagle *newHead = head->link; 
    tail->link = newHead;               
    
    free(head);
    return newHead;
}