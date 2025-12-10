#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void main()
{

}


struct Node *insertElement(struct Node *head,int data)
{
    struct Node *temp;
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode -> data = data;
    newNode -> next = NULL;

    int key = data;
    if(head == NULL || key < head -> data)
    {
        newNode -> next = head;
        head = newNode;
    }
    else
    {
        temp = head;
        while(temp -> next != NULL && temp -> next -> data < key)
        {
            temp = temp -> next;
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }
    return head;
}