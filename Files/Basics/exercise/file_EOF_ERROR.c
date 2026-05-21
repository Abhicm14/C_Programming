#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    const char *filename = "example.txt";
    
    // 1. Demonstrate perror() when file opening fails
    // We try to open a non-existent file in read-only mode to force a failure.
    FILE *fail_file = fopen("non_existent_file.xyz", "r");
    if (fail_file == NULL) 
    {
        perror("Expected Error - Failed to open file");
    } 
    else 
    {
        fclose(fail_file);
    }
    
    printf("\n--- Setup: Creating a file for testing ---\n");
    // Create a dummy file to read from later
    FILE *setup_file = fopen(filename, "w");
    if (setup_file == NULL) 
    {
        perror("Error creating test file");
        return EXIT_FAILURE;
    }
    fprintf(setup_file, "AB");
    fclose(setup_file);


    // -------------------------------------------------------------------------
    // 2. Try to read from a file opened in write-only mode & check ferror()
    // -------------------------------------------------------------------------
    printf("\n--- Test: Reading from a write-only file ---\n");
    FILE *write_only_file = fopen(filename, "w");
    if (write_only_file == NULL) 
    {
        perror("Error opening file in write mode");
        return EXIT_FAILURE;
    }

    // Attempting to read from a write-only stream will cause an indicator error
    int bad_ch = fgetc(write_only_file);
    
    // fgetc returns EOF on error, so we must check ferror() to see if it was an error
    if (bad_ch == EOF) 
    {
        if (ferror(write_only_file)) 
        {
            printf("Success: ferror() detected a read error on the write-only stream.\n");
        }
    }
    fclose(write_only_file);


    // -------------------------------------------------------------------------
    // 3. Demonstrate correct use of EOF with fgetc() & clearerr()
    // -------------------------------------------------------------------------
    printf("\n--- Test: Correct EOF handling and clearerr() ---\n");
    FILE *read_file = fopen(filename, "r");
    if (read_file == NULL) 
    {
        perror("Error opening file in read mode");
        return EXIT_FAILURE;
    }

    // CRITICAL: ch MUST be an int, NOT a char. 
    // EOF is typically -1, which won't fit correctly in an unsigned char 
    // and can cause a premature or missed loop exit.
    int ch; 

    printf("Reading file contents: ");
    while ((ch = fgetc(read_file)) != EOF) 
    {
        putchar(ch);
    }
    printf("\n");

    // The loop finished because fgetc returned EOF. Let's check why:
    if (feof(read_file)) 
    {
        printf("End of File (EOF) reached successfully.\n");
    } 
    else if (ferror(read_file)) 
    {
        printf("A stream error occurred instead of EOF.\n");
    }

    // Attempting to read again will just immediately keep returning EOF
    printf("Reading again after EOF returns: %d\n", fgetc(read_file));

    // Clear the EOF and error indicators
    printf("Calling clearerr()...\n");
    clearerr(read_file);

    // Verify indicators are reset
    if (!feof(read_file) && !ferror(read_file)) 
    {
        printf("Success: EOF and error flags have been cleared.\n");
    }

    fclose(read_file);
    return EXIT_SUCCESS;
}