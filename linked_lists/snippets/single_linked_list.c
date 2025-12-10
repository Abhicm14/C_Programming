// Program of single linked list

#include<stdio.h>
#include<stdlib.h>


struct node 
{
	int info;
	struct node *link;
}*start;

void create_list(int data);
void addAtbeg(int data);
void addafter(int data, int pos);
void del(int data);
void display();
void search(int data);

void main()
{
	int choice;
	int nodes;
	int elements;
	int position;
	int count;

	while(1)
	{
		printf("1.Create List\n");
		printf("2.Add at begining\n");
		printf("3.Add after \n");
		printf("4.Delete\n");
		printf("5.Display\n");
		printf("6.Search\n");
		printf("7.Quit\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				start = NULL;
				printf("How Many nodes you want  : ");
				scanf("%d",&nodes);

				for(count = 0; count < nodes; count++)
				{
					printf("Enter the element : ");
					scanf("%d",&elements);
					create_list(elements);
				}
				break;
			}
			case 2:
			{
				printf("Enter the element : ");
				scanf("%d",&elements);

				addAtbeg(elements);
				break;
			}
			case 3:
			{
				printf("Enter the element : ");
				scanf("%d",&elements);

				printf("Enter the position after which this element is inserted : ");
				scanf("%d",&position);

				addafter(elements,position);

				break;
			}
			case 4:
			{
				if(start == NULL)
				{
					printf("List is empty\n");
					continue;
				}
				printf("Enter the element for deletion : ");
				scanf("%d",&elements);

				break;
			}
			case 5:
			{
				display();
				break;
			}
			case 6:
			{
				printf("Enter the element to be searched  : ");
				scanf("%d",&elements);

				search(elements);

				break;
			}
			case 7:
			{
				exit(1);
			}
			default:
			{
				printf("Wrong choice\n");
			}
		}
	}
}

void create_list(int data)
{
	struct node *q,*tmp;

	tmp = malloc(sizeof(struct node));

	tmp -> info = data;
	tmp -> link = NULL;

	if(start == NULL)
	{
		start = tmp;
	}
	else
	{
		q = start;
		while(q->link != NULL)
		{
			q = q->link;
		}
		q->link = tmp;
	}
}

void addAtbeg(int data)
{
	struct node *tmp;

	tmp = malloc(sizeof(struct node));

	tmp->info = data;
	tmp->link = start;

	start = tmp;
}

void addafter(int data, int pos)
{
	struct node *tmp, *q;
	int i;
	
	q = start;

	for(i=0; i<pos-1; i++)
	{
		q = q->link;
		if(q == NULL)
		{
			printf("There are less than %d elements",pos);
			return;
		} 
	}

	tmp = malloc(sizeof(struct node));
	tmp -> link = q -> link;
	tmp -> info = data;
	q -> link = tmp;
}

void del(int data)
{
	struct node *tmp, *q;

	if(start -> info == data)
	{
		tmp = start;
		start = start -> link;
		free(tmp);
		return;
	}

	q = start;
	while(q -> link -> link != NULL)
	{
		if(q -> link -> info == data)
		{
			tmp = q -> link;
			q -> link = tmp -> link;
			free(tmp);
			return;
		}
		q = q -> link;
	}

	if(q -> link -> info == data)
	{
		tmp = q -> link;
		free(tmp);
		q -> link = NULL;
		return;
	}
}

void display()
{
	struct node *q;

	if(start == NULL)
	{
		printf("List is empty\n");
		return;
	}

	q = start;
	printf("List is : \n");
	while(q != NULL)
	{
		printf("%d ",q -> info);
		q = q -> link;
	}
	printf("\n");
}

void search(int data)
{
	struct node *ptr = start;

	int pos = 1;

	while (ptr != NULL)
	{
		if(ptr -> info == data)
		{
			printf("Item %d found at position %d\n",data,pos);
			return;
		}
		ptr = ptr -> link;
		pos++;
	}

	if(ptr == NULL)
		printf("Item %d not found in list\n",data);
}