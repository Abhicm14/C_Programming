#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void print_data(struct Node *head);
struct Node *reverseList(struct Node *head);

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
    
	print_data(head);
    head = reverseList(head);
    print_data(head);
}

struct Node *reverseList(struct Node *head)
{
    struct Node *prev = NULL;
    struct Node *next = NULL;

    while(head != NULL)
    {
        next = head -> link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
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

