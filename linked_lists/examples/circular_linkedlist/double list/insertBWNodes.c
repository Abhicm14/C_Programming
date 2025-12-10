#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

void print_data(struct Node *tail);
struct Node *circulardoubly(int data);
struct Node  *insertAtBeginning(struct Node *tail,int data);
struct Node  *insertAtEnd(struct Node *tail,int data);
struct Node *insertBWNodes(struct Node *tail,int data,int pos);

void main()
{
    struct Node *tail = NULL;

    tail = circulardoubly(45);
    print_data(tail);
    tail = insertAtEnd(tail,180);
    print_data(tail);
    tail = insertBWNodes(tail,90,1);
    print_data(tail);
    
}

struct Node  *insertAtBeginning(struct Node *tail,int data)
{
    struct Node *newNode = circulardoubly(data);

    if(tail == NULL)
    {
        return newNode;
    }
    else
    {
        struct Node *temp = tail -> next;

        newNode -> prev = tail;
        newNode -> next = temp;
        temp -> prev = newNode;
        tail -> next = newNode;
        return tail;
    }
    
}

struct Node  *insertAtEnd(struct Node *tail,int data)
{
    struct Node *newNode = circulardoubly(data);

    if(tail == NULL)
    {
        return newNode;
    }
    else
    {
        struct Node *temp = tail -> next;
        
        newNode -> next = temp;
        newNode -> prev = tail;
        tail -> next = newNode;
        temp -> prev = newNode;
        tail = newNode;
        return tail;
    }
    
}

struct Node *insertBWNodes(struct Node *tail,int data,int pos)
{
    struct Node *newNode = circulardoubly(data);

    if(tail == NULL)
    {
        return newNode;
    }

    struct Node *temp = tail -> next;
    while(pos > 1)
    {
        temp = temp -> next;
        pos--;
    }

    newNode -> prev = temp;
    newNode -> next = temp -> next;
    temp -> next -> prev = newNode;
    temp -> next = newNode;
    if(temp == tail)
    {
        tail = tail -> next;
    }
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

