#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void print_data(struct Node *head);
struct Node *circularSingly(int data);

void main()
{
    int data = 35;
    
    struct Node *tail;

    tail = circularSingly(data);

    print_data(tail);
    
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