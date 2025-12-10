#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void print_data(struct Node *head);
struct Node *circularSingly(int data);
struct Node *insertAtEnd(struct Node *tail,int data);
struct Node *circularList(struct Node *tail);
struct Node *deleteEndNode(struct Node *tail);

void main()
{   
    struct Node *tail = NULL;

    tail = circularList(tail);

    print_data(tail);

    tail = deleteEndNode(tail);

    print_data(tail);
    
}

struct Node *deleteEndNode(struct Node *tail)
{
    if(tail == NULL)
    {
        return tail;
    }
    
    if(tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    
    struct Node *temp = tail ->next;
    
    while(temp->next != tail)
    {
        temp = temp -> next;
    }
    temp -> next = tail -> next;
    
    free(tail);
    tail = temp;

    return tail;
}

struct Node *circularSingly(int data)
{
    struct Node *temp = NULL;

    temp = malloc(sizeof(struct Node));

    temp ->data = data;
    temp ->next = temp;

    return temp;
}

struct Node *insertAtEnd(struct Node *tail,int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode -> next = NULL;
    newNode -> data = data;

    newNode -> next = tail -> next;
    tail -> next = newNode;
    tail = tail -> next;
    
    return tail;
}

struct Node *circularList(struct Node *tail)
{
    struct Node *temp = NULL;

    int count, num, data;

    printf("Enter the number of nodes of the linked lists: ");
    scanf("%d", &num);

    if(num == 0)
        return tail;

    printf("Enter the element 1: ");
    scanf("%d", &data);

    tail = circularSingly(data);

    for(count =1; count < num; count++)
    {
        printf("Enter the element %d: ", count+1);
        scanf("%d", &data);
        tail = insertAtEnd(tail,data);
    }

    return tail;
}

void print_data(struct Node *tail)
{
    struct Node *ptr = tail ->next;

    if(tail == NULL)
    {
        printf("No Elements in the list\n");
        return;
    }
    do
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }while(ptr != tail ->next);
    printf("NULL\n");
}