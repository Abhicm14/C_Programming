#include <stdio.h>
#include <stdlib.h>

int main()  // main should return int, not void
{
    FILE *fptr;
    int ch;

    // Open file in write mode ("w" creates it if it doesn't exist)
    fptr = fopen("docs/myfile.txt", "w");

    if (fptr == NULL)  // Check if fopen failed
    {
        printf("Error: Cannot create/open file 'docs/myfile.txt'\n");
        printf("Make sure the 'docs' directory exists.\n");
        return 1;  // Exit with error code
    }

    printf("Enter text (press Ctrl+Z on Windows or Ctrl+D on Linux/Mac to finish):\n");

    // Read from keyboard and write to file
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fptr);
    }

    fclose(fptr);
    printf("\nFile saved successfully!\n");

    return 0;
}

