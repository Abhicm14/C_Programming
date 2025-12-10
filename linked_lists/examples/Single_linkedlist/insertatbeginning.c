#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void print_data(struct Node *head);
struct Node *insertAtBeginning(struct Node *head,int data);

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
    
	head = insertAtBeginning(head,9);
	//insertAtBeginning(&head,9);
	print_data(head);
}

struct Node *insertAtBeginning(struct Node *head,int data)
{
	struct Node *ptr = malloc(sizeof(struct Node));

	ptr->data = data;
	ptr->link = head;

	head = ptr;

	return head;
}

// void insertAtBeginning(struct Node **head,int data)
// {
// 	struct Node *ptr = malloc(sizeof(struct Node));
// 	ptr->data = data;
// 	ptr->link = NULL;

// 	ptr->link = *head;
// 	*head = ptr;
// }

void print_data(struct Node *head)
{
    if(head == NULL)
    {
        printf("Linked List is Empty\n");
        return;
    }

    struct Node *ptr = NULL;
    ptr = head;

    while(ptr != NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");
}

