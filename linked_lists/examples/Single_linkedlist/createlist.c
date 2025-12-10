#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};


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
    
}

