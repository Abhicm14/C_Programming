#include"library.h"

void displaybook(struct Book **library, int *count)
{
    char author[MAX_NAME];
    int found = 0;

    printf("\nEnter Author : ");
    fgets(author,MAX_NAME,stdin);
    removeNewline(author);

    while (!valid_string(author))
    {
        printf("Error! Name must contain Only letters and spaces. \n");
        printf("Enter Author : ");
        fgets(author,MAX_NAME,stdin);
        removeNewline(author);
    }

    printf("\n--- Search Results for \"%s\" ---\n", author);

    for (int count1 = 0; count1 < *count; count1++)
    {
        // Check if the author matches (case-insensitive)
        if (mystrcasecmp((*library)[count1].author, author) == 0)
        {
            printf("---------------------------------------\n");
            printf("Title : %s\n", (*library)[count1].title);
            printf("Price : ₹%.2f\n", (*library)[count1].price);
            printf("ISBN  : %d\n", (*library)[count1].ISBN);
            printf("---------------------------------------\n");

            found = 1; 
        }
    }

    if (found == 0)
    {
        printf("---------------------------------------\n");
        printf("No Book Found by \"%s\"\n", author);
    }
    
    printf("---------------------------------------\n");
}