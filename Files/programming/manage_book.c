#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void insert(FILE **fptr);
void del(FILE **fptr);
void modify(FILE **fptr);
void booksold(FILE **fptr);
int search(FILE *fptr, char *name);
void display(FILE *fptr);
void list(FILE *fptr);

struct Book
{
    char name[50];
    int ncopies;
    float cost;
} book;

int main()
{
    int choice;
    FILE *fptr;

    // Open in text mode (r+ for read/write)
    fptr = fopen("files/book.txt", "r+");
    if (fptr == NULL)
    {
        // Create new file if doesn't exist
        fptr = fopen("files/book.txt", "w+");
        if (fptr == NULL)
        {
            puts("Error in opening file");
            exit(1);
        }
    }

    while (1)
    {
        printf("\n===== BOOK MANAGEMENT SYSTEM =====\n");
        printf("1. Insert a new record\n");
        printf("2. Delete a record\n");
        printf("3. Display record of a book\n");
        printf("4. Modify an existing record\n");
        printf("5. List all records\n");
        printf("6. Book Sold\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert(&fptr);
                break;
            case 2:
                del(&fptr);
                break;
            case 3:
                display(fptr);
                break;
            case 4:
                modify(&fptr);
                break;
            case 5:
                list(fptr);
                break;
            case 6:
                booksold(&fptr);
                break;
            case 7:
                fclose(fptr);
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Wrong Choice!\n");
        }
    }
    return 0;
}

void insert(FILE **fptr)
{
    // Move to end of file
    fseek(*fptr, 0, SEEK_END);

    printf("Enter book name: ");
    scanf("%s", book.name);

    printf("Enter number of copies: ");
    scanf("%d", &book.ncopies);

    printf("Enter cost of book: ");
    scanf("%f", &book.cost);

    // Write as human-readable text
    fprintf(*fptr, "%s %d %.2f\n", book.name, book.ncopies, book.cost);
    fflush(*fptr);

    printf("Record inserted successfully!\n");
}

void del(FILE **fptr)
{
    FILE *fptmp;
    char name[50];
    int found = 0;

    printf("Enter the name of book to be deleted: ");
    scanf("%s", name);

    if (search(*fptr, name) == 0)
        return;

    fptmp = fopen("files/tempfile.txt", "w");
    if (fptmp == NULL)
    {
        printf("Error creating temp file!\n");
        return;
    }

    rewind(*fptr);

    // Copy all records except the one to delete
    while (fscanf(*fptr, "%s %d %f", book.name, &book.ncopies, &book.cost) == 3)
    {
        if (strcmp(name, book.name) != 0)
        {
            fprintf(fptmp, "%s %d %.2f\n", book.name, book.ncopies, book.cost);
        }
        else
        {
            found = 1;
        }
    }

    fclose(*fptr);
    fclose(fptmp);

    remove("files/book.txt");
    rename("files/tempfile.txt", "files/book.txt");

    if (found)
        printf("\nRecord deleted successfully!\n\n");

    *fptr = fopen("files/book.txt", "r+");
}

void modify(FILE **fptr)
{
    FILE *fptmp;
    char name[50];
    int found = 0;

    printf("Enter the name of the book to be modified: ");
    scanf("%s", name);

    if (search(*fptr, name) == 0)
        return;

    fptmp = fopen("files/tempfile.txt", "w");
    if (fptmp == NULL)
    {
        printf("Error creating temp file!\n");
        return;
    }

    rewind(*fptr);

    while (fscanf(*fptr, "%s %d %f", book.name, &book.ncopies, &book.cost) == 3)
    {
        if (strcmp(name, book.name) == 0)
        {
            // Get new data for this book
            printf("\nEnter new data:\n");

            printf("Enter book name: ");
            scanf("%s", book.name);

            printf("Enter number of copies: ");
            scanf("%d", &book.ncopies);

            printf("Enter cost of book: ");
            scanf("%f", &book.cost);

            found = 1;
        }
        fprintf(fptmp, "%s %d %.2f\n", book.name, book.ncopies, book.cost);
    }

    fclose(*fptr);
    fclose(fptmp);

    remove("files/book.txt");
    rename("files/tempfile.txt", "files/book.txt");

    if (found)
        printf("\nRecord modified successfully!\n\n");

    *fptr = fopen("files/book.txt", "r+");
}

void booksold(FILE **fptr)
{
    FILE *fptmp;
    char name[50];
    int found = 0;

    printf("Enter the name of the book sold: ");
    scanf("%s", name);

    if (search(*fptr, name) == 0)
        return;

    fptmp = fopen("files/tempfile.txt", "w");
    if (fptmp == NULL)
    {
        printf("Error creating temp file!\n");
        return;
    }

    rewind(*fptr);

    while (fscanf(*fptr, "%s %d %f", book.name, &book.ncopies, &book.cost) == 3)
    {
        if (strcmp(name, book.name) == 0)
        {
            if (book.ncopies > 0)
            {
                book.ncopies--;
                printf("One book sold!\n");
                printf("Remaining copies: %d\n\n", book.ncopies);
                found = 1;
            }
            else
            {
                printf("Book is out of stock!\n\n");
            }
        }
        fprintf(fptmp, "%s %d %.2f\n", book.name, book.ncopies, book.cost);
    }

    fclose(*fptr);
    fclose(fptmp);

    remove("files/book.txt");
    rename("files/tempfile.txt", "files/book.txt");

    *fptr = fopen("files/book.txt", "r+");
}

void display(FILE *fptr)
{
    char name[50];

    printf("Enter the name of the book: ");
    scanf("%s", name);

    if (search(fptr, name) == 1)
    {
        printf("\n+----------------------+\n");
        printf("|    BOOK DETAILS      |\n");
        printf("+----------------------+\n");
        printf("| Name:   %-12s |\n", book.name);
        printf("| Copies: %-12d |\n", book.ncopies);
        printf("| Cost:   %-12.2f |\n", book.cost);
        printf("+----------------------+\n\n");
    }
}

int search(FILE *fptr, char *name)
{
    int flag = 0;
    rewind(fptr);

    while (fscanf(fptr, "%s %d %f", book.name, &book.ncopies, &book.cost) == 3)
    {
        if (strcmp(name, book.name) == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("\nBook not found in database!\n\n");
    }
    return flag;
}

void list(FILE *fptr)
{
    int count = 0;
    rewind(fptr);

    printf("\n+----------------------+--------+------------+\n");
    printf("| %-20s | %-6s | %-10s |\n", "Book Name", "Copies", "Cost");
    printf("+----------------------+--------+------------+\n");

    while (fscanf(fptr, "%s %d %f", book.name, &book.ncopies, &book.cost) == 3)
    {
        printf("| %-20s | %-6d | %-10.2f |\n", book.name, book.ncopies, book.cost);
        count++;
    }

    printf("+----------------------+--------+------------+\n");

    if (count == 0)
        printf("|       No records found!                    |\n");

    printf("| Total records: %-27d |\n", count);
    printf("+--------------------------------------------+\n\n");
}