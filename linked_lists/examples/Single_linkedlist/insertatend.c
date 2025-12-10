#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void insertAtEnd(struct Node *head,int data);
void print_data(struct Node *head);

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
    
    insertAtEnd(head,67);
    //struct Node *ptr = head;
    //ptr = insertAtEnd(ptr,47);
	print_data(head);
}

void insertAtEnd(struct Node *head,int data)
{
    struct Node *ptr, *temp;

    ptr = head;

    temp = malloc(sizeof(struct Node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;

}

/*
struct Node *addAtEnd(struct Node *ptr,int data)
{
    struct Node *temp;

    temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

*/

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

