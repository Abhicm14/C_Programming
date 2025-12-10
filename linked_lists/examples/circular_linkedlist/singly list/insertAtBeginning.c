#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void print_data(struct Node *head);
struct Node *circularSingly(int data);
struct Node *insertAtBeginning(struct Node *tail,int data);

void main()
{
    int data = 45;
    
    struct Node *tail;

    tail = circularSingly(data);

    print_data(tail);

    tail = insertAtBeginning(tail,90);

    print_data(tail);
    
}

struct Node *insertAtBeginning(struct Node *tail,int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode ->next = tail;
    newNode ->data = data;
    tail -> next = newNode;

    return newNode;
}

struct Node *circularSingly(int data)
{
    struct Node *temp = NULL;

    temp = malloc(sizeof(struct Node));

    temp ->data = data;
    temp ->next = temp;

    return temp;
}

void print_data(struct Node *tail)
{
    struct Node *ptr = tail ->next;

    do
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }while(ptr != tail ->next);
    printf("NULL\n");
}