#include<stdio.h>
#include<stdlib.h>

/*===== Node definition =====*/
struct Node
{
    int data;
    struct Node *next;
};

/*==== Function prototypes ====*/
struct Node *createNode(int value);
void insertAtBeginning(struct Node **headRef,int value);
void insertAtEnd(struct Node **headRef,int value);
void deleteFirst(struct Node **headRef);
void deleteByKey(struct Node **headRef,int key);
struct Node *search(struct Node *head, int key);
void reverseList(struct Node **headRef);
void traverse(struct Node *head);
void freeList(struct Node **headRef);

/* ==== Main(menu-driven) ====*/

int main(void)
{
    struct Node *head = NULL;
    int choice, value, key;

    while(1)
    {
        printf("\n ---- Singly Linked List Menu ----\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Delete first node\n");
        printf("4. Delete node by value\n");
        printf("5. Search for a value\n");
        printf("6. Reverse the list\n");
        printf("7. Display the list\n");
        printf("8. Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                printf("Enter value to insert at beginning : ");
                scanf("%d", &value);
                insertAtBeginning(&head,value);
                break;
            }
            case 2:
            {
                printf("Enter value to insert at end : ");
                scanf("%d", &value);
                insertAtEnd(&head,value);
                break;
            }
            case 3:
            {
                deleteFirst(&head);
                break;
            }
            case 4:
            {
                printf("Enter value to delete : ");
                scanf("%d", &key);
                deleteByKey(&head,key);
                break;
            }
            case 5:
            {
                printf("Enter value to search : ");
                scanf("%d", &key);
                {
                    struct Node *result = search(head, key);
                    if(result != NULL)
                        printf("Value %d found at address %p\n",key,(void*)result);
                    else
                        printf("Value %d not found in the list. \n", key);
                }
                break;
            }
            case 6:
            {
                reverseList(&head);
                printf("List reversed. \n");
                break;
            }
            case 7:
            {
                traverse(head);
                break;
            }
            case 8:
            {
                freeList(&head);
                printf("Exiting....\n");
                return 0;
            }
            default:
            {
                printf("Invalid choice. Try again. \n");
            }
        }
    }
}

/* -------- Function definitions -------- */

/* Create a new node with given value */
struct Node *createNode(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        printf("Memory allocation failed. \n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

/* Insert a node at the beginning of the list */
void insertAtBeginning(struct Node **headRef, int value)
{
    struct Node *newNode = createNode(value);
    newNode->next = *headRef; // new node points to old head
    *headRef = newNode; // head now points to new node
}

/*Insert a node at the end of the list */
void insertAtEnd(struct Node **headRef, int value)
{
    struct Node *newNode = createNode(value);

    if(*headRef == NULL)
    {
        *headRef = newNode;
        return;
    }

    struct Node *temp = *headRef;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

/* Delete the first node of the list */
void deleteFirst(struct Node **headRef)
{
    if(*headRef == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node *temp = *headRef;
    *headRef = (*headRef)->next;
    printf("Deleted value : %d\n", temp->data);
    free(temp);
}

/* Delete first node that contains 'key' as data */
void deleteByKey(struct Node **headRef, int key)
{
    if(*headRef == NULL)
    {
        printf("List is empty. Nothing to delete. \n");
        return;
    }

    struct Node *temp = *headRef;
    struct Node *prev = NULL;

    /* If head node itself holds the key */
    if(temp != NULL && temp->data == key)
    {
        *headRef = temp->next;
        printf("Deleted value : %d\n", temp->data);
        free(temp);
        return;
    }

    /* Search for the key, keep track of previous node */
    while(temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    /*If key was not present in the list */
    if(temp == NULL)
    {
        printf("Value %d not found in the list. \n", key);
        return;
    }

    prev->next = temp->next;
    printf("Deleted value : %d\n",temp->data);
    free(temp);
}

/* Search for a node containing 'key'; return pointer to node or NULL */
struct Node *search(struct Node *head, int key)
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        if(temp != NULL)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

/* Reverse the linked list (iterative method) */
void reverseList(struct Node **headRef)
{
    struct Node *prev = NULL;
    struct Node *curr = *headRef;
    struct Node *next = NULL;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *headRef = prev;
}

/* Display all elements in the list */
void traverse(struct Node *head)
{
    struct Node *temp = head;
    if(temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("List : ");
    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

/* Free all nodes in the list */
void freeList(struct Node **headRef)
{
    struct Node *temp = *headRef;
    while(temp != NULL)
    {
        struct Node *next = temp->next;
        free(temp);
        temp = next;
    } 
    *headRef = NULL;
}