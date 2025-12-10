#include"library.h"

void main()
{
    int choice;

    struct Book *library = NULL;
    int totalbooks = 0; 

    while (1)
    {
        choice = menu();

        switch (choice)
        {
            case 1:
            {
                addnewbook(&library,&totalbooks);
                break;
            }
            case 2:
            {
                searchbook(&library,&totalbooks);
                break;
            }
            case 3:
            {
                displaybook(&library,&totalbooks);
                break;
            }
            case 4:
            {
                freelibrary(&library,&totalbooks);
                printf("\n >> Exiting system. Goodbye!\n");
                exit(0);
            } 
            default:
            {
                printf("Wrong Choice\n");
                break;
            }
        }
    }
    
}