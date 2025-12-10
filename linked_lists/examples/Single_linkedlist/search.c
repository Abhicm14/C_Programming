#include<stdio.h>

struct Node
{
        int data;
        struct Node *next;
};

struct Node *search(struct Node *head,int key);
int searchpos(struct Node *head,int key);

void main()
{
        struct Node head = {10,NULL};

}

struct Node *search(struct Node *head,int key)
{
	struct Node *temp = head;
	while(temp != NULL)
	{
		if(temp -> data == key)
			return temp;
		temp = temp->next;
	}
	return NULL;
}

int searchpos(struct Node *head,int key)
{
	struct Node *temp = head;
	int pos = 0;
	
 	while(temp != NULL)
	{
		if(temp -> data == key)
		{
			return pos;
		}
		temp = temp -> next;
		pos++;
	}
	return -1;
}
