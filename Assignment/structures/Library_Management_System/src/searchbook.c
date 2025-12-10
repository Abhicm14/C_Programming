#include"library.h"

void searchbook(struct Book **library,int *count)
{
    int ISBN;

    printf("\nEnter ISBN to search : ");
    while(!valid_int(&ISBN) || ISBN < 0)
    {
        printf("Invalid! Enter ISBN to search : \n");
    }

    for(int count1 = 0; count1 < *count; count1++)
    {
        if(ISBN == (*library)[count1].ISBN)
        {
            printf("\n--- Book Found ---\n");
            printf("Title : %s\n",(*library)[count1].title);
            printf("Author : %s\n",(*library)[count1].author);
            printf("Price : ₹%.2f\n",(*library)[count1].price);
            printf("ISBN : %d\n",(*library)[count1].ISBN);
            return;
        }
    }

    printf("\n >> No Book Found\n");
    return;
}