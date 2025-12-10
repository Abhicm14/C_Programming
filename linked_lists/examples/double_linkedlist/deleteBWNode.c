#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};

void print_data(struct Node *head);
struct Node *delEnd(struct Node *head);
struct Node *deleteBWNode(struct Node *head,int pos);
struct Node *createList(struct Node *head);
struct Node *createNode(struct Node *head,int data);
struct Node *insertAtEnd(struct Node *head,int data); 

void main()
{
    struct Node *head = NULL;

    head = createList(head);

    print_data(head);
    //head = delEnd(head);
    deleteBWNode(head, 2);
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

struct Node *createList(struct Node *head)
{
   int num,data,count;

   printf("Enter the number of nodes : ");
   scanf("%d",&num);

   if(num == 0)
   {
        return head;
   }

   printf("Enter the element for the node 1: ");
   scanf("%d", &data);

   head = createNode(head,data);

   for(count = 1; count < num; count++)
   {
        printf("Enter the element for the node %d: ",count+1);
        scanf("%d", &data);
        head = insertAtEnd(head,data);
   }

   return head;

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

struct Node *delEnd(struct Node *head)
{
    struct Node *temp = head,*temp2 = NULL;

    while(temp ->next != NULL)
    {
        temp = temp->next;
    }
    temp2 = temp->prev;
    temp2 -> next = NULL;

    free(temp);
    temp = NULL;

    return head;
}

struct Node *deleteBWNode(struct Node *head,int pos)
{
    struct Node *temp1 = head, *temp2 = NULL;

    // if(pos == 1)
    // {
    //     head = delFirst(head);
    //     return head;
    // }
    while(pos > 1)
    {
        temp1 = temp1->next;
        pos--;
    }

    //if(temp1 -> next == NULL)
    // {
    //     head = delEnd(head);
    // }
    //else
    //{
        temp2 = temp1 -> prev;
        temp2 -> next = temp1 -> next;
        temp1 -> next -> prev = temp2;

        free(temp1);
        temp1 = NULL;
    //}

    return head;
}