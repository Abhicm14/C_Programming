#include"library.h"

void addnewbook(struct Book **library,int *count)
{
    struct Book *temp = realloc(*library, (*count + 1) * sizeof(struct Book));
    
    if(temp == NULL)
    {
        printf("Memory allocation failed! Out of Memory. \n");
        return;
    }

    *library = temp;
    
    int current = *count;

    printf("\n Enter Book Details : \n");

    printf("Enter Title : ");
    fgets((*library)[current].title,MAX_NAME,stdin);
    removeNewline((*library)[current].title);

    while (!valid_string((*library)[current].title))
    {
        printf("Error! Title must contain Only letters and spaces. \n");
        printf("Enter Title : ");
        fgets((*library)[current].title,MAX_NAME,stdin);
        removeNewline((*library)[current].title);
    }

    printf("Enter Author : ");
    fgets((*library)[current].author,MAX_NAME,stdin);
    removeNewline((*library)[current].author);

    while (!valid_string((*library)[current].author))
    {
        printf("Error! Name must contain Only letters and spaces. \n");
        printf("Enter Author : ");
        fgets((*library)[current].author,MAX_NAME,stdin);
        removeNewline((*library)[current].author);
    }

    printf("Enter Price : ");
    while(!valid_float(&((*library)[current].price)) || (*library)[current].price < 0)
    {
        printf("Invalid! Please Enter Greater Than Zero\n");
    }

    printf("Enter ISBN : ");
    while(!valid_int(&((*library)[current].ISBN)) || (*library)[current].ISBN < 0)
    {
        printf("Invalid! Please Enter Greater Than Zero\n");
    }
    
    (*count)++;
    printf("\n> Book \"%s\" added Successfully.\n",(*library)[current].title);

}