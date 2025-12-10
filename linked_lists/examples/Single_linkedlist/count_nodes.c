#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void count_of_nodes(struct Node *head);

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
    
	count_of_nodes(head);
}

void count_of_nodes(struct Node *head)
{
	int count = 0;

	if(head == NULL)
	{
		printf("Linked List is empty");
		return;
	}

	struct Node *ptr = NULL;
	ptr = head;
	while(ptr != NULL)
	{
		count++;
		ptr = ptr->link;
	}
	printf("%d\n",count);
	return;
}

