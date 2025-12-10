#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *circulardoubly(int data);
void print_data(struct Node *tail);
struct Node *deleteBWNodes(struct Node *tail,int pos);

void main()
{
    struct Node *tail = NULL;

    tail = circulardoubly(45);

    print_data(tail);

    tail = deleteBWNodes(tail,1);

    print_data(tail);
    
}

// //List Must be sorted
// struct Node *insertElementNodes(struct Node *tail,int data)
// {
//     struct Node *temp = tail -> next;

// }

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

