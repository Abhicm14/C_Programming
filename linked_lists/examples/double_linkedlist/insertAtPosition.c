#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *createNode(struct Node *head,int data);
struct Node *insertAtEnd(struct Node *head,int data);
struct Node *insertAtPosition(struct Node *head,int data, int pos);
void print_data(struct Node *head);

void main()
{
    struct Node *ptr, *head = NULL;

    head = createNode(head,45);

    print_data(head);

    head = insertAtEnd(head,180);

    print_data(head);

    head = insertAtPosition(head,90,1);

    print_data(head);
}

void print_data(struct Node *head)
{
    struct Node *ptr = NULL;

    ptr = head;
    while(ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

struct Node *createNode(struct Node *head,int data)
{
    struct Node *temp = malloc(sizeof(struct Node));

    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;

    head = temp;

    return head;
}

struct Node *insertAtEnd(struct Node *head,int data)
{
    struct Node *temp, *start = NULL,*ptr;

    temp = createNode(start,data);

    ptr = head;
    while( ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;

    return head;
    
}

struct Node *insertAtPosition(struct Node *head,int data, int pos)
{
    struct Node *newNode = NULL;
     
    newNode = createNode(newNode,data);

    struct Node *temp1 = head,*temp2 = NULL;

    while(pos != 1)
    {
        temp1 = temp1->next;
        pos--;
    }
    if(temp1 -> next == NULL)
    {
        temp1 -> next = newNode;
        newNode -> prev = temp1;
    }
    else
    {
        temp2 = temp1->next;
        temp1 -> next = newNode;
        temp2 -> prev = newNode;

        newNode -> next = temp2;
        newNode -> prev = temp1;
    }

    return head;

}

struct Node *insertAtBeginning(struct Node *head,int data)
{
    struct Node *temp = malloc(sizeof(struct Node));

    head->prev = temp;
    temp ->prev = NULL;
    temp->data = data;
    temp->next = head;

    head = temp;
    return head;   
}

// struct Node *insertBeforePosition(struct Node *head,int data, int position)
// {
//     struct Node *newNode = NULL;
//     struct Node *temp1 = head;
//     struct Node *temp2 = NULL;

//     newNode = createNode(newNode,data);

//     int pos = position;

//     while(pos > 2)
//     {
//         temp1 = temp1->next;
//         pos--;
//     }
//     if(position == 1)
//     {
//         head = insertAtBeginning(head,data);
//     }
//     else
//     {
//         temp2 = temp1 -> next;
//         temp1 -> next = newNode;
//         temp2 -> prev = newNode;
//         newNode -> next = temp2;
//         newNode -> prev = temp1;
//     }
// } 
