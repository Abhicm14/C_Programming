#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *circulardoubly(int data);
void print_data(struct Node *tail);
struct Node *deleteEnd(struct Node *tail);

void main()
{
    struct Node *tail = NULL;

    tail = circulardoubly(45);

    print_data(tail);

    tail = deleteEnd(tail);

    print_data(tail);
    
}

struct Node *deleteEnd(struct Node *tail)
{
    struct Node *temp;
    if(tail == NULL)
    {
        return tail;
    }

    if(temp == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }

    temp = tail -> prev;
    temp -> next = tail -> next;
    tail -> next -> prev = temp;
    free(tail);
    tail = temp;

    return tail;
}

void print_data(struct Node *tail)
{
    if(tail == NULL)
    {
        printf("No Element in the list\n");
    }
    else
    {
        struct Node *ptr = tail ->next;
        do
        {
            printf("%d->", ptr->data);
            ptr = ptr->next;
        }while(ptr != tail ->next);
        printf("NULL\n");
    }
    return;
}

struct Node *circulardoubly(int data)
{
    struct Node *temp = malloc(sizeof(struct Node));

    temp->prev = temp;
    temp->data = data;
    temp->next = temp;

    return temp;
}

