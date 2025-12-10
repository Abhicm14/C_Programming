#include<stdio.h>

void display_menu(void)
{
	printf("1.Create Database\n");
	printf("2.Modify the record\n");
	printf("3.Insert the record\n");
	printf("4.Delete record\n");
	printf("5.Exit\n");
}

void main()
{
	int choice;
	
	display_menu();

	printf("Enter the Choice : ");
	scanf("%d",&choice);
}
