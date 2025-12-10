#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void print_data(struct Node *head);
void deletePosition(struct Node **head,int pos);

void main()
{
    struct Node *head = NULL,*current = NULL; //*temp = NULL;

    head = malloc(sizeof(struct Node));

    head->data = 45;
    head->link = NULL;

    current = malloc(sizeof(struct Node));

    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct Node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;
    
    deletePosition(&head,2);
    print_data(head);
}

void deletePosition(struct Node **head,int pos)
{
    struct Node *current = *head;
    struct Node *previous = *head;
    if(*head == NULL)
    {
        printf("List is already empty!");
    }
    else if(pos == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else
    {
        while(pos != 1)
        {
            previous = current;
            current = current->link;
            pos--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}

void print_data(struct Node *head)
{
    if(head == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }

    struct Node *ptr = NULL;
    ptr = head;

    while(ptr != NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");
}

