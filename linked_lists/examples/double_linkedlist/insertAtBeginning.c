#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

void print_data(struct Node *head);
struct Node *createNode(struct Node *head,int data);
struct Node *insertAtBeginning(struct Node *head,int data);

void main()
{
    struct Node *ptr, *head = NULL;

    head = createNode(head,45);

    print_data(head);

    head = insertAtBeginning(head,90);

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

struct Node *insertAtBeginning(struct Node *head,int data)
{
    struct Node *temp = malloc(sizeof(struct Node));

    head->prev = temp;
    temp ->prev = NULL;
    temp->data = data;
    temp->next = head;

    head = temp;
    return head;   
}

