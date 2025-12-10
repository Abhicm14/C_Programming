#include"library.h"

int menu(void)
{
    int choice;

    printf("\n=== Library Management System ===\n");
    printf("1. Add New Book\n");
    printf("2. Search Book by ISBN\n");
    printf("3. Display Books by Author\n");
    printf("4. Exit\n");
    
    printf("\nEnter your choice : ");
    while(!valid_int(&choice) || choice < 0)
    {
        printf("Enter your choice : ");
    }

    return choice;
}