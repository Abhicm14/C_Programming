#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void insert(FILE *fptr);
void del(FILE *fptr);
void modify(FILE *fptr);
void booksold(FILE *fptr);
int search(FILE *fptr,char *name);
void display(FILE *fptr);
void list(FILE *fptr);

struct Book
{
    char name[50];
    int ncopies;
    float cost;
}book;

void main()
{
    int choice;
    
    FILE *fptr;

    fptr = fopen("files/book.txt","rb+");
    if(fptr == NULL)
    {
        fptr = fopen("files/book.txt","wb+");
        if(fptr == NULL)
        {
            puts("Error in opening file\n");
            exit(1);
        }
    }

    while(1)
    {
        printf("1.Insert a new record\n");
        printf("2.Delete a record\n");
        printf("3.Display record of a book\n");
        printf("4.Modify an existing record\n");
        printf("5.List all records\n");
        printf("6.Book Sold\n");
        printf("7.Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                insert(fptr);
                break;
            }
            case 2:
            {
                del(fptr);
                break;
            }
            case 3:
            {
                display(fptr);
                break;
            }
            case 4:
            {
                modify(fptr);
                break;
            }
            case 5:
            {
                list(fptr);
                break;
            }
            case 6:
            {
                booksold(fptr);
                break;
            }
            case 7:
            {
                fclose(fptr);
                exit(1);
            }
            default:
            {
                printf("Wrong Choice\n");
            }
        }
    }
}

void insert(FILE *fptr)
{
    fseek(fptr,0,2);
    
    printf("Enter book name : ");
    scanf("%s",book.name);
    
    printf("Enter number of copies : ");
    scanf("%d",&book.ncopies);
    
    printf("Enter cost of book : ");
    scanf("%f",&book.cost);
    
    fwrite(&book,sizeof(book),1,fptr);
}

void del(FILE *fptr)
{
    FILE *fptmp;
    char name[20];

    printf("Enter the name of book to be deleted from database   : ");
    scanf("%s",name);

    if(search(fptr,name) == 0)
        return;
    
    fptmp = fopen("files/tempfile.txt","wb");

    rewind(fptr);

    while(fread(&book,sizeof(book),1,fptr) == 1)
    {
        if(strcmp(name,book.name) != 0)
        {
            fwrite(&book,sizeof(book),1,fptmp);
        }
    }

    fclose(fptr);
    fclose(fptmp);

    remove("files/books.txt");
    rename("files/tempfile.txt","files/books.txt");
    
    printf("\nRecord deleted.......\n\n");
    
    fptr = fopen("files/books.txt","rb+");

}

void modify(FILE *fptr)
{
    char name[50];
    long size = sizeof(book);

    printf("Enter the name of the book to be modified : ");
    scanf("%s",name);

    if(search(fptr,name) == 1)
    {
        printf("Enter new data-->\n\n");
        
        printf("Enter book name : ");
        scanf("%s",book.name);

        printf("Enter number of copies : ");
        scanf("%d",&book.ncopies);

        printf("Enter cost of book : ");
        scanf("%f",&book.cost);

        fseek(fptr,-size,1);
        fwrite(&book,sizeof(book),1,fptr);

        printf("\nRecord successfully modified\n\n");
    }
}

void booksold(FILE *fptr)
{
    char name[50];
    long size = sizeof(book);

    printf("Enter the name of the book to be sold : ");
    scanf("%s",name);

    if(search(fptr,name) == 1)
    {
        if(book.ncopies > 0)
        {
            book.ncopies--;
            
            fseek(fptr,-size,1);
            fwrite(&book,sizeof(book),1,fptr);
            
            printf("One book sold\n");
            printf("Now number of copies = %d\n",book.ncopies);
        }
        else
        {
            printf("Book is out of stock\n\n");
        }
    }

}

void display(FILE *fptr)
{
    char name[50];

    printf("Enter the name of the book : ");
    scanf("%s",name);

    search(fptr,name);

    printf("\nName\t%s\n",book.name);
    printf("Copies\t%d\n",book.ncopies);
    printf("Cost\t%f\n\n",book.cost);

}

int search(FILE *fptr,char *name)
{
    unsigned flag=0;
    rewind(fptr);

    while(fread(&book,sizeof(book),1,fptr)==1)
    {
        if(strcmp(name,book.name) == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("\nName not found in file\n\n");
    }
    return flag;
}

void list(FILE *fptr)
{
    rewind(fptr);

    printf("\nName\tCopies\t\tCost\n\n");
    while(fread(&book,sizeof(book),1,fptr)==1)
    {
        printf("%s\t",book.name);
        printf("%d\t\t",book.ncopies);
        printf("%f\n",book.cost);
    }
    printf("\n");
}