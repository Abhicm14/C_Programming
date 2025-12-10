#include"school_gradeing.h"

void main()
{
    struct student *class = NULL;
    int totalstrength = 0;

    int choice;

    while(1)
    {
        printf("\n");
        choice = menu();

        switch (choice)
        {
            case 1:
            {
                addstudent(&class,&totalstrength);
                calculateaverage(&class,&totalstrength);
                break;
            }
            case 2:
            {
                updatemarks(&class,&totalstrength);
                calculateaverage(&class,&totalstrength);
                break;
            }
            case 3:
            {
                displaytoppers(&class,&totalstrength);
                break;
            }
            case 4:
            {
                freeclass(&class,&totalstrength);
                printf("\n > Exiting application. Goodbye!\n");
                exit(0);
            }
            default:
            {
                printf("Invalid Choice\n");
                break;
            }
        }
    }
}