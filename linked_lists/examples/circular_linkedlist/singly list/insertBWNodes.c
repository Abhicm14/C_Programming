#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void print_data(struct Node *head);
struct Node *circularSingly(int data);
struct Node *insertAtBeginning(struct Node *tail,int data);
struct Node *insertAtEnd(struct Node *tail,int data);
struct Node *insertBWNodes(struct Node *tail,int data,int pos);

void main()
{
    int data = 45;
    
    struct Node *tail;

    tail = circularSingly(data);

    print_data(tail);

    tail = insertAtBeginning(tail,90);

    print_data(tail);

    tail = insertAtEnd(tail,180);
    tail = insertAtEnd(tail,360);

    print_data(tail);

    tail = insertBWNodes(tail,135,2);
    tail = insertBWNodes(tail,225,4);

    print_data(tail);
    
}

struct Node *insertAtBeginning(struct Node *tail,int data)
{
    struct Node *newNode;

    newNode = circularSingly(data);

    newNode ->next = tail;
    newNode ->data = data;
    tail -> next = newNode;

    return newNode;
}

struct Node *insertAtEnd(struct Node *tail,int data)
{
    struct Node *newNode;

    newNode = circularSingly(data);

    newNode -> next = tail -> next;
    tail -> next = newNode;
    tail = tail -> next;
    
    return tail;
}

struct Node *insertBWNodes(struct Node *tail,int data,int pos)
{
    struct Node *temp, *newNode;

    newNode = circularSingly(data);
    // newNode = malloc(sizeof(struct Node));
    // newNode ->data = data;
    // newNode ->next = NULL;

    temp = tail -> next;

    while(pos > 1)
    {
        temp = temp -> next;
        pos--;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;

    if(temp == tail)
    {  
        tail = tail ->next;
    }
   
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