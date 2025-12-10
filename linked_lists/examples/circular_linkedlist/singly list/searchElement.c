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
void searchElement(struct Node *tail,int key);

void main()
{   
    struct Node *tail = NULL;

    tail = circularList(tail);

    print_data(tail);

    searchElement(tail,45);
    
}

void searchElement(struct Node *tail,int key)
{
    int index = 0;
    struct Node *temp = tail->next;

    if(tail == NULL)
    {
        printf("No Elements in the List\n");
        return;
    }

    do
    {
        if(temp -> data == key)
        {
            printf("%d is found at %d Index of circular Singly List\n",key,index);
            return;
        }
        temp = temp -> next;
        index++;
    } while (temp != tail -> next);
    printf("%d is not Found in the List\n",key);
    return;
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