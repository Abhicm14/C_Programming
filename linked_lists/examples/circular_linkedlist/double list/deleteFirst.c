#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *circulardoubly(int data);
void print_data(struct Node *tail);
struct Node *deleteFirst(struct Node *tail);

void main()
{
    struct Node *tail = NULL;

    tail = circulardoubly(45);

    print_data(tail);

    tail = deleteFirst(tail);

    print_data(tail);
    
}

struct Node *deleteFirst(struct Node *tail)
{
    if(tail == NULL)
    {
        return tail;
    }
    
    struct Node *temp = tail -> next;

    if(temp == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }

    tail -> next = temp -> next;
    temp -> next -> prev = tail;
    free(temp);

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

