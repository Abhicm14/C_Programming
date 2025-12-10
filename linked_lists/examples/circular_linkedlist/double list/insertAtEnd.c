#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

void print_data(struct Node *tail);
struct Node *circulardoubly(int data);
struct Node  *insertAtEnd(struct Node *tail,int data);

void main()
{
    struct Node *tail = NULL;

    tail = circulardoubly(45);
    print_data(tail);
    tail = insertAtEnd(tail,90);
    print_data(tail);
    
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

