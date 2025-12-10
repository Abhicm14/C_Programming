#include"Eagle.h"

void sort_machines(struct Eagle *head)
{
    if(head == NULL || head->link == head)
    {
        return;
    }

    struct Eagle *current;
    struct Eagle *index;
    int tempID;
    int tempProd;
    float tempStart;
    float tempStop;
    float tempCycle;
    char tempName[MAX_SIZE];

    for(current = head; current->link != head; current=current->link)
    {
        for(index = current->link; index != head; index = index->link)
        {
            if(current->product_count < index->product_count)
            {
                tempID = current->id;
                current->id = index->id;
                index->id = tempID;

                strcpy(tempName, current->name);
                strcpy(current->name, index->name);
                strcpy(index->name, tempName);

                tempProd = current->product_count;
                current->product_count = index->product_count;
                index->product_count = tempProd;

                tempCycle = current->cycle;
                current->cycle = index->cycle;
                index->cycle = tempCycle;

                tempStart = current->start;
                current->start = index->start;
                index->start = tempStart;

                tempStop = current->stop;
                current->stop = index->stop;
                index->stop = tempStop;
            }
        }
    }

}