#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *createNode(struct Node *head,int data);
struct Node *insertAtEnd(struct Node *head,int data);
void print_data(struct Node *head);

void main()
{
    struct Node *ptr, *head = NULL;

    head = createNode(head,45);

    print_data(head);

    head = insertAtEnd(head,90);

    print_data(head);
}

void print_data(struct Node *head)
{
    struct Node *ptr = NULL;

    ptr = head;
    while(ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

struct Node *createNode(struct Node *head,int data)
{
    struct Node *temp = malloc(sizeof(struct Node));

    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    head = temp;

    return head;
}

struct Node *insertAtEnd(struct Node *head,int data)
{
    struct Node *temp, *start = NULL,*ptr;

    temp = createNode(start,data);

    ptr = head;
    while( ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;

    return head;
    
}

